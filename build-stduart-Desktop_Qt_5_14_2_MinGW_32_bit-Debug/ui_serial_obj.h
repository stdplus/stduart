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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serial_obj
{
public:

    void setupUi(QWidget *serial_obj)
    {
        if (serial_obj->objectName().isEmpty())
            serial_obj->setObjectName(QString::fromUtf8("serial_obj"));
        serial_obj->resize(461, 486);

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
