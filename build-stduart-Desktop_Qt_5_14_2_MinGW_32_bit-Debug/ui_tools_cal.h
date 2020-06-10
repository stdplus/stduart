/********************************************************************************
** Form generated from reading UI file 'tools_cal.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLS_CAL_H
#define UI_TOOLS_CAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tools_cal
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *tools_cal)
    {
        if (tools_cal->objectName().isEmpty())
            tools_cal->setObjectName(QString::fromUtf8("tools_cal"));
        tools_cal->resize(231, 458);
        gridLayoutWidget = new QWidget(tools_cal);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 181, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);


        retranslateUi(tools_cal);

        QMetaObject::connectSlotsByName(tools_cal);
    } // setupUi

    void retranslateUi(QWidget *tools_cal)
    {
        tools_cal->setWindowTitle(QCoreApplication::translate("tools_cal", "Form", nullptr));
        label->setText(QCoreApplication::translate("tools_cal", "\345\215\201\350\277\233\345\210\266", nullptr));
        label_2->setText(QCoreApplication::translate("tools_cal", "\344\272\214\350\277\233\345\210\266", nullptr));
        label_3->setText(QCoreApplication::translate("tools_cal", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tools_cal: public Ui_tools_cal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLS_CAL_H
