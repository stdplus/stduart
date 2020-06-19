#ifndef TRANSMIT_AREA_H
#define TRANSMIT_AREA_H

#include <QWidget>
#include "serial_setting.h"
#include <QTimer>
#include <QAction>

namespace Ui {
class transmit_area;
}

class transmit_area : public QWidget
{
    Q_OBJECT
signals:
    void send_button_cmd(qint16 cmd);
    void setting_charge_notif(QVariant );
    void serial_transmit(QByteArray arr);


public:
    explicit transmit_area(QWidget *parent = nullptr);
    ~transmit_area();

public slots:
    void data_recv(void);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_6_clicked();

    void on_timeout();
    void on_timeout_2();
    void on_timeout_3();

    void on_pushButton_10_clicked();
    void switch_to_tmsend();

    void on_toolButton_clicked();

    void on_textEdit_textChanged();

private:
    Ui::transmit_area *ui;

    int history_index;
    QString str_last;

    QTimer *timer;
    QTimer *timer_2;
    QTimer *timer_3;
    bool is_transmit_hex;
    bool is_tmsend;  //定时发送？
    bool is_tmsend_started; //定时发送开始?

    QAction *tm_action;

    QString ascii_to_hex(QString in);
    QString hex_to_ascii(QString in);

    void transmit(void);
};

#endif // TRANSMIT_AREA_H
