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
#include <QtWidgets/QGroupBox>
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
    QComboBox *comboBox;
    QLabel *label;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QWidget *widget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;
    QWidget *page_3;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QComboBox *comboBox_4;
    QLabel *label_6;
    QComboBox *comboBox_5;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QTableView *tableView;
    QToolButton *toolButton;
    QLineEdit *lineEdit;
    QLabel *label_9;
    QPushButton *pushButton_11;
    QComboBox *comboBox_8;
    QCheckBox *checkBox_7;
    QWidget *page_4;
    QGridLayout *gridLayout_6;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QCheckBox *checkBox_3;
    QPushButton *pushButton_5;
    QCheckBox *checkBox_4;
    QPushButton *pushButton_6;
    QCheckBox *checkBox;
    QWidget *widget_2;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QWidget *page_2;
    QWidget *page_5;
    QGridLayout *gridLayout;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QWidget *widget_3;

    void setupUi(QWidget *serial_setting)
    {
        if (serial_setting->objectName().isEmpty())
            serial_setting->setObjectName(QString::fromUtf8("serial_setting"));
        serial_setting->resize(1117, 666);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serial_setting->sizePolicy().hasHeightForWidth());
        serial_setting->setSizePolicy(sizePolicy);
        toolBox = new QToolBox(serial_setting);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(110, 20, 261, 591));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 261, 461));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(6);
        comboBox = new QComboBox(page);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(page);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy1.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy1);
        comboBox_2->setEditable(false);

        gridLayout_2->addWidget(comboBox_2, 1, 1, 1, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        pushButton->setMaximumSize(QSize(16777215, 80));

        gridLayout_2->addWidget(pushButton, 2, 2, 1, 1);

        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout_2->addWidget(widget, 3, 0, 1, 3);

        textBrowser = new QTextBrowser(page);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        textBrowser->setMaximumSize(QSize(16777215, 81));
        textBrowser->setOverwriteMode(false);

        gridLayout_2->addWidget(textBrowser, 2, 0, 1, 2);

        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(pushButton_2, 0, 2, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("\345\237\272\346\234\254\351\205\215\347\275\256"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 261, 461));
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        comboBox_4 = new QComboBox(groupBox_3);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_7->addWidget(comboBox_4, 2, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_7->addWidget(label_6, 4, 0, 1, 1);

        comboBox_5 = new QComboBox(groupBox_3);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout_7->addWidget(comboBox_5, 3, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(label_3, 0, 0, 1, 1);

        comboBox_3 = new QComboBox(groupBox_3);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_7->addWidget(comboBox_3, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_7->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_7->addWidget(label_5, 3, 0, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_7->addWidget(label_8, 5, 0, 1, 1);

        comboBox_6 = new QComboBox(groupBox_3);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout_7->addWidget(comboBox_6, 4, 1, 1, 1);

        comboBox_7 = new QComboBox(groupBox_3);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout_7->addWidget(comboBox_7, 5, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 0, 1, 1, 1);

        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));

        gridLayout_4->addWidget(groupBox_4, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(page_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_8->addWidget(tableView, 5, 0, 1, 3);

        toolButton = new QToolButton(groupBox_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout_8->addWidget(toolButton, 2, 2, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy4.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy4);
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_8->addWidget(lineEdit, 2, 0, 1, 2);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        gridLayout_8->addWidget(label_9, 4, 0, 1, 1);

        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy4.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy4);
        pushButton_11->setMinimumSize(QSize(10, 0));

        gridLayout_8->addWidget(pushButton_11, 4, 2, 1, 1);

        comboBox_8 = new QComboBox(groupBox_2);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));
        sizePolicy4.setHeightForWidth(comboBox_8->sizePolicy().hasHeightForWidth());
        comboBox_8->setSizePolicy(sizePolicy4);
        comboBox_8->setMinimumSize(QSize(10, 0));

        gridLayout_8->addWidget(comboBox_8, 4, 1, 1, 1);

        checkBox_7 = new QCheckBox(groupBox_2);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        sizePolicy3.setHeightForWidth(checkBox_7->sizePolicy().hasHeightForWidth());
        checkBox_7->setSizePolicy(sizePolicy3);

        gridLayout_8->addWidget(checkBox_7, 1, 0, 1, 2);

        gridLayout_8->setColumnStretch(0, 1);
        gridLayout_8->setColumnStretch(1, 4);
        gridLayout_8->setColumnStretch(2, 1);

        gridLayout_4->addWidget(groupBox_2, 1, 1, 1, 1);

        toolBox->addItem(page_3, QString::fromUtf8("\351\253\230\347\272\247\351\205\215\347\275\256"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 261, 461));
        gridLayout_6 = new QGridLayout(page_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        checkBox_2 = new QCheckBox(page_4);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout_6->addWidget(checkBox_2, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(page_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_6->addWidget(lineEdit_2, 2, 1, 1, 2);

        pushButton_7 = new QPushButton(page_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_6->addWidget(pushButton_7, 4, 1, 1, 2);

        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_6->addWidget(pushButton_4, 1, 1, 1, 2);

        label_7 = new QLabel(page_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(label_7, 6, 0, 1, 1);

        checkBox_3 = new QCheckBox(page_4);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        sizePolicy3.setHeightForWidth(checkBox_3->sizePolicy().hasHeightForWidth());
        checkBox_3->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(checkBox_3, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(page_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_6->addWidget(pushButton_5, 1, 0, 1, 1);

        checkBox_4 = new QCheckBox(page_4);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        sizePolicy3.setHeightForWidth(checkBox_4->sizePolicy().hasHeightForWidth());
        checkBox_4->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(checkBox_4, 5, 0, 1, 1);

        pushButton_6 = new QPushButton(page_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_6->addWidget(pushButton_6, 3, 1, 1, 2);

        checkBox = new QCheckBox(page_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        sizePolicy3.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(checkBox, 0, 0, 1, 1);

        widget_2 = new QWidget(page_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        gridLayout_6->addWidget(widget_2, 9, 0, 1, 3);

        checkBox_5 = new QCheckBox(page_4);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        sizePolicy3.setHeightForWidth(checkBox_5->sizePolicy().hasHeightForWidth());
        checkBox_5->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(checkBox_5, 4, 0, 1, 1);

        checkBox_6 = new QCheckBox(page_4);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        sizePolicy3.setHeightForWidth(checkBox_6->sizePolicy().hasHeightForWidth());
        checkBox_6->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(checkBox_6, 8, 0, 1, 3);

        horizontalSlider = new QSlider(page_4);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider, 7, 0, 1, 1);

        spinBox = new QSpinBox(page_4);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_6->addWidget(spinBox, 7, 1, 1, 1);

        toolBox->addItem(page_4, QString::fromUtf8("\346\216\245\346\224\266\345\214\272"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 261, 461));
        toolBox->addItem(page_2, QString::fromUtf8("\345\217\221\351\200\201\345\214\272"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 261, 461));
        gridLayout = new QGridLayout(page_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_10 = new QPushButton(page_5);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 2, 0, 1, 1);

        pushButton_9 = new QPushButton(page_5);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(page_5);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 0, 0, 1, 1);

        widget_3 = new QWidget(page_5);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));

        gridLayout->addWidget(widget_3, 3, 0, 1, 1);

        toolBox->addItem(page_5, QString::fromUtf8("\345\267\245\345\205\267\347\256\261"));

        retranslateUi(serial_setting);

        toolBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(serial_setting);
    } // setupUi

    void retranslateUi(QWidget *serial_setting)
    {
        serial_setting->setWindowTitle(QCoreApplication::translate("serial_setting", "Form", nullptr));
        label->setText(QCoreApplication::translate("serial_setting", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("serial_setting", "\346\263\242\347\211\271\347\216\207", nullptr));
        pushButton_3->setText(QCoreApplication::translate("serial_setting", "\351\251\261\345\212\250\345\256\211\350\243\205", nullptr));
        pushButton->setText(QCoreApplication::translate("serial_setting", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_2->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("serial_setting", "\345\237\272\346\234\254\351\205\215\347\275\256", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("serial_setting", "GroupBox", nullptr));
        label_6->setText(QCoreApplication::translate("serial_setting", "\346\265\201\346\216\247", nullptr));
        label_3->setText(QCoreApplication::translate("serial_setting", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_4->setText(QCoreApplication::translate("serial_setting", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_5->setText(QCoreApplication::translate("serial_setting", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_8->setText(QCoreApplication::translate("serial_setting", "\346\211\223\345\274\200\346\250\241\345\274\217", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("serial_setting", "GroupBox", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("serial_setting", "GroupBox", nullptr));
        toolButton->setText(QCoreApplication::translate("serial_setting", "...", nullptr));
        label_9->setText(QCoreApplication::translate("serial_setting", "\344\277\235\345\255\230\345\206\205\345\256\271", nullptr));
        pushButton_11->setText(QCoreApplication::translate("serial_setting", "\345\210\267\346\226\260", nullptr));
        checkBox_7->setText(QCoreApplication::translate("serial_setting", "\346\211\223\345\274\200\345\220\216\350\277\233\345\205\245\346\227\245\345\277\227\346\250\241\345\274\217", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("serial_setting", "\351\253\230\347\272\247\351\205\215\347\275\256", nullptr));
        checkBox_2->setText(QCoreApplication::translate("serial_setting", "HEX", nullptr));
        pushButton_7->setText(QCoreApplication::translate("serial_setting", "\345\270\247\345\272\217\345\217\267\346\270\205\351\233\266", nullptr));
        pushButton_4->setText(QCoreApplication::translate("serial_setting", "\346\255\243\346\226\207\351\242\234\350\211\262", nullptr));
        label_7->setText(QCoreApplication::translate("serial_setting", "\345\270\247\351\227\264\351\232\224", nullptr));
        checkBox_3->setText(QCoreApplication::translate("serial_setting", "\346\267\273\345\212\240\346\227\266\351\227\264\346\210\263", nullptr));
        pushButton_5->setText(QCoreApplication::translate("serial_setting", "\345\255\227\344\275\223", nullptr));
        checkBox_4->setText(QCoreApplication::translate("serial_setting", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        pushButton_6->setText(QCoreApplication::translate("serial_setting", "\346\227\266\351\227\264\346\210\263\345\255\227\346\256\265\351\242\234\350\211\262", nullptr));
        checkBox->setText(QCoreApplication::translate("serial_setting", "ASCII\345\255\227\347\254\246", nullptr));
        checkBox_5->setText(QCoreApplication::translate("serial_setting", "\346\267\273\345\212\240\345\270\247\345\272\217\345\217\267", nullptr));
        checkBox_6->setText(QCoreApplication::translate("serial_setting", "\346\232\202\345\201\234\346\227\266\345\201\234\346\255\242\350\256\241\346\225\260", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QCoreApplication::translate("serial_setting", "\346\216\245\346\224\266\345\214\272", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("serial_setting", "\345\217\221\351\200\201\345\214\272", nullptr));
        pushButton_10->setText(QCoreApplication::translate("serial_setting", "\346\211\223\345\274\200\346\225\260\345\200\274\346\215\242\347\256\227", nullptr));
        pushButton_9->setText(QCoreApplication::translate("serial_setting", "\346\240\241\351\252\214\347\240\201\350\256\241\347\256\227", nullptr));
        pushButton_8->setText(QCoreApplication::translate("serial_setting", "\346\211\223\345\274\200ASCII\347\240\201\350\241\250", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QCoreApplication::translate("serial_setting", "\345\267\245\345\205\267\347\256\261", nullptr));
    } // retranslateUi

};

namespace Ui {
    class serial_setting: public Ui_serial_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_SETTING_H
