/********************************************************************************
** Form generated from reading UI file 'recv_area.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECV_AREA_H
#define UI_RECV_AREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recv_area
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;

    void setupUi(QWidget *recv_area)
    {
        if (recv_area->objectName().isEmpty())
            recv_area->setObjectName(QString::fromUtf8("recv_area"));
        recv_area->resize(826, 554);
        gridLayoutWidget = new QWidget(recv_area);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 30, 541, 451));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(gridLayoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        textBrowser_2 = new QTextBrowser(gridLayoutWidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        gridLayout->addWidget(textBrowser_2, 0, 1, 1, 1);


        retranslateUi(recv_area);

        QMetaObject::connectSlotsByName(recv_area);
    } // setupUi

    void retranslateUi(QWidget *recv_area)
    {
        recv_area->setWindowTitle(QCoreApplication::translate("recv_area", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recv_area: public Ui_recv_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECV_AREA_H
