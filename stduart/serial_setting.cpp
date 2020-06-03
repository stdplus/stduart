#include "serial_setting.h"
#include "ui_serial_setting.h"

#include <QColorDialog>
#include <QFontDialog>

serial_setting::serial_setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::serial_setting)
{
    ui->setupUi(this);



    is_uart_open = false;

    QGridLayout *layout =  new QGridLayout;
    layout->addWidget(ui->toolBox);
    setLayout(layout);

    QString blankString = "未定义";
    QString description;
    QString manufacturer;
    QString serialNumber;
    infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos) {

        description = info.description();
        manufacturer = info.manufacturer();
        serialNumber = info.serialNumber();
        uartinfo_list << info.portName()
             << (!description.isEmpty() ? description : blankString)
             << (!manufacturer.isEmpty() ? manufacturer : blankString)
             << (!serialNumber.isEmpty() ? serialNumber : blankString)
             << info.systemLocation()
             << (info.vendorIdentifier() ? QString::number(info.vendorIdentifier(), 16) : blankString)
             << (info.productIdentifier() ? QString::number(info.productIdentifier(), 16) : blankString);

        ui->comboBox->addItem(info.portName());
    }
    ui->comboBox_2->addItem(QStringLiteral("110"), QSerialPort::Baud1200);
    ui->comboBox_2->addItem(QStringLiteral("300"), QSerialPort::Baud2400);
    ui->comboBox_2->addItem(QStringLiteral("600"), QSerialPort::Baud4800);


    ui->comboBox_2->addItem(QStringLiteral("1200"), QSerialPort::Baud1200);
    ui->comboBox_2->addItem(QStringLiteral("2400"), QSerialPort::Baud2400);
    ui->comboBox_2->addItem(QStringLiteral("4800"), QSerialPort::Baud4800);
    ui->comboBox_2->addItem(QStringLiteral("9600"), QSerialPort::Baud9600);

    ui->comboBox_2->addItem(QStringLiteral("14400"), QSerialPort::Baud9600);

    ui->comboBox_2->addItem(QStringLiteral("19200"), QSerialPort::Baud19200);
    ui->comboBox_2->addItem(QStringLiteral("38400"), QSerialPort::Baud38400);
    ui->comboBox_2->addItem(QStringLiteral("56000"), QSerialPort::Baud57600);
    ui->comboBox_2->addItem(QStringLiteral("115200"), QSerialPort::Baud57600);
    ui->comboBox_2->addItem(QStringLiteral("128000"), QSerialPort::Baud57600);
    ui->comboBox_2->addItem(QStringLiteral("230400"), QSerialPort::Baud57600);
    ui->comboBox_2->addItem(QStringLiteral("256000"), QSerialPort::Baud57600);
    ui->comboBox_2->addItem(QStringLiteral("460800"), QSerialPort::Baud57600);

    ui->comboBox_2->addItem(QStringLiteral("921600"), QSerialPort::Baud57600);
    ui->comboBox_2->addItem(QStringLiteral("115200"), QSerialPort::Baud115200);
    ui->comboBox_2->addItem(QStringLiteral("1000000"), QSerialPort::Baud57600);
    ui->comboBox_2->addItem(QStringLiteral("1500000"), QSerialPort::Baud115200);
    ui->comboBox_2->addItem(tr("自定义"));

    m_serial = new QSerialPort;
    connect(m_serial, &QSerialPort::readyRead, this, &serial_setting::readData);



    uart_set.recv_set.is_hex = true;
    uart_set.recv_set.is_ascii=true;

    ui->checkBox->setChecked(uart_set.recv_set.is_ascii);
    ui->checkBox_2->setChecked(uart_set.recv_set.is_hex);
}

void serial_setting::readData()
{
     QByteArray data = m_serial->readAll();
     emit recv_ready(data);
}

serial_setting::~serial_setting()
{
    delete ui;
}




