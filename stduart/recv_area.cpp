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

    ui->textBrowser_2->hide();
    ui->tableView->hide();
    ui->widget->hide();


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
void recv_area::aaa(int v)
{
    qDebug()<<v;
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

void recv_area::setting_charged(QVariant v)
{
    struct uart_setting set;

    set = v.value<struct uart_setting >();


    if(set.recv_set.is_hex){
        ui->textBrowser_2->show();
    }else{
        ui->textBrowser_2->hide();
    }


    if(set.recv_set.is_ascii){
        ui->textBrowser->show();
    }else{
        ui->textBrowser->hide();
    }

}

#include <QInputMethodEvent>
void recv_area::recvarea_append_str(QColor color, QString str)
{
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->setTextColor(color);


    ui->textBrowser->insertPlainText(str);
    ui->textBrowser->moveCursor(QTextCursor::End);
}

void recv_area::recvarea_hex_append_str(QColor color, QString str)
{
    ui->textBrowser_2->moveCursor(QTextCursor::End);
    ui->textBrowser_2->setTextColor(color);


    ui->textBrowser_2->insertPlainText(str);
    ui->textBrowser_2->moveCursor(QTextCursor::End);
}


void recv_area::disp_info()
{
    QString ascii_buf;
    QString hex_buf;


    if(uart_set.recv_set.is_suspend){

        ui->textBrowser->setStyleSheet("border:2px solid rgb(255,0,0);");

        recv_frame.clear();
        return;
    }

    ui->textBrowser->setStyleSheet("border:none solid rgb(0,0,0);");
    QString ret(recv_frame.toHex().toUpper());
    int len = ret.length()/2;
    for(int i=1;i<len;i++)
    {
        ret.insert(2*i+i-1," ");
    }
    ret.append(" ");

    if(uart_set.recv_set.is_sn){

        ascii_buf = "["+
                QString::number(uart_set.recv_set.sn, 10) +
                 "]";

        hex_buf = "["+
                QString::number(uart_set.recv_set.sn, 10) +
                "]";
        recvarea_append_str(uart_set.recv_set.timestamp_color, ascii_buf);
        recvarea_hex_append_str(uart_set.recv_set.timestamp_color, hex_buf);
    }

    if(uart_set.recv_set.is_timestamp){
        QDateTime current_date_time =QDateTime::currentDateTime();
        QString current_date =current_date_time.toString(uart_set.recv_set.timestamp_format);

        ascii_buf += "["+current_date + "]";
        hex_buf += "["+current_date + "]";

        recvarea_append_str(uart_set.recv_set.timestamp_color, "["+current_date + "]");
        recvarea_hex_append_str(uart_set.recv_set.timestamp_color, "["+current_date + "]");

    }

    ascii_buf += recv_frame;
    hex_buf += ret;

    recvarea_append_str(uart_set.recv_set.color, recv_frame);
    recvarea_hex_append_str(uart_set.recv_set.color, ret);

    if(uart_set.recv_set.is_swap){
        ascii_buf += "\r\n";
        hex_buf += "\r\n";

        recvarea_append_str(uart_set.recv_set.color,"\r\n");
        recvarea_hex_append_str(uart_set.recv_set.color, "\r\n");
    }

    if(uart_set.is_log){
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

    }

    recv_frame.clear();


    //  ui->textBrowser->moveCursor(QTextCursor::End);
    //  ui->textBrowser_2->moveCursor(QTextCursor::End);

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
    //清空
    if(cmd == 1)
    {
        recv_buf.clear();
        recv_frame.clear();
        recv_timer->stop();

        ui->textBrowser->clear();
        ui->textBrowser_2->clear();

    }
    //放大
    else if(cmd ==2 )
    {
        ui->textBrowser->zoomIn();
        ui->textBrowser_2->zoomIn();
    }
    //缩小
    else if(cmd == 3)
    {
        ui->textBrowser->zoomOut();
        ui->textBrowser_2->zoomOut();
    }
}
#include <QScrollBar>
void recv_area::on_textBrowser_textChanged()
{

    qDebug() << ui->textBrowser->verticalScrollBar()->value();


 //   ui->textBrowser->verticalScrollBar()->setValue(ui->textBrowser->verticalScrollBar()->maximumHeight());
    /*
    QTextDocument *document = ui->textBrowser->document();


    qDebug() << document->size().height() << height();
    if(document->size().height() > height()){
      ui->textBrowser->setFixedHeight(document->size().height()+2);
    }
*/
}

void recv_area::on_verticalScrollBar_valueChanged(int value)
{
    qDebug() << value;
}
