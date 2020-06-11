#ifndef RECV_AREA_H
#define RECV_AREA_H

#include <QWidget>
#include "serial_setting.h"
#include <QFile>
#include <QTimer>

namespace Ui {
class recv_area;
}

class recv_area : public QWidget
{
    Q_OBJECT

public:
    explicit recv_area(QWidget *parent = nullptr);
    ~recv_area();

public slots:
    void recv(QByteArray arr);

private slots:
    void recv_timeout();

private:
    Ui::recv_area *ui;

    QByteArray recv_buf;
    QByteArray recv_frame;

    QTimer *recv_timer;

    void disp_info(void);
};

#endif // RECV_AREA_H
