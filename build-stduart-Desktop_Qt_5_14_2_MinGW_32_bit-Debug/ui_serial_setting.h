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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serial_setting
{
public:
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QComboBox *comboBox_2;
    QPushButton *pushButton_3;
    QWidget *widget_2;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QWidget *page_3;
    QGridLayout *gridLayout_4;
    QWidget *widget_4;
    QGridLayout *gridLayout_3;
    QComboBox *comboBox_5;
    QToolButton *toolButton;
    QLabel *label_3;
    QLabel *label_8;
    QComboBox *comboBox_7;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QCheckBox *checkBox_7;
    QComboBox *comboBox_6;
    QLabel *label_9;
    QComboBox *comboBox_8;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QComboBox *comboBox_3;
    QTableView *tableView;
    QPushButton *pushButton_11;
    QWidget *page_4;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_5;
    QPushButton *pushButton_7;
    QCheckBox *checkBox;
    QPushButton *pushButton_4;
    QCheckBox *checkBox_6;
    QSlider *horizontalSlider;
    QPushButton *pushButton_6;
    QLabel *label_7;
    QPushButton *pushButton_5;
    QCheckBox *checkBox_4;
    QSpinBox *spinBox;
    QWidget *widget_3;
    QWidget *page_2;
    QWidget *page_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;

    void setupUi(QWidget *serial_setting)
    {
        if (serial_setting->objectName().isEmpty())
            serial_setting->setObjectName(QString::fromUtf8("serial_setting"));
        serial_setting->resize(705, 666);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serial_setting->sizePolicy().hasHeightForWidth());
        serial_setting->setSizePolicy(sizePolicy);
        toolBox = new QToolBox(serial_setting);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(110, 60, 301, 461));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 301, 331));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout_2->addWidget(widget, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox_2 = new QComboBox(page);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setEditable(false);

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        widget_2 = new QWidget(page);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        gridLayout->addWidget(widget_2, 3, 1, 1, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMaximumSize(QSize(16777215, 80));

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);

        comboBox = new QComboBox(page);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        textBrowser = new QTextBrowser(page);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMaximumSize(QSize(16777215, 81));

        gridLayout->addWidget(textBrowser, 2, 0, 1, 2);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setColumnStretch(0, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("\345\237\272\346\234\254\351\205\215\347\275\256"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 307, 314));
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget_4 = new QWidget(page_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));

        gridLayout_4->addWidget(widget_4, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        comboBox_5 = new QComboBox(page_3);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout_3->addWidget(comboBox_5, 2, 1, 1, 2);

        toolButton = new QToolButton(page_3);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout_3->addWidget(toolButton, 6, 2, 1, 1);

        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 4, 0, 1, 1);

        comboBox_7 = new QComboBox(page_3);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout_3->addWidget(comboBox_7, 4, 1, 1, 2);

        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        label_6 = new QLabel(page_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        lineEdit = new QLineEdit(page_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 6, 1, 1, 1);

        checkBox_7 = new QCheckBox(page_3);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        gridLayout_3->addWidget(checkBox_7, 6, 0, 1, 1);

        comboBox_6 = new QComboBox(page_3);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout_3->addWidget(comboBox_6, 3, 1, 1, 2);

        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 7, 0, 1, 1);

        comboBox_8 = new QComboBox(page_3);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        gridLayout_3->addWidget(comboBox_8, 7, 1, 1, 1);

        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 2, 0, 1, 1);

        comboBox_4 = new QComboBox(page_3);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_3->addWidget(comboBox_4, 1, 1, 1, 2);

        comboBox_3 = new QComboBox(page_3);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_3->addWidget(comboBox_3, 0, 1, 1, 2);

        tableView = new QTableView(page_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_3->addWidget(tableView, 8, 0, 1, 3);

        pushButton_11 = new QPushButton(page_3);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout_3->addWidget(pushButton_11, 7, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        toolBox->addItem(page_3, QString::fromUtf8("\351\253\230\347\272\247\351\205\215\347\275\256"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 301, 331));
        gridLayout_6 = new QGridLayout(page_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        checkBox_2 = new QCheckBox(page_4);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout_5->addWidget(checkBox_2, 0, 2, 1, 1);

        lineEdit_2 = new QLineEdit(page_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_5->addWidget(lineEdit_2, 3, 2, 1, 1);

        checkBox_3 = new QCheckBox(page_4);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout_5->addWidget(checkBox_3, 3, 0, 1, 1);

        checkBox_5 = new QCheckBox(page_4);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        gridLayout_5->addWidget(checkBox_5, 5, 0, 1, 1);

        pushButton_7 = new QPushButton(page_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_5->addWidget(pushButton_7, 5, 2, 1, 1);

        checkBox = new QCheckBox(page_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_5->addWidget(checkBox, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_5->addWidget(pushButton_4, 1, 2, 1, 1);

        checkBox_6 = new QCheckBox(page_4);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        gridLayout_5->addWidget(checkBox_6, 8, 0, 1, 1);

        horizontalSlider = new QSlider(page_4);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider, 7, 2, 1, 1);

        pushButton_6 = new QPushButton(page_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_5->addWidget(pushButton_6, 4, 2, 1, 1);

        label_7 = new QLabel(page_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 7, 0, 1, 1);

        pushButton_5 = new QPushButton(page_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_5->addWidget(pushButton_5, 1, 0, 1, 1);

        checkBox_4 = new QCheckBox(page_4);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        gridLayout_5->addWidget(checkBox_4, 6, 0, 1, 1);

        spinBox = new QSpinBox(page_4);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_5->addWidget(spinBox, 7, 3, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        widget_3 = new QWidget(page_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));

        gridLayout_6->addWidget(widget_3, 1, 0, 1, 1);

        toolBox->addItem(page_4, QString::fromUtf8("\346\216\245\346\224\266\345\214\272"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 301, 331));
        toolBox->addItem(page_2, QString::fromUtf8("\345\217\221\351\200\201\345\214\272"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 301, 331));
        pushButton_8 = new QPushButton(page_5);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(90, 40, 91, 23));
        pushButton_9 = new QPushButton(page_5);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(90, 100, 91, 23));
        pushButton_10 = new QPushButton(page_5);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(90, 150, 91, 23));
        toolBox->addItem(page_5, QString::fromUtf8("\345\267\245\345\205\267\347\256\261"));

        retranslateUi(serial_setting);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(serial_setting);
    } // setupUi

    void retranslateUi(QWidget *serial_setting)
    {
        serial_setting->setWindowTitle(QCoreApplication::translate("serial_setting", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("serial_setting", "\351\251\261\345\212\250\345\256\211\350\243\205", nullptr));
        label_2->setText(QCoreApplication::translate("serial_setting", "\346\263\242\347\211\271\347\216\207", nullptr));
        label->setText(QCoreApplication::translate("serial_setting", "\344\270\262\345\217\243\345\217\267", nullptr));
        pushButton->setText(QCoreApplication::translate("serial_setting", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_2->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("serial_setting", "\345\237\272\346\234\254\351\205\215\347\275\256", nullptr));
        toolButton->setText(QCoreApplication::translate("serial_setting", "...", nullptr));
        label_3->setText(QCoreApplication::translate("serial_setting", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_8->setText(QCoreApplication::translate("serial_setting", "\346\211\223\345\274\200\346\250\241\345\274\217", nullptr));
        label_4->setText(QCoreApplication::translate("serial_setting", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_6->setText(QCoreApplication::translate("serial_setting", "\346\265\201\346\216\247", nullptr));
        checkBox_7->setText(QCoreApplication::translate("serial_setting", "\346\211\223\345\274\200\345\220\216\350\277\233\345\205\245\346\227\245\345\277\227\346\250\241\345\274\217", nullptr));
        label_9->setText(QCoreApplication::translate("serial_setting", "\344\277\235\345\255\230\345\206\205\345\256\271", nullptr));
        label_5->setText(QCoreApplication::translate("serial_setting", "\345\201\234\346\255\242\344\275\215", nullptr));
        pushButton_11->setText(QCoreApplication::translate("serial_setting", "\345\210\267\346\226\260", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("serial_setting", "\351\253\230\347\272\247\351\205\215\347\275\256", nullptr));
        checkBox_2->setText(QCoreApplication::translate("serial_setting", "HEX", nullptr));
        checkBox_3->setText(QCoreApplication::translate("serial_setting", "\346\267\273\345\212\240\346\227\266\351\227\264\346\210\263", nullptr));
        checkBox_5->setText(QCoreApplication::translate("serial_setting", "\346\267\273\345\212\240\345\270\247\345\272\217\345\217\267", nullptr));
        pushButton_7->setText(QCoreApplication::translate("serial_setting", "\345\270\247\345\272\217\345\217\267\346\270\205\351\233\266", nullptr));
        checkBox->setText(QCoreApplication::translate("serial_setting", "ASCII\345\255\227\347\254\246", nullptr));
        pushButton_4->setText(QCoreApplication::translate("serial_setting", "\346\255\243\346\226\207\351\242\234\350\211\262", nullptr));
        checkBox_6->setText(QCoreApplication::translate("serial_setting", "\346\232\202\345\201\234\346\227\266\345\201\234\346\255\242\350\256\241\346\225\260", nullptr));
        pushButton_6->setText(QCoreApplication::translate("serial_setting", "\346\227\266\351\227\264\346\210\263\345\255\227\346\256\265\351\242\234\350\211\262", nullptr));
        label_7->setText(QCoreApplication::translate("serial_setting", "\345\270\247\351\227\264\351\232\224", nullptr));
        pushButton_5->setText(QCoreApplication::translate("serial_setting", "\345\255\227\344\275\223", nullptr));
        checkBox_4->setText(QCoreApplication::translate("serial_setting", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QCoreApplication::translate("serial_setting", "\346\216\245\346\224\266\345\214\272", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("serial_setting", "\345\217\221\351\200\201\345\214\272", nullptr));
        pushButton_8->setText(QCoreApplication::translate("serial_setting", "\346\211\223\345\274\200ASCII\347\240\201\350\241\250", nullptr));
        pushButton_9->setText(QCoreApplication::translate("serial_setting", "\346\240\241\351\252\214\347\240\201\350\256\241\347\256\227", nullptr));
        pushButton_10->setText(QCoreApplication::translate("serial_setting", "\346\211\223\345\274\200\346\225\260\345\200\274\346\215\242\347\256\227", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QCoreApplication::translate("serial_setting", "\345\267\245\345\205\267\347\256\261", nullptr));
    } // retranslateUi

};

namespace Ui {
    class serial_setting: public Ui_serial_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_SETTING_H
