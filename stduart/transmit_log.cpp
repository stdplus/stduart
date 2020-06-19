#include "transmit_log.h"
#include "ui_transmit_log.h"

transmit_log::transmit_log(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::transmit_log)
{
    ui->setupUi(this);
}

transmit_log::~transmit_log()
{
    delete ui;
}