#include <QMessageBox>
void serial_setting::on_pushButton_clicked()
{
    int index = ui->comboBox_2->currentIndex();
    if( index == -1){
        emit show_message("没有选择串口");
        return;
    }

    if(infos.at(index).portName() == ""){
        emit show_message("串口名称为空");
        return;
    }

    if(is_uart_open == true){
        is_uart_open = false;
        m_serial->close();
        emit show_message("关闭串口成功");
        ui->pushButton->setText("打开串口");
        return;
    }



    m_serial->setPortName(infos.at(index).portName());

    m_serial->setBaudRate(QSerialPort::Baud115200);
    m_serial->setDataBits(QSerialPort::Data8);
    m_serial->setParity(QSerialPort::NoParity);
    m_serial->setStopBits(QSerialPort::OneStop);
    m_serial->setFlowControl(QSerialPort::NoFlowControl);
    if (m_serial->open(QIODevice::ReadWrite)) {
        emit show_message("打开串口成功");
        ui->pushButton->setText("关闭串口");
        is_uart_open = true;
        return;
    } else {
        QMessageBox::critical(this, tr("Error"), m_serial->errorString());
    }


}

void serial_setting::on_comboBox_currentIndexChanged(int index)
{
    if (index == -1)
        return;
    QString str;

    str = str + "端口名称:" + infos.at(index).portName() + "\n";
    str = str + "描述:" + infos.at(index).description() + "\n";

    str = str + "生产厂商:" + infos.at(index).manufacturer() + "\n";
    str = str + "串口号:" + infos.at(index).serialNumber() + "\n";
    str = str + "系统位置:" + infos.at(index).systemLocation() + "\n";
    str = str + "VID:0x" + QString::number(infos.at(index).vendorIdentifier(), 16) + "\n";
    str = str + "PID:0x" +  QString::number(infos.at(index).productIdentifier(), 16) + "\n";

    ui->textBrowser->setText(str);
}

void serial_setting::on_comboBox_2_currentIndexChanged(int index)
{
    if((index == -1)||(index == 0)){
        ui->comboBox_2->setEditable(false);
        return;
    }


    if(index == ui->comboBox_2->count()-1){
        ui->comboBox_2->setEditable(true);
    }else{
        ui->comboBox_2->setEditable(false);
    }
}


void serial_setting::on_pushButton_4_clicked()
{

    QColor color = QColorDialog::getColor(Qt::black);


    if (color.isValid())
    {
        qDebug() << color.redF() << color.greenF() << color.blueF();
        uart_set.recv_set.color = color;

        QVariant v;
        v.setValue(uart_set);
        emit setting_charge_notif(v);
    }
}


void serial_setting::on_checkBox_stateChanged(int arg1)
{

}

void serial_setting::on_checkBox_2_stateChanged(int arg1)
{

}

void serial_setting::on_checkBox_clicked()
{
    if((ui->checkBox->isChecked() == false)&&
    (ui->checkBox_2->isChecked() == false)){
        ui->checkBox->setChecked(true);
        QMessageBox::warning(this, "提示", "至少需要打开一种显示模式");
        return;
    }

    uart_set.recv_set.is_ascii = ui->checkBox->isChecked();

    QVariant v;
    v.setValue(uart_set);
    emit setting_charge_notif(v);
}

void serial_setting::on_checkBox_2_clicked()
{
    if((ui->checkBox->isChecked() == false)&&
    (ui->checkBox_2->isChecked() == false)){
        ui->checkBox_2->setChecked(true);
        QMessageBox::warning(this, "提示", "至少需要打开一种显示模式");
        return;
    }

    uart_set.recv_set.is_hex = ui->checkBox_2->isChecked();

    QVariant v;
    v.setValue(uart_set);
    emit setting_charge_notif(v);
}

void serial_setting::on_pushButton_5_clicked()
{
    QFontDialog *dlg_font = new QFontDialog;
    dlg_font->exec();
}
