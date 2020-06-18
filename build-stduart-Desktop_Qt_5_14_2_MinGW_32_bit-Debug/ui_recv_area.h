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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recv_area
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTableView *tableView;
    QWidget *widget;

    void setupUi(QWidget *recv_area)
    {
        if (recv_area->objectName().isEmpty())
            recv_area->setObjectName(QString::fromUtf8("recv_area"));
        recv_area->resize(879, 582);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recv_area->sizePolicy().hasHeightForWidth());
        recv_area->setSizePolicy(sizePolicy);
        gridLayoutWidget = new QWidget(recv_area);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(270, 100, 361, 214));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(gridLayoutWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        textBrowser = new QTextBrowser(splitter);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        textBrowser->setMouseTracking(true);
        textBrowser->setAcceptRichText(false);
        splitter->addWidget(textBrowser);
        textBrowser_2 = new QTextBrowser(splitter);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        splitter->addWidget(textBrowser_2);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        splitter->addWidget(tableView);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        splitter->addWidget(widget);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);


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
