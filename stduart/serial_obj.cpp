#include "serial_obj.h"
#include "ui_serial_obj.h"


const QString ascii_tab_str[128][5]={
    {"00000000", "0",   "00", "NUL(null)",                   "空字符"},
    {"00000001", "1",   "01", "SOH(start of headling)",      "标题开始"},
    {"00000010", "2",   "02", "STX (start of text)",         "正文开始"},
    {"00000011", "3",   "03", "ETX (end of text)",           "正文结束"},
    {"00000100", "4",   "04", "EOT (end of transmission)",   "传输结束"},
    {"00000101", "5",   "05", "ENQ (enquiry)",               "请求"},
    {"00000110", "6",   "06", "ACK (acknowledge)",           "收到通知"},
    {"00000111", "7",   "07", "BEL (bell)",                  "响铃"},
    {"00001000", "8",   "08", "BS (backspace)",              "退格"},
    {"00001001", "9",   "09", "HT (horizontal tab)",         "水平制表符"},
    {"00001010", "10",  "0A", "LF (NL line feed, new line)", "换行键"},
    {"00001011", "11",  "0B", "VT (vertical tab)",           "垂直制表符"},
    {"00001100", "12",  "0C", "FF (NP form feed, new page)", "换页键"},
    {"00001101", "13",  "0D", "CR (carriage return)",        "回车键"},
    {"00001110", "14",  "0E", "SO (shift out)",              "不用切换"},
    {"00001111", "15",  "0F", "SI (shift in)",               "启用切换"},
    {"00010000", "16",  "10", "DLE (data link escape)",      "数据链路转义"},
    {"00010001", "17",  "11", "DC1 (device control 1)",      "设备控制1"},
    {"00010010", "18",  "12", "DC2 (device control 2)",      "设备控制2"},
    {"00010011", "19",  "13", "DC3 (device control 3)",      "设备控制3"},
    {"00010100", "20",  "14", "DC4 (device control 4)",      "设备控制4"},
    {"00010101", "21",  "15", "NAK (negative acknowledge)",  "拒绝接收"},
    {"00010110", "22",  "16", "SYN (synchronous idle)",      "同步空闲"},
    {"00010111", "23",  "17", "ETB (end of trans. block)",   "传输块结束"},
    {"00011000", "24",  "18", "CAN (cancel)",                "取消"},
    {"00011001", "25",  "19", "EM (end of medium)",          "介质中断"},
    {"00011010", "26",  "1A", "SUB (substitute)",            "替补"},
    {"00011011", "27",  "1B", "ESC (escape)",                "溢出"},
    {"00011100", "28",  "1C", "FS (file separator)",         "文件分割符"},
    {"00011101", "29",  "1D", "GS (group separator)",        "分组符"},
    {"00011110", "30",  "1E", "RS (record separator)",       "记录分离符"},
    {"00011111", "31",  "1F", "US (unit separator)",         "单元分隔符"},
    {"00100000", "32",  "20", "(space)", "空格"},
    {"00100001", "33",  "21", "!",  ""},
    {"00100010", "34",  "22", "\"", ""},
    {"00100011", "35",  "23", "#",  ""},
    {"00100100", "36",  "24", "$",  ""},
    {"00100101", "37",  "25", "%",  ""},
    {"00100110", "38",  "26", "&",  ""},
    {"00100111", "39",  "27", "'",  ""},
    {"00101000", "40",  "28", "(",  ""},
    {"00101001", "41",  "29", ")",  ""},
    {"00101010", "42",  "2A", "*",  ""},
    {"00101011", "43",  "2B", "+",  ""},
    {"00101100", "44",  "2C", ",",  ""},
    {"00101101", "45",  "2D", "-",  ""},
    {"00101110", "46",  "2E", ".",  ""},
    {"00101111", "47",  "2F", "/",  ""},
    {"00110000", "48",  "30", "0",  ""},
    {"00110001", "49",  "31", "1",  ""},
    {"00110010", "50",  "32", "2",  ""},
    {"00110011", "51",  "33", "3",  ""},
    {"00110100", "52",  "34", "4",  ""},
    {"00110101", "53",  "35", "5",  ""},
    {"00110110", "54",  "36", "6",  ""},
    {"00110111", "55",  "37", "7",  ""},
    {"00111000", "56",  "38", "8",  ""},
    {"00111001", "57",  "39", "9",  ""},
    {"00111010", "58",  "3A", ":",  ""},
    {"00111011", "59",  "3B", ";",  ""},
    {"00111100", "60",  "3C", "<",  ""},
    {"00111101", "61",  "3D", "=",  ""},
    {"00111110", "62",  "3E", ">",  ""},
    {"00111111", "63",  "3F", "?",  ""},
    {"01000000", "64",  "40", "@",  ""},
    {"01000001", "65",  "41", "A",  ""},
    {"01000010", "66",  "42", "B",  ""},
    {"01000011", "67",  "43", "C",  ""},
    {"01000100", "68",  "44", "D",  ""},
    {"01000101", "69",  "45", "E",  ""},
    {"01000110", "70",  "46", "F",  ""},
    {"01000111", "71",  "47", "G",  ""},
    {"01001000", "72",  "48", "H",  ""},
    {"01001001", "73",  "49", "I",  ""},
    {"01001010", "74",  "4A", "J",  ""},
    {"01001011", "75",  "4B", "K",  ""},
    {"01001100", "76",  "4C", "L",  ""},
    {"01001101", "77",  "4D", "M",  ""},
    {"01001110", "78",  "4E", "N",  ""},
    {"01001111", "79",  "4F", "O",  ""},
    {"01010000", "80",  "50", "P",  ""},
    {"01010001", "81",  "51", "Q",  ""},
    {"01010010", "82",  "52", "R",  ""},
    {"01010011", "83",  "53", "S",  ""},
    {"01010100", "84",  "54", "T",  ""},
    {"01010101", "85",  "55", "U",  ""},
    {"01010110", "86",  "56", "V",  ""},
    {"01010111", "87",  "57", "W",  ""},
    {"01011000", "88",  "58", "X",  ""},
    {"01011001", "89",  "59", "Y",  ""},
    {"01011010", "90",  "5A", "Z",  ""},
    {"01011011", "91",  "5B", "[",  ""},
    {"01011100", "92",  "5C", "\\", ""},
    {"01011101", "93",  "5D", "]",  ""},
    {"01011110", "94",  "5E", "^",  ""},
    {"01011111", "95",  "5F", "_",  ""},
    {"01100000", "96",  "60", "`",  ""},
    {"01100001", "97",  "61", "a",  ""},
    {"01100010", "98",  "62", "b",  ""},
    {"01100011", "99",  "63", "c",  ""},
    {"01100100", "100", "64", "d",  ""},
    {"01100101", "101", "65", "e",  ""},
    {"01100110", "102", "66", "f",  ""},
    {"01100111", "103", "67", "g",  ""},
    {"01101000", "104", "68", "h",  ""},
    {"01101001", "105", "69", "i",  ""},
    {"01101010", "106", "6A", "j",  ""},
    {"01101011", "107", "6B", "k",  ""},
    {"01101100", "108", "6C", "l",  ""},
    {"01101101", "109", "6D", "m",  ""},
    {"01101110", "110", "6E", "n",  ""},
    {"01101111", "111", "6F", "o",  ""},
    {"01110000", "112", "70", "p",  ""},
    {"01110001", "113", "71", "q",  ""},
    {"01110010", "114", "72", "r",  ""},
    {"01110011", "115", "73", "s",  ""},
    {"01110100", "116", "74", "t",  ""},
    {"01110101", "117", "75", "u",  ""},
    {"01110110", "118", "76", "v",  ""},
    {"01110111", "119", "77", "w",  ""},
    {"01111000", "120", "78", "x",  ""},
    {"01111001", "121", "79", "y",  ""},
    {"01111010", "122", "7A", "z",  ""},
    {"01111011", "123", "7B", "{",  ""},
    {"01111100", "124", "7C", "|",  ""},
    {"01111101", "125", "7D", "}",  ""},
    {"01111110", "126", "7E", "~",  ""},
    {"01111111", "127", "7F", "DEL (delete)", "删除"},
};


