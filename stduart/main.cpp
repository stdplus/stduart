#include "mainwindow.h"
#include "serial_setting.h"
#include <QApplication>

extern struct uart_setting uart_set;
int main(int argc, char *argv[])
{

    uart_set.recv_set.timestamp_format = "yyyy.MM.dd hh:mm:ss.zzz ddd";
    uart_set.recv_set.is_timestamp = true;
    uart_set.recv_set.sn = 0;
    uart_set.recv_set.is_swap = true;
    uart_set.recv_set.swap_timeout = 100;
    uart_set.recv_set.is_hex = false;
    uart_set.recv_set.is_ascii = true;
    uart_set.log_mode = 0;

    QApplication a(argc, argv);

    MainWindow w;

    w.show();
    return a.exec();
}
