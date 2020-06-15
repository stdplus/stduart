#include "transmit_area.h"
#include "ui_transmit_area.h"

transmit_area::transmit_area(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::transmit_area)
{
    ui->setupUi(this);

    setLayout(ui->gridLayout);
}

transmit_area::~transmit_area()
{
    delete ui;
}

void transmit_area::on_pushButton_clicked()
{

    emit send_button_cmd(1);
}