extern struct uart_setting uart_set;


void serial_obj::set_page_layout()
{
    //布局设置
    //缩放因子
        ui->splitter_main->setStretchFactor(0, 1);
        ui->splitter_main->setStretchFactor(1, 7);

        ui->splitter_right->setStretchFactor(0, 3);
        ui->splitter_right->setStretchFactor(1, 1);

    //初使比例
        QDesktopWidget* desktopWidget = QApplication::desktop();
        QSize local_size = desktopWidget->size();
        QList<int> width_list;
        QList<int> height_list;
        width_list << local_size.width()/8 <<  local_size.width()/8*7;
        height_list << local_size.height()/4*3 <<  local_size.height()/4;

        ui->splitter_main->setSizes(width_list);
        ui->splitter_right->setSizes(height_list);

}

serial_obj::serial_obj(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::serial_obj)
{
    recv_browser_hex = new QTextBrowser();
    recv_browser_hex->hide();
    ui->setupUi(this);




    setLayout(ui->gridLayout);

    //初使化变量
    recv_frame_count = 0;
    is_recv_pulse = false;
    uart_set.recv_set.color = QColor(0,85,255);
    uart_set.recv_set.timestamp_color = QColor(113,113,113);


    //页面布局
    set_page_layout();



    //右上ASCII区域
   // ui->textBrowser->setAlignment(Qt::AlignLeft);
   // connect(ui->textBrowser, &QTextEdit::cursorPositionChanged, this, &serial_obj::on_recvbrowser_cursorPositionChanged);




    //全局信号连接
    connect(ui->widget_setting,SIGNAL(show_message(QString )),this ,SLOT(sendmessage(QString)));
    connect(ui->widget_setting,SIGNAL(setting_charge_notif(QVariant )),ui->widget_recv ,SLOT(setting_charged(QVariant )));
    connect(ui->widget_transmit,SIGNAL(setting_charge_notif(QVariant )),ui->widget_recv ,SLOT(setting_charged(QVariant )));

    connect(ui->widget_setting,SIGNAL(recv_ready(QByteArray )),ui->widget_recv ,SLOT(recv(QByteArray)));
    connect(ui->widget_setting,SIGNAL(recv_ready(QByteArray )),ui->widget_transmit ,SLOT(data_recv()));

    connect(ui->widget_transmit,SIGNAL(send_button_cmd(qint16)),ui->widget_recv ,SLOT(recv_buttom_cmd(qint16)));
    connect(ui->widget_transmit,SIGNAL(serial_transmit(QByteArray)), ui->widget_setting ,SLOT(serial_transmit(QByteArray)));

#if 0

    //左侧设置区域
    serial_setting *setting = new serial_setting;

    //右上ASCII区域
    recv_browser = new QTextBrowser();
    recv_browser->setAlignment(Qt::AlignLeft);
    connect(recv_browser, &QTextEdit::cursorPositionChanged, this, &serial_obj::on_recvbrowser_cursorPositionChanged);

    //右上HEX区域
    recv_browser_hex = new QTextBrowser();
    recv_browser_hex->hide();

    //右上ASCII码表
    ascii_tab = new QTableView();
    QStandardItemModel *model = new QStandardItemModel;   //创建一个标准的条目模型
    ascii_tab->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上
    model->setHorizontalHeaderItem(0, new QStandardItem("二进制") );
    model->setHorizontalHeaderItem(1, new QStandardItem("十进制"));
    model->setHorizontalHeaderItem(2, new QStandardItem("十六进制"));
    model->setHorizontalHeaderItem(3, new QStandardItem("缩写/字符"));
    model->setHorizontalHeaderItem(4, new QStandardItem("解释"));
    for(int i=0; i<128; i++)
    {
        for(int j=0; j<5; j++)
        {
            QStandardItem *item = new QStandardItem(ascii_tab_str[i][j]);
            model->setItem(i, j, item);
        }
    }
    ascii_tab->hide();

    //右上数值转换器
    tools_cal = new class tools_cal();
   // tools_cal->hide();

    //右下菜单区域
    toolbar = new QToolBar();
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

    //右下发送按钮
    push_transmit = new QPushButton();
    push_transmit->setText("发送");

    //右下发送区域
    QTextEdit *textBottom = new QTextEdit(QObject::tr("底部部件"));
    textBottom->setAlignment(Qt::AlignCenter);


    //添加水平分割器 垂直分割器
    QSplitter *splitterMain = new QSplitter(Qt::Horizontal, this);
    QSplitter *splitterV = new QSplitter(Qt::Vertical);
    QSplitter *splitterH = new QSplitter(Qt::Horizontal);

    //主分割器添加
    //左设置窗口
    //垂直分割器
    splitterMain->showMaximized();


    splitterMain->addWidget(tools_cal);
    splitterMain->addWidget(splitterV);


    splitterMain->setStretchFactor(0, 1);
    splitterMain->setStretchFactor(1, 1);


    splitterV->addWidget(recv_browser);
    splitterV->addWidget(textBottom);


    splitterV->setStretchFactor(0,1);
    splitterV->setStretchFactor(1,1);






    splitterMain->setWindowTitle(QObject::tr("分割窗口"));


    QGridLayout* layout = new QGridLayout();
    layout->addWidget(splitterMain);

    setLayout(layout);

#endif
}

