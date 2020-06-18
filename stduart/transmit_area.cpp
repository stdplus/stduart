#include "transmit_area.h"
#include "ui_transmit_area.h"


extern struct uart_setting uart_set;
transmit_area::transmit_area(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::transmit_area)
{
    ui->setupUi(this);

    uart_set.recv_set.is_suspend = false;

    ui->pushButton_3->setCheckable(true);
    ui->pushButton_4->setCheckable(true);
    ui->pushButton_3->setChecked(uart_set.recv_set.is_ascii);
    ui->pushButton_4->setChecked(uart_set.recv_set.is_hex);

    ui->tabWidget->removeTab(1);

    str_last = "";
    history_index = 0;
    setLayout(ui->gridLayout);
}

transmit_area::~transmit_area()
{
    delete ui;
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

void transmit_area::on_pushButton_6_clicked()
{
    int cur = ui->tabWidget->currentIndex();

    QWidget *tw = ui->tabWidget->currentWidget();
    qDebug() << tw->objectName();
    tw->dumpObjectInfo();
    QObjectList obj =tw->children();
    //这里从固定的索引取指针，很容易崩溃，需要特别小心
    QTextEdit *context = (QTextEdit *)obj.at(1);

    QString tmp = context->toPlainText();
    qDebug()<< tmp;
    emit serial_transmit(tmp.toUtf8());

    if(str_last != tmp){
        QWidget *area = new QWidget;
        QGridLayout *layout = new QGridLayout;

        layout->setMargin(0);

        //添加布局和添加控件的顺序不能改，会导致前面获取控件指针异常
        area->setLayout(layout);

        QTextEdit *textArea = new QTextEdit(area);
        layout->addWidget(textArea);
        textArea->setText(tmp);


        ui->tabWidget->addTab(area, "历史"+ QString::number(history_index++, 10));
    }

    str_last = tmp;
}
