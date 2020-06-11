/********************************************************************************
** Form generated from reading UI file 'transmit_area.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSMIT_AREA_H
#define UI_TRANSMIT_AREA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_transmit_area
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QWidget *widget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;

    void setupUi(QWidget *transmit_area)
    {
        if (transmit_area->objectName().isEmpty())
            transmit_area->setObjectName(QString::fromUtf8("transmit_area"));
        transmit_area->resize(896, 539);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(transmit_area->sizePolicy().hasHeightForWidth());
        transmit_area->setSizePolicy(sizePolicy);
        gridLayoutWidget = new QWidget(transmit_area);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(250, 60, 553, 281));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_6, 0, 9, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/top.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);

        gridLayout->addWidget(pushButton_5, 0, 4, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ascii.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/bottom.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon2);

        gridLayout->addWidget(pushButton_7, 0, 5, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/zoomin.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon3);

        gridLayout->addWidget(pushButton_8, 0, 6, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 10);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/clear.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        widget = new QWidget(gridLayoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 0, 8, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pulse.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/h.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon6);

        gridLayout->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/zoomout.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon7);

        gridLayout->addWidget(pushButton_9, 0, 7, 1, 1);


        retranslateUi(transmit_area);

        QMetaObject::connectSlotsByName(transmit_area);
    } // setupUi

    void retranslateUi(QWidget *transmit_area)
    {
        transmit_area->setWindowTitle(QCoreApplication::translate("transmit_area", "Form", nullptr));
        pushButton_6->setText(QCoreApplication::translate("transmit_area", "\345\217\221\351\200\201", nullptr));
        pushButton_5->setText(QString());
        pushButton_3->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_4->setText(QString());
        pushButton_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class transmit_area: public Ui_transmit_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSMIT_AREA_H