//接收区控件鼠标移动
void serial_obj::on_recvbrowser_cursorPositionChanged()
{

}

void serial_obj::on_action_zoomin()
{
    //ui->textBrowser->zoomIn(1);
}
void serial_obj::on_action_zoomout()
{
   // ui->textBrowser->zoomOut(1);
}

void serial_obj::on_action_top()
{
   // ui->textBrowser->moveCursor(QTextCursor::Start);
}
void serial_obj::on_action_bottom()
{
    //ui->textBrowser->moveCursor(QTextCursor::End);

}

void serial_obj::on_action_ascii()
{
    uart_set.recv_set.is_ascii =!uart_set.recv_set.is_ascii;

    QVariant v;
    v.setValue(uart_set);
   // setting_charged(v);

}
void serial_obj::on_action_hex()
{
    uart_set.recv_set.is_hex =!uart_set.recv_set.is_hex;

    QVariant v;
    v.setValue(uart_set);
   // setting_charged(v);

}

void serial_obj::on_action_clear()
{
    recv_buf.clear();
    recv_frame.clear();
  //  recv_timer->stop();

 //   ui->textBrowser->clear();
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

void serial_obj::sendmessage(QString str)
{
    emit objmessage(str);
}
serial_obj::~serial_obj()
{
    delete ui;
}

