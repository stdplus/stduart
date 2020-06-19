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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_transmit_area
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QWidget *tab_2;
    QPushButton *pushButton_10;
    QWidget *widget;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpinBox *spinBox;
    QToolButton *toolButton;

    void setupUi(QWidget *transmit_area)
    {
        if (transmit_area->objectName().isEmpty())
            transmit_area->setObjectName(QString::fromUtf8("transmit_area"));
        transmit_area->resize(896, 724);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(transmit_area->sizePolicy().hasHeightForWidth());
        transmit_area->setSizePolicy(sizePolicy);
        gridLayoutWidget = new QWidget(transmit_area);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 30, 575, 281));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(gridLayoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setElideMode(Qt::ElideMiddle);
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setLineWidth(0);

        gridLayout_2->addWidget(textEdit, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 14);

        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 0, 10, 1, 1);

        widget = new QWidget(gridLayoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 0, 7, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8("res/off.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);

        gridLayout->addWidget(pushButton_5, 0, 8, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ascii.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/zoomin.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon2);

        gridLayout->addWidget(pushButton_8, 0, 4, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/zoomout.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon3);

        gridLayout->addWidget(pushButton_9, 0, 5, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setIcon(icon);

        gridLayout->addWidget(pushButton_7, 0, 9, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/h.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);

        gridLayout->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pulse.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/clear.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon6);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(1000000);
        spinBox->setValue(100);
        spinBox->setDisplayIntegerBase(10);

        gridLayout->addWidget(spinBox, 0, 11, 1, 1);

        toolButton = new QToolButton(gridLayoutWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy2);
        toolButton->setPopupMode(QToolButton::MenuButtonPopup);
        toolButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

        gridLayout->addWidget(toolButton, 0, 12, 1, 2);


        retranslateUi(transmit_area);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(transmit_area);
    } // setupUi

    void retranslateUi(QWidget *transmit_area)
    {
        transmit_area->setWindowTitle(QCoreApplication::translate("transmit_area", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("transmit_area", "\345\275\223\345\211\215", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("transmit_area", "Tab 2", nullptr));
        pushButton_10->setText(QCoreApplication::translate("transmit_area", "ASCII", nullptr));
        pushButton_5->setText(QString());
        pushButton_3->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_7->setText(QString());
        pushButton_4->setText(QString());
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        toolButton->setText(QCoreApplication::translate("transmit_area", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transmit_area: public Ui_transmit_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSMIT_AREA_H
