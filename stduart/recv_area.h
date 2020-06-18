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
    void recv_buttom_cmd(qint16 cmd);
    void setting_charged(QVariant v);
    void aaa(int v);

private slots:
    void recv_timeout();

    void on_textBrowser_textChanged();

    void on_verticalScrollBar_valueChanged(int value);

private:
    Ui::recv_area *ui;

    QByteArray recv_buf;
    QByteArray recv_frame;

    QTimer *recv_timer;

    void disp_info(void);
    void recvarea_append_str(QColor color,QString str);
    void recvarea_hex_append_str(QColor color,QString str);

};

#endif // RECV_AREA_H
