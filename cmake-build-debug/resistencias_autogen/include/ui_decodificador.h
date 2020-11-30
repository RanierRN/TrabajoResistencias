/********************************************************************************
** Form generated from reading UI file 'decodificador.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECODIFICADOR_H
#define UI_DECODIFICADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include "kcolorcombo.h"

QT_BEGIN_NAMESPACE

class Ui_DecodificadorDlg
{
public:
    QLabel *label;
    QLabel *lblResistencia;
    KColorCombo *kColorBanda1;
    KColorCombo *kColorBanda2;
    KColorCombo *kColorBanda3;
    KColorCombo *kColorBanda4;
    KColorCombo *kColorBanda5;
    QRadioButton *rb4Bandas;
    QRadioButton *rb5Bandas;
    QPushButton *btnDecodificar;
    QLabel *lblResistencia_2;

    void setupUi(QDialog *DecodificadorDlg)
    {
        if (DecodificadorDlg->objectName().isEmpty())
            DecodificadorDlg->setObjectName(QString::fromUtf8("DecodificadorDlg"));
        DecodificadorDlg->resize(340, 194);
        label = new QLabel(DecodificadorDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 160, 161, 24));
        lblResistencia = new QLabel(DecodificadorDlg);
        lblResistencia->setObjectName(QString::fromUtf8("lblResistencia"));
        lblResistencia->setGeometry(QRect(190, 160, 121, 24));
        kColorBanda1 = new KColorCombo(DecodificadorDlg);
        kColorBanda1->setObjectName(QString::fromUtf8("kColorBanda1"));
        kColorBanda1->setGeometry(QRect(30, 40, 61, 38));
        kColorBanda1->setEditable(false);
        kColorBanda1->setCurrentText(QString::fromUtf8(""));
        kColorBanda1->setColor(QColor(0, 0, 0));
        kColorBanda2 = new KColorCombo(DecodificadorDlg);
        kColorBanda2->setObjectName(QString::fromUtf8("kColorBanda2"));
        kColorBanda2->setGeometry(QRect(100, 40, 61, 38));
        kColorBanda2->setEditable(false);
        kColorBanda2->setCurrentText(QString::fromUtf8(""));
        kColorBanda2->setColor(QColor(0, 0, 0));
        kColorBanda3 = new KColorCombo(DecodificadorDlg);
        kColorBanda3->setObjectName(QString::fromUtf8("kColorBanda3"));
        kColorBanda3->setGeometry(QRect(170, 40, 61, 38));
        kColorBanda3->setEditable(false);
        kColorBanda3->setCurrentText(QString::fromUtf8(""));
        kColorBanda3->setColor(QColor(0, 0, 0));
        kColorBanda4 = new KColorCombo(DecodificadorDlg);
        kColorBanda4->setObjectName(QString::fromUtf8("kColorBanda4"));
        kColorBanda4->setGeometry(QRect(240, 40, 61, 38));
        kColorBanda4->setEditable(false);
        kColorBanda4->setCurrentText(QString::fromUtf8(""));
        kColorBanda4->setColor(QColor(0, 0, 0));
        kColorBanda5 = new KColorCombo(DecodificadorDlg);
        kColorBanda5->setObjectName(QString::fromUtf8("kColorBanda5"));
        kColorBanda5->setGeometry(QRect(140, 90, 61, 38));
        kColorBanda5->setEditable(false);
        kColorBanda5->setCurrentText(QString::fromUtf8(""));
        kColorBanda5->setColor(QColor(0, 0, 0));
        rb4Bandas = new QRadioButton(DecodificadorDlg);
        rb4Bandas->setObjectName(QString::fromUtf8("rb4Bandas"));
        rb4Bandas->setGeometry(QRect(70, 0, 110, 28));
        rb5Bandas = new QRadioButton(DecodificadorDlg);
        rb5Bandas->setObjectName(QString::fromUtf8("rb5Bandas"));
        rb5Bandas->setGeometry(QRect(160, 0, 110, 28));
        rb5Bandas->setChecked(true);
        btnDecodificar = new QPushButton(DecodificadorDlg);
        btnDecodificar->setObjectName(QString::fromUtf8("btnDecodificar"));
        btnDecodificar->setGeometry(QRect(230, 90, 93, 40));
        lblResistencia_2 = new QLabel(DecodificadorDlg);
        lblResistencia_2->setObjectName(QString::fromUtf8("lblResistencia_2"));
        lblResistencia_2->setGeometry(QRect(60, 100, 121, 24));
        lblResistencia_2->raise();
        label->raise();
        lblResistencia->raise();
        kColorBanda1->raise();
        kColorBanda2->raise();
        kColorBanda3->raise();
        kColorBanda4->raise();
        kColorBanda5->raise();
        rb4Bandas->raise();
        rb5Bandas->raise();
        btnDecodificar->raise();

        retranslateUi(DecodificadorDlg);

        QMetaObject::connectSlotsByName(DecodificadorDlg);
    } // setupUi

    void retranslateUi(QDialog *DecodificadorDlg)
    {
        DecodificadorDlg->setWindowTitle(QApplication::translate("DecodificadorDlg", "Decodificador", nullptr));
        label->setText(QApplication::translate("DecodificadorDlg", "Valor de la Resistencia:", nullptr));
        lblResistencia->setText(QString());
        rb4Bandas->setText(QApplication::translate("DecodificadorDlg", "4 Bandas", nullptr));
        rb5Bandas->setText(QApplication::translate("DecodificadorDlg", "5 Bandas", nullptr));
        btnDecodificar->setText(QApplication::translate("DecodificadorDlg", "Decodificar", nullptr));
        lblResistencia_2->setText(QApplication::translate("DecodificadorDlg", "Tolerancia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DecodificadorDlg: public Ui_DecodificadorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECODIFICADOR_H
