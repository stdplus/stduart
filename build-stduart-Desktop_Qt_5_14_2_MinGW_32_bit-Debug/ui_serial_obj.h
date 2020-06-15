/********************************************************************************
** Form generated from reading UI file 'serial_obj.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIAL_OBJ_H
#define UI_SERIAL_OBJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>
#include "recv_area.h"
#include "serial_setting.h"
#include "transmit_area.h"

QT_BEGIN_NAMESPACE

class Ui_serial_obj
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter_main;
    serial_setting *widget_setting;
    QSplitter *splitter_right;
    recv_area *widget_recv;
    transmit_area *widget_transmit;

    void setupUi(QWidget *serial_obj)
    {
        if (serial_obj->objectName().isEmpty())
            serial_obj->setObjectName(QString::fromUtf8("serial_obj"));
        serial_obj->resize(859, 735);
        gridLayoutWidget = new QWidget(serial_obj);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(130, 180, 581, 361));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        splitter_main = new QSplitter(gridLayoutWidget);
        splitter_main->setObjectName(QString::fromUtf8("splitter_main"));
        splitter_main->setOrientation(Qt::Horizontal);
        widget_setting = new serial_setting(splitter_main);
        widget_setting->setObjectName(QString::fromUtf8("widget_setting"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_setting->sizePolicy().hasHeightForWidth());
        widget_setting->setSizePolicy(sizePolicy);
        widget_setting->setMinimumSize(QSize(235, 0));
        splitter_main->addWidget(widget_setting);
        splitter_right = new QSplitter(splitter_main);
        splitter_right->setObjectName(QString::fromUtf8("splitter_right"));
        splitter_right->setOrientation(Qt::Vertical);
        widget_recv = new recv_area(splitter_right);
        widget_recv->setObjectName(QString::fromUtf8("widget_recv"));
        splitter_right->addWidget(widget_recv);
        widget_transmit = new transmit_area(splitter_right);
        widget_transmit->setObjectName(QString::fromUtf8("widget_transmit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_transmit->sizePolicy().hasHeightForWidth());
        widget_transmit->setSizePolicy(sizePolicy1);
        splitter_right->addWidget(widget_transmit);
        splitter_main->addWidget(splitter_right);

        gridLayout->addWidget(splitter_main, 1, 0, 1, 1);


        retranslateUi(serial_obj);

        QMetaObject::connectSlotsByName(serial_obj);
    } // setupUi

    void retranslateUi(QWidget *serial_obj)
    {
        serial_obj->setWindowTitle(QCoreApplication::translate("serial_obj", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class serial_obj: public Ui_serial_obj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_OBJ_H
