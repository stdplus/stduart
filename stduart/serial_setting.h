#ifndef SERIAL_SETTING_H
#define SERIAL_SETTING_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QtDebug>
#include <qserialport.h>
#include "save2file.h"
#include <QFile>
#include <QDateTime>
#include <QTableView>
#include <QStandardItem>

struct recv_setting{
    bool is_suspend;
    bool is_ascii;
    bool is_hex;
    bool is_sn;
    qint64 sn;
    bool is_swap;
    qint64 swap_timeout;

    bool is_timestamp;
    QString timestamp_format;

    QColor color;
    QColor timestamp_color;
    QFont font;
};

struct tools_setting{
    bool is_asciitab;
    bool is_cal;
};

struct uart_setting{
    struct recv_setting recv_set;
    struct tools_setting tools_set;

    bool is_log;
    QString log_dir;
    QFile *log_file;
    int log_mode;

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

public slots:
    void serial_transmit(QByteArray arr);

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

    void on_pushButton_2_clicked();

    void on_comboBox_3_currentIndexChanged(int index);

    void on_comboBox_4_currentIndexChanged(int index);

    void on_comboBox_5_currentIndexChanged(int index);

    void on_comboBox_6_currentIndexChanged(int index);

    void on_checkBox_3_stateChanged(int arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_pushButton_6_clicked();

    void on_checkBox_5_stateChanged(int arg1);

    void on_pushButton_7_clicked();

    void on_checkBox_4_stateChanged(int arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_toolButton_clicked();


    void on_comboBox_8_currentIndexChanged(int index);

    void on_pushButton_11_clicked();

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

    void on_checkBox_7_stateChanged(int arg1);

    void on_pushButton_12_clicked();

private:

    bool is_uart_open;
    bool is_open_ascii;
    bool is_open_cal;
    QSerialPort *m_serial = nullptr;
    Ui::serial_setting *ui;
    QStringList uartinfo_list;
    QList<QSerialPortInfo> infos;

    void enum_uart_infos(void);
    void readData();
    void handleError(QSerialPort::SerialPortError error);
};

#endif // SERIAL_SETTING_H
