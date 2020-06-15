#ifndef TRANSMIT_AREA_H
#define TRANSMIT_AREA_H

#include <QWidget>

namespace Ui {
class transmit_area;
}

class transmit_area : public QWidget
{
    Q_OBJECT
signals:
    void send_button_cmd(qint16 cmd);

public:
    explicit transmit_area(QWidget *parent = nullptr);
    ~transmit_area();

private slots:
    void on_pushButton_clicked();

private:
    Ui::transmit_area *ui;
};

#endif // TRANSMIT_AREA_H
