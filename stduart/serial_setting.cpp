#include "serial_setting.h"
#include "ui_serial_setting.h"

#include <QColorDialog>
#include <QFontDialog>
#include <QMessageBox>
#include <QFileDialog>
struct uart_setting uart_set;

serial_setting::serial_setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::serial_setting)
{

    m_serial = new QSerialPort;

    ui->setupUi(this);


    is_uart_open = false;

    QGridLayout *layout =  new QGridLayout;
    layout->addWidget(ui->toolBox);
    setLayout(layout);

    enum_uart_infos();

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


    ui->comboBox_3->addItem("5");
    ui->comboBox_3->addItem("6");
    ui->comboBox_3->addItem("7");
    ui->comboBox_3->addItem("8");

    ui->comboBox_4->addItem("无校验");
    ui->comboBox_4->addItem("偶校验");
    ui->comboBox_4->addItem("奇校验");
    ui->comboBox_4->addItem("始终为0");
    ui->comboBox_4->addItem("始终为1");


    ui->comboBox_5->addItem("1");
    ui->comboBox_5->addItem("2");
    ui->comboBox_5->addItem("1.5");



    ui->comboBox_6->addItem("无流控");
    ui->comboBox_6->addItem("硬件流控");
    ui->comboBox_6->addItem("软件流控");


    ui->comboBox_7->addItem("只读");
    ui->comboBox_7->addItem("只写");
    ui->comboBox_7->addItem("读写");
    ui->comboBox_7->setCurrentIndex(2);

    ui->comboBox_8->addItem("ASCII");
    ui->comboBox_8->addItem("HEX");
    ui->comboBox_8->addItem("两者都保存");
    ui->comboBox_8->setCurrentIndex(0);
    connect(m_serial, &QSerialPort::readyRead, this, &serial_setting::readData);

    ui->pushButton_2->setIcon(QIcon("res/update.jpg"));

    uart_set.recv_set.is_hex = true;
    uart_set.recv_set.is_ascii=true;

    ui->checkBox->setChecked(uart_set.recv_set.is_ascii);
    ui->checkBox_2->setChecked(uart_set.recv_set.is_hex);


    m_serial->setBaudRate(QSerialPort::Baud115200);
    m_serial->setDataBits(QSerialPort::Data8);
    m_serial->setParity(QSerialPort::NoParity);
    m_serial->setStopBits(QSerialPort::OneStop);
    m_serial->setFlowControl(QSerialPort::NoFlowControl);

    m_serial->baudRate();

    int cur = ui->comboBox_2->findText(QString::number( m_serial->baudRate(), 10));
    ui->comboBox_2->setCurrentIndex(cur);

    int databits = ui->comboBox_3->findText(QString::number( m_serial->dataBits(), 10));
    ui->comboBox_3->setCurrentIndex(databits);

    int parity =  m_serial->parity();
    if(parity > 0)
        parity -= 1;
    ui->comboBox_4->setCurrentIndex(parity);

    int stopbits = m_serial->stopBits();
    stopbits -= 1;
    ui->comboBox_5->setCurrentIndex(stopbits);


   int flowcontrol = m_serial->flowControl();
   ui->comboBox_6->setCurrentIndex(flowcontrol);

   connect(m_serial, &QSerialPort::errorOccurred, this, &serial_setting::handleError);


   ui->checkBox_3->setChecked(uart_set.recv_set.is_timestamp);
   ui->lineEdit_2->setText(uart_set.recv_set.timestamp_format );


   int nMin = 1;
   int nMax = 1000;
   int nSingleStep = 20;

   // 微调框
   ui->spinBox->setMinimum(nMin);  // 最小值
   ui->spinBox->setMaximum(nMax);  // 最大值
   ui->spinBox->setSingleStep(nSingleStep);  // 步长

   // 滑动条
   ui->horizontalSlider->setOrientation(Qt::Horizontal);  // 水平方向
   ui->horizontalSlider->setMinimum(nMin);  // 最小值
   ui->horizontalSlider->setMaximum(nMax);  // 最大值
   ui->horizontalSlider->setSingleStep(nSingleStep);  // 步长


    uart_set.recv_set.swap_timeout = 100;
   ui->horizontalSlider->setValue(uart_set.recv_set.swap_timeout);
   ui->spinBox->setValue(uart_set.recv_set.swap_timeout);
   ui->checkBox_4->setChecked(uart_set.recv_set.is_swap);

   // 连接信号槽（相互改变）
   connect(ui->spinBox, SIGNAL(valueChanged(int)), ui->horizontalSlider, SLOT(setValue(int)));
   connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->spinBox, SLOT(setValue(int)));

   uart_set.log_dir = QCoreApplication::applicationDirPath() + "/log";
   ui->lineEdit->setText(uart_set.log_dir);
}


void serial_setting::handleError(QSerialPort::SerialPortError error)
{
    if (error == QSerialPort::ResourceError) {
        QMessageBox::critical(this, tr("Critical Error"), m_serial->errorString());
    }
}

