#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "serial_obj.h"
#include <QLCDNumber>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void statusbarShow(QString str);
    void statusbarRightShow(QVariant v);


private slots:
    void on_actionabout_triggered();

    void on_actionnew_triggered();

    void on_actionview_tab_triggered();

    void on_actionview_child_triggered();

    void on_actioncascadeSubWindows_triggered();

    void on_actiontileSubWindows_triggered();

    void on_actioncloseAllSubWindows_triggered();

private:
    QLabel *statusbarRight;
    QLCDNumber *statusbarCount;
    QLCDNumber *statusbarFCount;
    void init_connect();
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
