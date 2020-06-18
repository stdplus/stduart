#ifndef TRANSMIT_AREA_H
#define TRANSMIT_AREA_H

#include <QWidget>
#include "serial_setting.h"

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

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::transmit_area *ui;

    int history_index;
    QString str_last;
};

#endif // TRANSMIT_AREA_H
