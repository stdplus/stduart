#include "recv_area.h"
#include "ui_recv_area.h"

extern struct uart_setting uart_set;

recv_area::recv_area(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::recv_area)
{
    ui->setupUi(this);

    setLayout(ui->gridLayout );

    recv_timer = new QTimer(this);
    connect(recv_timer, SIGNAL(timeout()), this, SLOT(recv_timeout()));

}

recv_area::~recv_area()
{
    delete ui;
}
void recv_area::recv_timeout()
{
    recv_timer->stop();
    disp_info();
}

void recv_area::recv(QByteArray arr)
{
    recv_buf.append(arr);
    recv_frame.append(arr);

    if(uart_set.recv_set.is_swap){
        recv_timer->start(uart_set.recv_set.swap_timeout);
    }else{
        disp_info();
    }
}


void recv_area::disp_info()
{
    QString ascii_buf;
    QString hex_buf;

    /*
    if(is_recv_pulse){
        recv_frame.clear();
        return;
    }
*/
    QString ret(recv_frame.toHex().toUpper());
    int len = ret.length()/2;
    for(int i=1;i<len;i++)
    {
        ret.insert(2*i+i-1," ");
    }
    ret.append(" ");
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser_2->moveCursor(QTextCursor::End);

    ui->textBrowser->setTextColor(uart_set.recv_set.timestamp_color);
    ui->textBrowser_2->setTextColor(uart_set.recv_set.timestamp_color);
    if(uart_set.recv_set.is_sn){

        ascii_buf = "["+
                QString::number(uart_set.recv_set.sn, 10) +
                 "]";

        hex_buf = "["+
                QString::number(uart_set.recv_set.sn, 10) +
                "]";
        ui->textBrowser->insertPlainText(ascii_buf);
        ui->textBrowser_2->insertPlainText(hex_buf);

    }

    if(uart_set.recv_set.is_timestamp){
        QDateTime current_date_time =QDateTime::currentDateTime();
        QString current_date =current_date_time.toString(uart_set.recv_set.timestamp_format);

        ascii_buf += "["+current_date + "]";
        hex_buf += "["+current_date + "]";

        ui->textBrowser->insertPlainText("["+current_date + "]");
        ui->textBrowser_2->insertPlainText("["+current_date + "]");
    }

    ui->textBrowser->setTextColor(uart_set.recv_set.color);
    ui->textBrowser_2->setTextColor(uart_set.recv_set.color);

    ascii_buf += recv_frame;
    hex_buf += ret;
    ui->textBrowser->insertPlainText(recv_frame);
    ui->textBrowser_2->insertPlainText(ret);



    if(uart_set.recv_set.is_swap){
        ascii_buf += "\r\n";
        hex_buf += "\r\n";
        ui->textBrowser->insertPlainText("\r\n");
        ui->textBrowser_2->insertPlainText("\r\n");
    }

    if(uart_set.log_mode == 0)
    {
        uart_set.log_file->write(ascii_buf.toUtf8());
    }
    else if(uart_set.log_mode == 1)
    {
        uart_set.log_file->write(hex_buf.toUtf8());
    }
    else if(uart_set.log_mode == 2)
    {
        uart_set.log_file->write("[ASCII]");
        uart_set.log_file->write(ascii_buf.toUtf8());
        uart_set.log_file->write("[HEX]");
        uart_set.log_file->write(hex_buf.toUtf8());
    }



    recv_frame.clear();

    /*
    QVariant v;
    struct statusbar_fix value_fix;
    value_fix.recv_buf_size = recv_buf.length();
    value_fix.recv_frames = recv_frame_count;

    v.setValue(value_fix);
    emit statusbar_fix(v);

    uart_set.recv_set.sn++;
    recv_frame_count++;

    */

}

void recv_area::recv_buttom_cmd(qint16 cmd)
{
    recv_buf.clear();
    recv_frame.clear();
    recv_timer->stop();

    ui->textBrowser->clear();
    ui->textBrowser_2->clear();
}
