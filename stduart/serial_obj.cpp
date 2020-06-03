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
    recv_browser->setAlignment(Qt::AlignCenter);
    recv_browser->setText("aaaaaaaaaaa\nbbbbbbbbbbb\ncccccccc\n");


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


    toolbar->addAction(actionRecvClear );
    toolbar->addAction(actionPulse );
    toolbar->addAction(actionTop );
    toolbar->addAction(actionBottom );

    connect(actionRecvClear, &QAction::triggered, this, &serial_obj::on_action_clear);
    connect(actionPulse, &QAction::triggered, this, &serial_obj::on_action_pulse);
    connect(actionTop, &QAction::triggered, this, &serial_obj::on_action_top);
    connect(actionBottom, &QAction::triggered, this, &serial_obj::on_action_bottom);

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
}

//接收区控件鼠标移动
void serial_obj::on_recvbrowser_cursorPositionChanged()
{

}

void serial_obj::on_action_top()
{
    recv_browser->moveCursor(QTextCursor::Start);
}
void serial_obj::on_action_bottom()
{
    recv_browser->moveCursor(QTextCursor::End);

}

void serial_obj::on_action_clear()
{
    recv_buf.clear();
    recv_frame.clear();
    recv_timer->stop();

    recv_browser->clear();
    recv_browser_hex->clear();
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

void serial_obj::recv_timeout()
{
    recv_timer->stop();

    if(is_recv_pulse){
        recv_frame.clear();
        return;
    }


    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("yyyy.MM.dd hh:mm:ss.zzz ddd");



    recv_browser->append("["+current_date + "]"+recv_frame);

    QString ret(recv_frame.toHex().toUpper());
    int len = ret.length()/2;
    for(int i=1;i<len;i++)
    {
        ret.insert(2*i+i-1," ");
    }
    recv_browser_hex->append("["+current_date + "]"+ret);


    recv_frame.clear();

    QVariant v;
    struct statusbar_fix value_fix;
    value_fix.recv_buf_size = recv_buf.length();
    value_fix.recv_frames = recv_frame_count;

    v.setValue(value_fix);
    emit statusbar_fix(v);

    recv_frame_count++;
}
void serial_obj::recv(QByteArray arr)
{
    recv_buf.append(arr);
    recv_frame.append(arr);
    recv_timer->start(100);

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

    recv_browser->setTextColor(set.recv_set.color);
    recv_browser_hex->setTextColor(set.recv_set.color);
}
