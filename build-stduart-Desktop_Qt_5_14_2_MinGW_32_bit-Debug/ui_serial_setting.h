/********************************************************************************
** Form generated from reading UI file 'serial_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIAL_SETTING_H
#define UI_SERIAL_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serial_setting
{
public:
    QToolBox *toolBox;
    QWidget *page;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QComboBox *comboBox_2;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QWidget *page_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QWidget *page_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QWidget *page_2;

    void setupUi(QWidget *serial_setting)
    {
        if (serial_setting->objectName().isEmpty())
            serial_setting->setObjectName(QString::fromUtf8("serial_setting"));
        serial_setting->resize(862, 666);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serial_setting->sizePolicy().hasHeightForWidth());
        serial_setting->setSizePolicy(sizePolicy);
        toolBox = new QToolBox(serial_setting);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(100, 20, 361, 571));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy1);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setEnabled(true);
        page->setGeometry(QRect(0, 0, 361, 467));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(page->sizePolicy().hasHeightForWidth());
        page->setSizePolicy(sizePolicy2);
        page->setInputMethodHints(Qt::ImhNone);
        gridLayoutWidget = new QWidget(page);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 40, 196, 252));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy3.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy3);
        comboBox_2->setEditable(false);

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);

        textBrowser = new QTextBrowser(gridLayoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(textBrowser, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 2);
        gridLayout->setRowStretch(4, 5);
        toolBox->addItem(page, QString::fromUtf8("\345\237\272\346\234\254\351\205\215\347\275\256"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 361, 467));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 30, 54, 12));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 60, 54, 12));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 100, 54, 12));
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 140, 54, 12));
        comboBox_3 = new QComboBox(page_3);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(130, 20, 69, 22));
        comboBox_4 = new QComboBox(page_3);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(120, 60, 69, 22));
        comboBox_5 = new QComboBox(page_3);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(130, 90, 69, 22));
        comboBox_6 = new QComboBox(page_3);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(130, 130, 69, 22));
        toolBox->addItem(page_3, QString::fromUtf8("\351\253\230\347\272\247\351\205\215\347\275\256"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 361, 467));
        checkBox = new QCheckBox(page_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(60, 30, 71, 16));
        checkBox_2 = new QCheckBox(page_4);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(160, 30, 71, 16));
        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(130, 70, 75, 23));
        pushButton_5 = new QPushButton(page_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(130, 110, 75, 23));
        checkBox_3 = new QCheckBox(page_4);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(80, 150, 91, 16));
        checkBox_4 = new QCheckBox(page_4);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(80, 210, 71, 16));
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 230, 54, 12));
        lineEdit = new QLineEdit(page_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 230, 113, 20));
        lineEdit_2 = new QLineEdit(page_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 150, 113, 20));
        checkBox_5 = new QCheckBox(page_4);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(80, 180, 91, 16));
        checkBox_6 = new QCheckBox(page_4);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(90, 280, 121, 16));
        toolBox->addItem(page_4, QString::fromUtf8("\346\216\245\346\224\266\345\214\272"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 361, 467));
        toolBox->addItem(page_2, QString::fromUtf8("\345\217\221\351\200\201\345\214\272"));

        retranslateUi(serial_setting);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(serial_setting);
    } // setupUi

    void retranslateUi(QWidget *serial_setting)
    {
        serial_setting->setWindowTitle(QCoreApplication::translate("serial_setting", "Form", nullptr));
        pushButton_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("serial_setting", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_3->setText(QCoreApplication::translate("serial_setting", "\351\251\261\345\212\250\345\256\211\350\243\205", nullptr));
        label->setText(QCoreApplication::translate("serial_setting", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("serial_setting", "\346\263\242\347\211\271\347\216\207", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("serial_setting", "\345\237\272\346\234\254\351\205\215\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("serial_setting", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_4->setText(QCoreApplication::translate("serial_setting", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_5->setText(QCoreApplication::translate("serial_setting", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_6->setText(QCoreApplication::translate("serial_setting", "\346\265\201\346\216\247", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("serial_setting", "\351\253\230\347\272\247\351\205\215\347\275\256", nullptr));
        checkBox->setText(QCoreApplication::translate("serial_setting", "ASCII\345\255\227\347\254\246", nullptr));
        checkBox_2->setText(QCoreApplication::translate("serial_setting", "HEX", nullptr));
        pushButton_4->setText(QCoreApplication::translate("serial_setting", "\351\242\234\350\211\262", nullptr));
        pushButton_5->setText(QCoreApplication::translate("serial_setting", "\345\255\227\344\275\223", nullptr));
        checkBox_3->setText(QCoreApplication::translate("serial_setting", "\346\267\273\345\212\240\346\227\266\351\227\264\346\210\263", nullptr));
        checkBox_4->setText(QCoreApplication::translate("serial_setting", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        label_7->setText(QCoreApplication::translate("serial_setting", "\345\270\247\351\227\264\351\232\224", nullptr));
        checkBox_5->setText(QCoreApplication::translate("serial_setting", "\346\267\273\345\212\240\345\270\247\345\272\217\345\217\267", nullptr));
        checkBox_6->setText(QCoreApplication::translate("serial_setting", "\346\232\202\345\201\234\346\227\266\345\201\234\346\255\242\350\256\241\346\225\260", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QCoreApplication::translate("serial_setting", "\346\216\245\346\224\266\345\214\272", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("serial_setting", "\345\217\221\351\200\201\345\214\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class serial_setting: public Ui_serial_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_SETTING_H