void serial_setting::enum_uart_infos()
{
    ui->comboBox->clear();

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

    emit show_message("更新串口信息成功");

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
    int index = ui->comboBox->currentIndex();
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

        ui->comboBox->setEnabled(true);
        m_serial->close();
        emit show_message("关闭串口成功");
        ui->pushButton->setText("打开串口");

        uart_set.log_file->close();
        return;
    }

    if(QMessageBox::information(this, "提示", "进入日志模式?\r\n所有串口数据将被记录到日志文件中",
                          QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) == QMessageBox::Yes)
    {
        QDateTime current_date_time =QDateTime::currentDateTime();
        QString current_date =current_date_time.toString("yyyy-MM-dd_hh-mm-ss-zzz");

        uart_set.log_file = new QFile(uart_set.log_dir + "/"+ current_date + ".log");
        bool ret = uart_set.log_file->open(QIODevice::ReadWrite);

        if(!ret){
            QMessageBox::critical(this, "警告", "打开日志文件出错");
        }

    }
    m_serial->setPortName(infos.at(index).portName());
    int openmode = ui->comboBox_7->currentIndex();
    openmode += 1;


    if (m_serial->open((QSerialPort::OpenMode)openmode)) {
        emit show_message("打开串口成功");
        ui->pushButton->setText("关闭串口");
         ui->comboBox->setEnabled(false);
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


    m_serial->setBaudRate(ui->comboBox_2->currentText().toUInt());
    emit show_message("切换波特率为:"+ ui->comboBox_2->currentText());
}


void serial_setting::on_pushButton_4_clicked()
{


    QColor color = QColorDialog::getColor(uart_set.recv_set.color);


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
    bool ok;
    QFontDialog *dlg_font = new QFontDialog;

   uart_set.recv_set.font = dlg_font->getFont(&ok);
   if(ok)
       show_message("更改字体成功");


    QVariant v;
    v.setValue(uart_set);
    emit setting_charge_notif(v);
}

void serial_setting::on_pushButton_2_clicked()
{
    enum_uart_infos();
}

void serial_setting::on_comboBox_3_currentIndexChanged(int index)
{
    m_serial->setDataBits((QSerialPort::DataBits)ui->comboBox_3->currentText().toUInt());
    emit show_message("切换数据位为:"+ ui->comboBox_3->currentText());
}

void serial_setting::on_comboBox_4_currentIndexChanged(int index)
{
    int parity = ui->comboBox_4->currentText().toUInt();

    if(parity > 0)
        parity += 1;
    m_serial->setParity((QSerialPort::Parity)parity);
    emit show_message("切换校验位为:"+ ui->comboBox_4->currentText());



}

void serial_setting::on_comboBox_5_currentIndexChanged(int index)
{

    int stopbits = ui->comboBox_5->currentIndex();
    stopbits += 1;
    m_serial->setStopBits((QSerialPort::StopBits)stopbits);

    emit show_message("切换停止位为:"+ ui->comboBox_5->currentText());

}

void serial_setting::on_comboBox_6_currentIndexChanged(int index)
{
    int flowcontrol = ui->comboBox_6->currentIndex();
    m_serial->setFlowControl((QSerialPort::FlowControl)flowcontrol);
    emit show_message("切换流控为:"+ ui->comboBox_6->currentText());

}

void serial_setting::on_checkBox_3_stateChanged(int arg1)
{
    uart_set.recv_set.is_timestamp = ui->checkBox_3->isChecked();
}

void serial_setting::on_lineEdit_2_textChanged(const QString &arg1)
{
    uart_set.recv_set.timestamp_format = arg1;
}

void serial_setting::on_pushButton_6_clicked()
{
    QColor color = QColorDialog::getColor(uart_set.recv_set.timestamp_color);


    if (color.isValid())
    {
        qDebug() << color.redF() << color.greenF() << color.blueF();
        uart_set.recv_set.timestamp_color = color;

        QVariant v;
        v.setValue(uart_set);
        emit setting_charge_notif(v);
    }
}

void serial_setting::on_checkBox_5_stateChanged(int arg1)
{
    uart_set.recv_set.is_sn = ui->checkBox_5->isChecked();
}

void serial_setting::on_pushButton_7_clicked()
{
    uart_set.recv_set.sn = 0;
}

void serial_setting::on_checkBox_4_stateChanged(int arg1)
{
    uart_set.recv_set.is_swap = ui->checkBox_4->isChecked();
}

void serial_setting::on_spinBox_valueChanged(int arg1)
{
    uart_set.recv_set.swap_timeout = ui->spinBox->value();
}

void serial_setting::on_toolButton_clicked()
{
    uart_set.log_dir = QFileDialog::getExistingDirectory(NULL,"请选择日志保存路径",uart_set.log_dir);
    ui->lineEdit->setText(uart_set.log_dir);
}



void serial_setting::on_comboBox_8_currentIndexChanged(int index)
{
    uart_set.log_mode = index;
}

void serial_setting::on_pushButton_11_clicked()
{

    QString dirpath = uart_set.log_dir;
    //设置要遍历的目录
    QDir dir(dirpath);
    //设置文件过滤器
    QStringList nameFilters;
    //设置文件过滤格式
    nameFilters << "*.log";
    //将过滤后的文件名称存入到files列表中
    QStringList files = dir.entryList(nameFilters, QDir::Files|QDir::Readable, QDir::Name);


    QStandardItemModel *model = new QStandardItemModel;   //创建一个标准的条目模型
    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

    model->setHorizontalHeaderItem(0, new QStandardItem("文件名") );
    model->setHorizontalHeaderItem(1, new QStandardItem("创建时间"));
    model->setHorizontalHeaderItem(2, new QStandardItem("大小"));



    for(int i=0; i<files.length(); i++)
    {
        QFileInfo info(uart_set.log_dir + "/" +   files[i]);
        model->setHeaderData(i,Qt::Vertical, QString::number(i,10));

        model->setItem(i, 0, new QStandardItem(files[i] ) );
        QDateTime tmp = info.birthTime();

        model->setItem(i, 1 ,new QStandardItem(tmp.toString("yyyy.MM.dd hh:mm:ss.zzz")) );
        model->setItem(i, 2, new QStandardItem( QString::number( info.size(), 10) ) );

    }
}

void serial_setting::on_tableView_doubleClicked(const QModelIndex &index)
{

}
