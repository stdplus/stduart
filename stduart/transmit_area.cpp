#include "transmit_area.h"
#include "ui_transmit_area.h"


extern struct uart_setting uart_set;
transmit_area::transmit_area(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::transmit_area)
{
    ui->setupUi(this);

    is_transmit_hex = false;
    is_tmsend_started = false;

    uart_set.recv_set.is_suspend = false;

    ui->pushButton_3->setCheckable(true);
    ui->pushButton_4->setCheckable(true);
    ui->pushButton_3->setChecked(uart_set.recv_set.is_ascii);
    ui->pushButton_4->setChecked(uart_set.recv_set.is_hex);

    ui->tabWidget->removeTab(1);

    str_last = "";
    history_index = 0;
    setLayout(ui->gridLayout);

    is_tmsend = false;
    tm_action = new QAction;
    tm_action->setText("周期发送");

    connect(tm_action, &QAction::triggered, this, &transmit_area::switch_to_tmsend);
    ui->toolButton->addAction(tm_action);


    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(on_timeout()));
    timer_2 = new QTimer;
    connect(timer_2, SIGNAL(timeout()), this, SLOT(on_timeout_2()));
    timer_3 = new QTimer;
    connect(timer_3, SIGNAL(timeout()), this, SLOT(on_timeout_3()));
}

transmit_area::~transmit_area()
{
    delete ui;
}
void transmit_area::switch_to_tmsend()
{

    if(is_tmsend){
        ui->toolButton->setText("发送");
        tm_action->setText("周期发送");
    }else{
        ui->toolButton->setText("周期发送");
        tm_action->setText("发送");
    }

    is_tmsend =!is_tmsend;
}

void transmit_area::data_recv(void)
{
    ui->pushButton_7->setIcon(QIcon("res/on.png"));
    timer_2->start(50);
}
void transmit_area::on_timeout(void)
{
    ui->pushButton_5->setIcon(QIcon("res/off.png"));
    timer->stop();
}
void transmit_area::on_timeout_2(void)
{
    ui->pushButton_7->setIcon(QIcon("res/off.png"));
    timer_2->stop();
}

void transmit_area::on_timeout_3(void)
{
    //更新发送周期
    timer_3->setInterval(ui->spinBox->value());
    transmit();
}
void transmit_area::on_pushButton_clicked()
{

    emit send_button_cmd(1);
}

#include <QMessageBox>
void transmit_area::on_pushButton_3_clicked()
{


    if(uart_set.recv_set.is_ascii == false)
    {
        ui->pushButton_3->setChecked(true);

        uart_set.recv_set.is_ascii = true;

    }
    else
    {

        if(uart_set.recv_set.is_hex == false)
        {
            QMessageBox::warning(this, "提示", "至少需要打开一种显示模式");
            return;
        }
        ui->pushButton_3->setChecked(false);
        uart_set.recv_set.is_ascii = false;
    }

    QVariant v;
    v.setValue(uart_set);
    emit setting_charge_notif(v);
}

void transmit_area::on_pushButton_4_clicked()
{
    if(uart_set.recv_set.is_hex == false)
    {
        ui->pushButton_4->setChecked(true);
        uart_set.recv_set.is_hex = true;

    }
    else
    {

        if(uart_set.recv_set.is_ascii == false)
        {
            QMessageBox::warning(this, "提示", "至少需要打开一种显示模式");
            return;
        }
        ui->pushButton_4->setChecked(false);
        uart_set.recv_set.is_hex = false;
    }

    QVariant v;
    v.setValue(uart_set);
    emit setting_charge_notif(v);
}

void transmit_area::on_pushButton_2_clicked()
{
    if(uart_set.recv_set.is_suspend)
    {

        ui->pushButton_2->setIcon(QIcon("res/pulse.jpg"));
    }
    else
    {
        ui->pushButton_2->setIcon(QIcon("res/run.jpg"));
    }

    uart_set.recv_set.is_suspend = !uart_set.recv_set.is_suspend;
}

void transmit_area::on_pushButton_7_clicked()
{

}

void transmit_area::on_pushButton_8_clicked()
{
       emit send_button_cmd(2);
}

void transmit_area::on_pushButton_9_clicked()
{
    emit send_button_cmd(3);
}


