#ifndef SERIAL_SETTING_H
#define SERIAL_SETTING_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QtDebug>

struct recv_setting{
    bool is_ascii;
    bool is_hex;

    QColor color;
};
struct uart_setting{
    struct recv_setting recv_set;

};

Q_DECLARE_METATYPE(recv_setting)
Q_DECLARE_METATYPE(uart_setting)

namespace Ui {
class serial_setting;
}

class serial_setting : public QWidget
{
    Q_OBJECT
signals:
    void show_message(QString str);
    void recv_ready(QByteArray arr );
    void setting_charge_notif(QVariant v);

public:
    explicit serial_setting(QWidget *parent = nullptr);
    ~serial_setting();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_pushButton_4_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_clicked();

    void on_checkBox_2_clicked();

    void on_pushButton_5_clicked();

private:
    struct uart_setting uart_set;
    bool is_uart_open;
    QSerialPort *m_serial = nullptr;
    Ui::serial_setting *ui;
    QStringList uartinfo_list;
    QList<QSerialPortInfo> infos;

    void readData();
};

#endif // SERIAL_SETTING_H
