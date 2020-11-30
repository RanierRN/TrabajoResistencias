/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCodificador;
    QAction *actionDecodificador;
    QWidget *centralwidget;
    QPushButton *btnCodificador;
    QPushButton *btnDecodificador;
    QMenuBar *menubar;
    QMenu *menuModo;
    QMenu *menuAcerca_de;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(357, 201);
        actionCodificador = new QAction(MainWindow);
        actionCodificador->setObjectName(QString::fromUtf8("actionCodificador"));
        actionDecodificador = new QAction(MainWindow);
        actionDecodificador->setObjectName(QString::fromUtf8("actionDecodificador"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnCodificador = new QPushButton(centralwidget);
        btnCodificador->setObjectName(QString::fromUtf8("btnCodificador"));
        btnCodificador->setGeometry(QRect(40, 30, 291, 40));
        btnDecodificador = new QPushButton(centralwidget);
        btnDecodificador->setObjectName(QString::fromUtf8("btnDecodificador"));
        btnDecodificador->setGeometry(QRect(40, 90, 291, 40));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 357, 36));
        menuModo = new QMenu(menubar);
        menuModo->setObjectName(QString::fromUtf8("menuModo"));
        menuAcerca_de = new QMenu(menubar);
        menuAcerca_de->setObjectName(QString::fromUtf8("menuAcerca_de"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuModo->menuAction());
        menubar->addAction(menuAcerca_de->menuAction());
        menuModo->addAction(actionCodificador);
        menuModo->addAction(actionDecodificador);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Resistencias", nullptr));
        actionCodificador->setText(QApplication::translate("MainWindow", "Codificador", nullptr));
        actionDecodificador->setText(QApplication::translate("MainWindow", "Decodificador", nullptr));
        btnCodificador->setText(QApplication::translate("MainWindow", "Codificador", nullptr));
        btnDecodificador->setText(QApplication::translate("MainWindow", "Decodificador", nullptr));
        menuModo->setTitle(QApplication::translate("MainWindow", "Modo", nullptr));
        menuAcerca_de->setTitle(QApplication::translate("MainWindow", "Acerca de ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
