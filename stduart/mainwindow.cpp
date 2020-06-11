#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "serial_obj.h"
#include <QDesktopWidget>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);




    QDesktopWidget* desktopWidget = QApplication::desktop();


    resize(desktopWidget->width()/4*3, desktopWidget->height()/4*3);
    move((desktopWidget->width()-this->width())/2, (desktopWidget->height()-this->height())/2);


    setCentralWidget(ui->mdiArea);


    serial_obj *serial_objs = new serial_obj;
    ui->mdiArea->addSubWindow(serial_objs);
    serial_objs->setWindowFlag(Qt::WindowTitleHint);
    serial_objs->showMaximized();




    statusbarRight = new QLabel;
    statusbarCount = new QLCDNumber;
    statusbarFCount = new QLCDNumber;

    QLabel *label0 = new QLabel;
    QLabel *label1 = new QLabel;

    label0->setText("接收字节");
    label1->setText("接收帧");
    ui->statusbar->addPermanentWidget(label0);
    ui->statusbar->addPermanentWidget(statusbarCount);
    ui->statusbar->addPermanentWidget(label1);
    ui->statusbar->addPermanentWidget(statusbarFCount);

    ui->statusbar->showMessage("创建MDI成功");



    connect(serial_objs,SIGNAL(statusbar_fix(QVariant)),this ,SLOT(statusbarRightShow(QVariant)));
    connect(serial_objs,SIGNAL(objmessage(QString)),this ,SLOT(statusbarShow(QString)));
}
void MainWindow::statusbarShow(QString str)
{
    ui->statusbar->showMessage(str);
}

void MainWindow::statusbarRightShow(QVariant v)
{

    struct statusbar_fix value_fix = v.value<struct statusbar_fix >();

    statusbarCount->display((int)value_fix.recv_buf_size);
    statusbarFCount->display((int)value_fix.recv_frames);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::init_connect(void)
{

}
void MainWindow::on_actionabout_triggered()
{

}

void MainWindow::on_actionnew_triggered()
{
    serial_obj *serial_objs = new serial_obj;
    ui->mdiArea->addSubWindow(serial_objs);
    ui->mdiArea->setViewMode(QMdiArea::SubWindowView);
    ui->mdiArea->tileSubWindows();
    serial_objs->show();

}

void MainWindow::on_actionview_tab_triggered()
{
    ui->mdiArea->setViewMode(QMdiArea::TabbedView); //Tab多页显示模式
    ui->mdiArea->setTabsClosable(true); //页面可关闭
}

void MainWindow::on_actionview_child_triggered()
{
     ui->mdiArea->setViewMode(QMdiArea::SubWindowView); //子窗口模式
}

void MainWindow::on_actioncascadeSubWindows_triggered()
{
    //窗口级联展开
    ui->mdiArea->cascadeSubWindows();
}

void MainWindow::on_actiontileSubWindows_triggered()
{
    //平铺展开
    ui->mdiArea->tileSubWindows();
}

void MainWindow::on_actioncloseAllSubWindows_triggered()
{
    //关闭全部子窗口
    ui->mdiArea->closeAllSubWindows();
}
