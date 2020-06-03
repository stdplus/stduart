#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "serial_obj.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    showMaximized();
    setCentralWidget(ui->mdiArea);


    serial_obj *serial_objs = new serial_obj;
    ui->mdiArea->addSubWindow(serial_objs);
    serial_objs->setWindowFlag(Qt::WindowTitleHint);


    serial_objs->showMaximized();
    serial_objs->show();

    statusbarRight = new QLabel;
    ui->statusbar->addPermanentWidget(statusbarRight);


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
    statusbarRight->setText("接收字节:"+
                            QString::number(value_fix.recv_buf_size,10)+
                            "Bytes|"+
                            "接收帧计数:"+
                            QString::number(value_fix.recv_frames,10)+
                            "帧"+
                            "   "
                            );

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
