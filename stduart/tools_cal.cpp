#include "tools_cal.h"
#include "ui_tools_cal.h"

tools_cal::tools_cal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tools_cal)
{
    ui->setupUi(this);
    ui->lineEdit->setText("0");
    ui->lineEdit_2->setText("0");
    ui->lineEdit_3->setText("0");
}

tools_cal::~tools_cal()
{
    delete ui;
}

void tools_cal::on_lineEdit_textChanged(const QString &arg1)
{
    bool ret = false;


    int s = arg1.toInt(&ret,10);

    if(ret){
        ui->lineEdit_2->setText(QString::number(s, 2) );
        ui->lineEdit_3->setText(QString::number(s, 16) );
    }else{
        ui->lineEdit_2->setText("---");
        ui->lineEdit_3->setText("---");
    }

}

void tools_cal::on_lineEdit_2_textChanged(const QString &arg1)
{
    bool ret = false;


    int s = arg1.toInt(&ret,2);

    if(ret){
        ui->lineEdit->setText(QString::number(s, 10) );
        ui->lineEdit_3->setText(QString::number(s, 16) );
    }else{
        ui->lineEdit->setText("---");
        ui->lineEdit_3->setText("---");
    }
}

void tools_cal::on_lineEdit_3_textChanged(const QString &arg1)
{
    bool ret = false;


    int s = arg1.toInt(&ret,16);

    if(ret){
        ui->lineEdit->setText(QString::number(s, 10) );
        ui->lineEdit_2->setText(QString::number(s, 2) );
    }else{
        ui->lineEdit->setText("---");
        ui->lineEdit_2->setText("---");
    }
}
