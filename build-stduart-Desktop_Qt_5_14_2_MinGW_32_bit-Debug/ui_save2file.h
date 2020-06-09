/********************************************************************************
** Form generated from reading UI file 'save2file.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVE2FILE_H
#define UI_SAVE2FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_save2file
{
public:
    QProgressBar *progressBar;

    void setupUi(QWidget *save2file)
    {
        if (save2file->objectName().isEmpty())
            save2file->setObjectName(QString::fromUtf8("save2file"));
        save2file->resize(419, 202);
        progressBar = new QProgressBar(save2file);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(100, 70, 211, 23));
        progressBar->setValue(24);

        retranslateUi(save2file);

        QMetaObject::connectSlotsByName(save2file);
    } // setupUi

    void retranslateUi(QWidget *save2file)
    {
        save2file->setWindowTitle(QCoreApplication::translate("save2file", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class save2file: public Ui_save2file {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVE2FILE_H
