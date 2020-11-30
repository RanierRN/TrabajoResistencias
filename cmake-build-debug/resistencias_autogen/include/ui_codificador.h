/********************************************************************************
** Form generated from reading UI file 'codificador.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODIFICADOR_H
#define UI_CODIFICADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_CodificadorDlg
{
public:
    QRadioButton *rb4Bandas;
    QRadioButton *rb5Bandas;
    QPushButton *btnCodificar;
    QLineEdit *lineEdit;
    QLabel *Banda1;
    QLabel *Banda2;
    QLabel *Banda3;
    QLabel *Banda4;

    void setupUi(QDialog *CodificadorDlg)
    {
        if (CodificadorDlg->objectName().isEmpty())
            CodificadorDlg->setObjectName(QString::fromUtf8("CodificadorDlg"));
        CodificadorDlg->resize(382, 182);
        rb4Bandas = new QRadioButton(CodificadorDlg);
        rb4Bandas->setObjectName(QString::fromUtf8("rb4Bandas"));
        rb4Bandas->setGeometry(QRect(70, 10, 81, 22));
        rb5Bandas = new QRadioButton(CodificadorDlg);
        rb5Bandas->setObjectName(QString::fromUtf8("rb5Bandas"));
        rb5Bandas->setGeometry(QRect(240, 10, 81, 22));
        btnCodificar = new QPushButton(CodificadorDlg);
        btnCodificar->setObjectName(QString::fromUtf8("btnCodificar"));
        btnCodificar->setGeometry(QRect(150, 100, 88, 34));
        lineEdit = new QLineEdit(CodificadorDlg);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 50, 113, 32));
        Banda1 = new QLabel(CodificadorDlg);
        Banda1->setObjectName(QString::fromUtf8("Banda1"));
        Banda1->setGeometry(QRect(60, 150, 58, 18));
        Banda1->setAutoFillBackground(false);
        Banda1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Banda2 = new QLabel(CodificadorDlg);
        Banda2->setObjectName(QString::fromUtf8("Banda2"));
        Banda2->setGeometry(QRect(130, 150, 58, 18));
        Banda2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Banda3 = new QLabel(CodificadorDlg);
        Banda3->setObjectName(QString::fromUtf8("Banda3"));
        Banda3->setGeometry(QRect(200, 150, 58, 18));
        Banda3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Banda4 = new QLabel(CodificadorDlg);
        Banda4->setObjectName(QString::fromUtf8("Banda4"));
        Banda4->setGeometry(QRect(270, 150, 58, 18));
        Banda4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(CodificadorDlg);

        QMetaObject::connectSlotsByName(CodificadorDlg);
    } // setupUi

    void retranslateUi(QDialog *CodificadorDlg)
    {
        CodificadorDlg->setWindowTitle(QApplication::translate("CodificadorDlg", "Codificador", nullptr));
        rb4Bandas->setText(QApplication::translate("CodificadorDlg", "4 Bandas", nullptr));
        rb5Bandas->setText(QApplication::translate("CodificadorDlg", "5 Bandas", nullptr));
        btnCodificar->setText(QApplication::translate("CodificadorDlg", "Codificar", nullptr));
        Banda1->setText(QString());
        Banda2->setText(QString());
        Banda3->setText(QString());
        Banda4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CodificadorDlg: public Ui_CodificadorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODIFICADOR_H
