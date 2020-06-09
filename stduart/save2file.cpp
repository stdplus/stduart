#include "save2file.h"
#include "ui_save2file.h"

save2file::save2file(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::save2file)
{
    ui->setupUi(this);
}

save2file::~save2file()
{
    delete ui;
}