void transmit_area::transmit()
{
    ui->pushButton_5->setIcon(QIcon("res/on.png"));
    timer->start(50);

    //获取当前TAB页的TEXTEXIT控件
    int cur = ui->tabWidget->currentIndex();

    QWidget *tw = ui->tabWidget->currentWidget();
    qDebug() << tw->objectName();
    tw->dumpObjectInfo();
    QObjectList obj =tw->children();
    //这里从固定的索引取指针，很容易崩溃，需要特别小心
    QTextEdit *context = (QTextEdit *)obj.at(1);

    QString tmp = context->toPlainText();
    qDebug()<< tmp;

    if(is_transmit_hex){
        QStringList list = tmp.split(" ");
        QByteArray arr;
        for(int i=0; i<list.length(); i++)
        {
            bool ret;
            arr.append(list.at(i).toInt(&ret, 16));
        }
        emit serial_transmit(arr);
    }else{
        emit serial_transmit(tmp.toUtf8());
    }


    if(str_last != tmp){
        QWidget *area = new QWidget;
        QGridLayout *layout = new QGridLayout;

        layout->setMargin(0);

        //添加布局和添加控件的顺序不能改，会导致前面获取控件指针异常
        area->setLayout(layout);

        QTextEdit *textArea = new QTextEdit(area);
        connect(textArea, &QTextEdit::textChanged, this, &transmit_area::on_textEdit_textChanged);
        layout->addWidget(textArea);
        textArea->setText(tmp);


        ui->tabWidget->addTab(area, "历史"+ QString::number(history_index++, 10));
    }

    str_last = tmp;
}
void transmit_area::on_pushButton_6_clicked()
{
    transmit();
}

QString transmit_area::hex_to_ascii(QString in)
{
    //以空格分割
    QStringList list = in.split(" ");

    //再次以字节分割
    int len = list.length();
    for(int i=0; i<len; i++)
    {
        QString tmp = list.at(i);
        for(int j=0; j<((tmp.length()-1)/2); j++)
        {
            list[i+j] = list.at(i+j).right( list.at(i+j).length() - 2 );
            list.insert(i+j, tmp.mid(j*2, 2));
        }
    }

    qDebug() << "分割完成:" << list;

    QString ret;
    bool success;
    QByteArray tmp_arr;
    for(int i=0; i<list.length(); i++)
    {
        char tmp = list.at(i).toInt(&success, 16);
        tmp_arr.append(tmp);
    }

    ret = tmp_arr;
    return  ret;
}
QString transmit_area::ascii_to_hex(QString in)
{
    QString ret(in.toUtf8().toHex().toUpper());
    int len = ret.length()/2;
    for(int i=1;i<len;i++)
    {
     ret.insert(2*i+i-1," ");
    }
    return ret;
}
void transmit_area::on_pushButton_10_clicked()
{
    //获取当前TAB页的TEXTEXIT控件
    QWidget *tw = ui->tabWidget->currentWidget();
    qDebug() << tw->objectName();
    tw->dumpObjectInfo();
    QObjectList obj =tw->children();
    //这里从固定的索引取指针，很容易崩溃，需要特别小心
    QTextEdit *context = (QTextEdit *)obj.at(1);

    QString tmp = context->toPlainText();
    qDebug()<<tmp;



    if(is_transmit_hex){
        context->setText( hex_to_ascii(tmp) );
        ui->pushButton_10->setText("ASCII");
    } else{
        context->setText( ascii_to_hex(tmp) );
        ui->pushButton_10->setText("HEX");
    }

   is_transmit_hex =!is_transmit_hex;
}

void transmit_area::on_toolButton_clicked()
{
    //单次发送?
    if(!is_tmsend){
        transmit();
        return;
    }

    if(is_tmsend_started){
        timer_3->stop();
        ui->toolButton->setText("周期发送");
        tm_action->setEnabled(true);
    }else{

        timer_3->start( ui->spinBox->value() );
        ui->toolButton->setText("停止发送");
        tm_action->setEnabled(false);
    }
    is_tmsend_started = !is_tmsend_started;
}

const char hex_tables[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F'};
void transmit_area::on_textEdit_textChanged()
{

    //获取当前TAB页的TEXTEXIT控件
    QWidget *tw = ui->tabWidget->currentWidget();
    qDebug() << tw->objectName();
    tw->dumpObjectInfo();
    QObjectList obj =tw->children();
    //这里从固定的索引取指针，很容易崩溃，需要特别小心
    QTextEdit *context = (QTextEdit *)obj.at(1);


    //过滤掉不合法的字符
    unsigned int i=0;
    if((is_transmit_hex)&&
            (context->toPlainText().length() != 0))
    {

        for(i=0; i<sizeof(hex_tables); i++)
        {
            if(context->toPlainText().mid(context->textCursor().position()-1, 1) == hex_tables[i])
                break;

        }

        //不合法
        QString tmp = context->toPlainText();
        if(i >= sizeof(hex_tables)){
            context->textCursor().deletePreviousChar();
        }

    }
}
