#ifndef TRANSMIT_LOG_H
#define TRANSMIT_LOG_H

#include <QWidget>

namespace Ui {
class transmit_log;
}

class transmit_log : public QWidget
{
    Q_OBJECT

public:
    explicit transmit_log(QWidget *parent = nullptr);
    ~transmit_log();

private:
    Ui::transmit_log *ui;
};

#endif // TRANSMIT_LOG_H
