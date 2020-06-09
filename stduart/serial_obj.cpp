#include "serial_obj.h"
#include "ui_serial_obj.h"


extern struct uart_setting uart_set;

serial_obj::serial_obj(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::serial_obj)
{





    ui->setupUi(this);



    //新建主分割窗口

    QSplitter *splitterMain = new QSplitter(Qt::Horizontal, this);
    QTextBrowser *recv_browser2 = new QTextBrowser;

    serial_setting *setting = new serial_setting(splitterMain);


    QSplitter *splitterRight = new QSplitter(Qt::Vertical);   //右分割窗口，并以主分割窗口作为父窗口
    splitterRight->setOpaqueResize(false);
    splitterMain->insertWidget(1, splitterRight);

    splitterMain->setStretchFactor(0, 1);
    splitterMain->setStretchFactor(1, 6);

    QSplitter *splitterAreaRecv = new QSplitter(Qt::Horizontal, splitterRight);

    recv_browser = new QTextBrowser(splitterAreaRecv);
    recv_browser->setAlignment(Qt::AlignLeft);

    recv_browser_hex = new QTextBrowser(splitterAreaRecv);

    toolbar = new QToolBar(splitterRight);
    actionRecvClear = new QAction;
    actionRecvClear->setText("清空显示");
    actionRecvClear->setIcon(QIcon("res/clear.jpg"));

    actionPulse = new QAction;
    actionPulse->setText("暂停");
    actionPulse->setIcon(QIcon("res/pulse.jpg"));

    actionTop = new QAction;
    actionTop->setText("向上");
    actionTop->setIcon(QIcon("res/top.jpg"));

    actionBottom = new QAction;
    actionBottom->setText("向下");
    actionBottom->setIcon(QIcon("res/bottom.jpg"));


    actionHex = new QAction;
    actionHex->setText("Hex");
    actionHex->setIcon(QIcon("res/h.jpg"));


    actionAscii = new QAction;
    actionAscii->setText("Ascii");
    actionAscii->setIcon(QIcon("res/ascii.jpg"));


    actionZoomin = new QAction;
    actionZoomin->setText("zoomin");
    actionZoomin->setIcon(QIcon("res/zoomin.jpg"));

    actionZoomout = new QAction;
    actionZoomout->setText("zoomout");
    actionZoomout->setIcon(QIcon("res/zoomout.jpg"));

    toolbar->addAction(actionRecvClear );
    toolbar->addAction(actionPulse );
    toolbar->addAction(actionTop );
    toolbar->addAction(actionBottom );
    toolbar->addAction(actionAscii );
    toolbar->addAction(actionHex );
    toolbar->addAction(actionZoomin );
    toolbar->addAction(actionZoomout );

    connect(actionRecvClear, &QAction::triggered, this, &serial_obj::on_action_clear);
    connect(actionPulse, &QAction::triggered, this, &serial_obj::on_action_pulse);
    connect(actionTop, &QAction::triggered, this, &serial_obj::on_action_top);
    connect(actionBottom, &QAction::triggered, this, &serial_obj::on_action_bottom);
    connect(actionHex, &QAction::triggered, this, &serial_obj::on_action_hex);
    connect(actionAscii, &QAction::triggered, this, &serial_obj::on_action_ascii);
    connect(actionZoomin, &QAction::triggered, this, &serial_obj::on_action_zoomin);
    connect(actionZoomout, &QAction::triggered, this, &serial_obj::on_action_zoomout);

    QTextEdit *textBottom = new QTextEdit(QObject::tr("底部部件"),splitterRight);
    textBottom->setAlignment(Qt::AlignCenter);






    splitterRight->setStretchFactor(0,6);
    splitterRight->setStretchFactor(1,1);

    splitterMain->setWindowTitle(QObject::tr("分割窗口"));
    splitterMain->showMaximized();





    QGridLayout* layout = new QGridLayout();
    layout->addWidget(splitterMain);

    setLayout(layout);

    connect(setting,SIGNAL(show_message(QString )),this ,SLOT(sendmessage(QString)));
    connect(setting,SIGNAL(recv_ready(QByteArray )),this ,SLOT(recv(QByteArray)));
    connect(setting,SIGNAL(setting_charge_notif(QVariant )),this ,SLOT(setting_charged(QVariant )));

    recv_timer = new QTimer(this);
    connect(recv_timer, SIGNAL(timeout()), this, SLOT(recv_timeout()));

    connect(recv_browser, &QTextEdit::cursorPositionChanged, this, &serial_obj::on_recvbrowser_cursorPositionChanged);
    recv_frame_count = 0;
    is_recv_pulse = false;


    uart_set.recv_set.color = QColor(0,85,255);
    uart_set.recv_set.timestamp_color = QColor(113,113,113);

    recv_browser->show();
    recv_browser_hex->hide();
}

//接收区控件鼠标移动
void serial_obj::on_recvbrowser_cursorPositionChanged()
{

}

void serial_obj::on_action_zoomin()
{
    recv_browser->zoomIn(1);
}
void serial_obj::on_action_zoomout()
{
recv_browser->zoomOut(1);
}

