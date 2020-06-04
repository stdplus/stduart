/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionabout;
    QAction *actionupdate;
    QAction *actionnew;
    QAction *actionview_tab;
    QAction *actionview_child;
    QAction *actioncascadeSubWindows;
    QAction *actiontileSubWindows;
    QAction *actioncloseAllSubWindows;
    QAction *actionexport;
    QAction *actionanalysis;
    QAction *actiongenert;
    QAction *actionupdate_2;
    QWidget *centralwidget;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1500, 1000);
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName(QString::fromUtf8("actionabout"));
        actionupdate = new QAction(MainWindow);
        actionupdate->setObjectName(QString::fromUtf8("actionupdate"));
        actionnew = new QAction(MainWindow);
        actionnew->setObjectName(QString::fromUtf8("actionnew"));
        actionview_tab = new QAction(MainWindow);
        actionview_tab->setObjectName(QString::fromUtf8("actionview_tab"));
        actionview_child = new QAction(MainWindow);
        actionview_child->setObjectName(QString::fromUtf8("actionview_child"));
        actioncascadeSubWindows = new QAction(MainWindow);
        actioncascadeSubWindows->setObjectName(QString::fromUtf8("actioncascadeSubWindows"));
        actiontileSubWindows = new QAction(MainWindow);
        actiontileSubWindows->setObjectName(QString::fromUtf8("actiontileSubWindows"));
        actioncloseAllSubWindows = new QAction(MainWindow);
        actioncloseAllSubWindows->setObjectName(QString::fromUtf8("actioncloseAllSubWindows"));
        actionexport = new QAction(MainWindow);
        actionexport->setObjectName(QString::fromUtf8("actionexport"));
        actionanalysis = new QAction(MainWindow);
        actionanalysis->setObjectName(QString::fromUtf8("actionanalysis"));
        actiongenert = new QAction(MainWindow);
        actiongenert->setObjectName(QString::fromUtf8("actiongenert"));
        actionupdate_2 = new QAction(MainWindow);
        actionupdate_2->setObjectName(QString::fromUtf8("actionupdate_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(280, 130, 200, 160));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1500, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionnew);
        menu->addAction(actionupdate_2);
        menu_2->addAction(actionabout);
        menu_2->addAction(actionupdate);
        menu_3->addAction(actionview_tab);
        menu_3->addAction(actionview_child);
        menu_3->addSeparator();
        menu_3->addAction(actioncascadeSubWindows);
        menu_3->addAction(actiontileSubWindows);
        menu_3->addSeparator();
        menu_3->addAction(actioncloseAllSubWindows);
        menu_4->addAction(actionexport);
        menu_4->addAction(actionanalysis);
        menu_5->addAction(actiongenert);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionabout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        actionupdate->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\237\245\346\233\264\346\226\260", nullptr));
        actionnew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\277\236\346\216\245", nullptr));
        actionview_tab->setText(QCoreApplication::translate("MainWindow", "TAB\351\241\265\346\250\241\345\274\217", nullptr));
        actionview_child->setText(QCoreApplication::translate("MainWindow", "\345\255\220\347\252\227\345\217\243\346\250\241\345\274\217", nullptr));
        actioncascadeSubWindows->setText(QCoreApplication::translate("MainWindow", "\347\272\247\350\277\236", nullptr));
        actiontileSubWindows->setText(QCoreApplication::translate("MainWindow", "\345\271\263\351\223\272", nullptr));
        actioncloseAllSubWindows->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211", nullptr));
        actionexport->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272", nullptr));
        actionanalysis->setText(QCoreApplication::translate("MainWindow", "\345\210\206\346\236\220..", nullptr));
        actiongenert->setText(QCoreApplication::translate("MainWindow", "\351\246\226\351\200\211\351\241\271", nullptr));
        actionupdate_2->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\347\263\273\347\273\237\344\270\262\345\217\243", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