void serial_obj::on_action_top()
{
    recv_browser->moveCursor(QTextCursor::Start);
}
void serial_obj::on_action_bottom()
{
    recv_browser->moveCursor(QTextCursor::End);

}

void serial_obj::on_action_ascii()
{
    uart_set.recv_set.is_ascii =!uart_set.recv_set.is_ascii;

    QVariant v;
    v.setValue(uart_set);
    setting_charged(v);

}
void serial_obj::on_action_hex()
{
    uart_set.recv_set.is_hex =!uart_set.recv_set.is_hex;

    QVariant v;
    v.setValue(uart_set);
    setting_charged(v);

}

void serial_obj::on_action_clear()
{
    recv_buf.clear();
    recv_frame.clear();
    recv_timer->stop();

    recv_browser->clear();
    recv_browser_hex->clear();

    recv_frame_count = 0;
    QVariant v;
    struct statusbar_fix value_fix;
    value_fix.recv_buf_size = recv_buf.length();
    value_fix.recv_frames = recv_frame_count;

    v.setValue(value_fix);
    emit statusbar_fix(v);
}

void serial_obj::on_action_pulse()
{
    is_recv_pulse = !is_recv_pulse;

    if(is_recv_pulse){
        actionPulse->setText("继续");
        actionPulse->setIcon(QIcon("res/run.jpg"));

    }
    else{
        actionPulse->setText("暂停");
        actionPulse->setIcon(QIcon("res/pulse.jpg"));
    }
}

#include <QFile>
void serial_obj::disp_info()
{
    QString ascii_buf;
    QString hex_buf;

    if(is_recv_pulse){
        recv_frame.clear();
        return;
    }

    QString ret(recv_frame.toHex().toUpper());
    int len = ret.length()/2;
    for(int i=1;i<len;i++)
    {
        ret.insert(2*i+i-1," ");
    }
    ret.append(" ");
    recv_browser->moveCursor(QTextCursor::End);
    recv_browser_hex->moveCursor(QTextCursor::End);

    recv_browser->setTextColor(uart_set.recv_set.timestamp_color);
    recv_browser_hex->setTextColor(uart_set.recv_set.timestamp_color);
    if(uart_set.recv_set.is_sn){

        ascii_buf = "["+
                QString::number(uart_set.recv_set.sn, 10) +
                 "]";

        hex_buf = "["+
                QString::number(uart_set.recv_set.sn, 10) +
                "]";
        recv_browser->insertPlainText(ascii_buf);
        recv_browser_hex->insertPlainText(hex_buf);

    }

    if(uart_set.recv_set.is_timestamp){
        QDateTime current_date_time =QDateTime::currentDateTime();
        QString current_date =current_date_time.toString(uart_set.recv_set.timestamp_format);

        ascii_buf += "["+current_date + "]";
        hex_buf += "["+current_date + "]";

        recv_browser->insertPlainText("["+current_date + "]");
        recv_browser_hex->insertPlainText("["+current_date + "]");
    }

    recv_browser->setTextColor(uart_set.recv_set.color);
    recv_browser_hex->setTextColor(uart_set.recv_set.color);

    ascii_buf += recv_frame;
    hex_buf += ret;
    recv_browser->insertPlainText(recv_frame);
    recv_browser_hex->insertPlainText(ret);



    if(uart_set.recv_set.is_swap){
        ascii_buf += "\r\n";
        hex_buf += "\r\n";
        recv_browser->insertPlainText("\r\n");
        recv_browser_hex->insertPlainText("\r\n");
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

    QVariant v;
    struct statusbar_fix value_fix;
    value_fix.recv_buf_size = recv_buf.length();
    value_fix.recv_frames = recv_frame_count;

    v.setValue(value_fix);
    emit statusbar_fix(v);

    uart_set.recv_set.sn++;
    recv_frame_count++;


}

void serial_obj::recv_timeout()
{
    recv_timer->stop();
    disp_info();
}
void serial_obj::recv(QByteArray arr)
{
    recv_buf.append(arr);
    recv_frame.append(arr);

    if(uart_set.recv_set.is_swap){
        recv_timer->start(uart_set.recv_set.swap_timeout);
    }else{
        disp_info();
    }


}
void serial_obj::sendmessage(QString str)
{
    emit objmessage(str);
}
serial_obj::~serial_obj()
{
    delete ui;
}

void serial_obj::setting_charged(QVariant v)
{
    struct uart_setting set;

    set = v.value<struct uart_setting >();

    if(set.recv_set.is_ascii){
        recv_browser->show();
    }else{
        recv_browser->hide();
    }

    if(set.recv_set.is_hex){
        recv_browser_hex->show();
    }else{
        recv_browser_hex->hide();
    }

    recv_browser->setFont(set.recv_set.font);
    recv_browser_hex->setFont(set.recv_set.font);
    recv_browser->setTextColor(set.recv_set.color);
    recv_browser_hex->setTextColor(set.recv_set.color);
}
