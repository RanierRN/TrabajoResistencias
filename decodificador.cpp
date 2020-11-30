//
// Created by adrian on 22/11/20.
//

#include "decodificador.h"
#include "mainwindow.h"
#include "./ui_decodificador.h"
#include <iostream>

DecodificadorDlg::DecodificadorDlg(QWidget *parent)
        : QDialog(parent)
        , ui(new Ui::DecodificadorDlg)
{
    ui->setupUi(this);
    initialize_colorcombos();

    connect(ui->rb4Bandas, &QRadioButton::clicked,
            this, &DecodificadorDlg::bands_changed);
    connect(ui->rb5Bandas, &QRadioButton::clicked,
            this, &DecodificadorDlg::bands_changed);
    connect(ui->btnDecodificar, &QPushButton::clicked,
            this, &DecodificadorDlg::Conversion);
}

DecodificadorDlg::~DecodificadorDlg()
{
    delete ui;
}

void DecodificadorDlg::bands_changed()
{
    using_5_bands = ui->rb5Bandas->isChecked();
    ui->kColorBanda4->setVisible(using_5_bands);
}

const QColor Colores::Negro = QColor(0, 0, 0);
const QColor Colores::Marron = QColor(152, 101, 54);
const QColor Colores::Rojo = QColor(255, 5, 5);
const QColor Colores::Naranja = QColor(255, 127, 0);
const QColor Colores::Amarillo = QColor(248, 255, 0);
const QColor Colores::Verde = QColor(0, 153, 1);
const QColor Colores::Azul = QColor(0, 0, 255);
const QColor Colores::Violeta = QColor(150, 0, 255);
const QColor Colores::Gris = QColor(156, 156, 156);
const QColor Colores::Blanco = QColor(255, 255, 255);
const QColor Colores::Plata = QColor(192, 192, 192);
const QColor Colores::Oro = QColor(212, 175, 55);

void DecodificadorDlg::initialize_colorcombos()
{
    QList<QColor> colors;
    colors.append(Colores::Negro);
    colors.append(Colores::Marron);
    colors.append(Colores::Rojo);
    colors.append(Colores::Naranja);
    colors.append(Colores::Amarillo);
    colors.append(Colores::Verde);
    colors.append(Colores::Azul);
    colors.append(Colores::Violeta);
    colors.append(Colores::Gris);
    colors.append(Colores::Blanco);
    QList<QColor> Tolerance;
    Tolerance.append(Colores::Marron);
    Tolerance.append(Colores::Rojo);
    Tolerance.append(Colores::Verde);
    Tolerance.append(Colores::Azul);
    Tolerance.append(Colores::Violeta);
    Tolerance.append(Colores::Gris);
    Tolerance.append(Colores::Plata);
    Tolerance.append(Colores::Oro);
    ui->kColorBanda1->setColors(colors);
    ui->kColorBanda2->setColors(colors);
    ui->kColorBanda3->setColors(colors);
    ui->kColorBanda4->setColors(colors);
    ui->kColorBanda5->setColors(Tolerance);
}

void DecodificadorDlg::Conversion() {
    string Valor, L1, L2, L3, L4, T;
    bool x, y;
    x = ui->rb4Bandas->isChecked();
    y = ui->rb5Bandas->isChecked();

    if (x == 1) {
        L1 = DecodificadorDlg::Banda1();
        L2 = DecodificadorDlg::Banda2();
        L3 = DecodificadorDlg::Banda3_a();
        T = DecodificadorDlg::Banda5();
        string Unidad =" Ohms";
        Valor = L1 + L2 + L3 + Unidad + T;
        cout << L1 + L2 + L3 + T << " Ohms " << endl;
        char cuenta[20];
        strcpy(cuenta, Valor.c_str());
        ui->lblResistencia->setText(cuenta);
    }
    if (y == 1){
        L1 = DecodificadorDlg::Banda1();
        L2 = DecodificadorDlg::Banda2();
        L3 = DecodificadorDlg::Banda3_b();
        L4 = DecodificadorDlg::Banda4();
        T = DecodificadorDlg::Banda5();
        string Unidad =" Ohms ";
        Valor = L1 + L2 + L3 + L4 + Unidad + T;
        char cuenta[30];
        strcpy(cuenta, Valor.c_str());
        ui->lblResistencia->setText(cuenta);
    }
}

basic_string<char> DecodificadorDlg::Banda1(){
    string a;
    const QColor eleccion = ui->kColorBanda1->color();
    if (eleccion == Colores::Negro){
        a = "0";
    }
    else if (eleccion == Colores::Marron){
        a = "1";
    }
    else if (eleccion == Colores::Rojo){
        a = "2";
    }
    else if (eleccion == Colores::Naranja){
        a = "3";
    }
    else if (eleccion == Colores::Amarillo){
        a = "4";
    }
    else if (eleccion == Colores::Verde){
        a = "5";
    }
    else if (eleccion == Colores::Azul){
        a = "6";
    }
    else if (eleccion == Colores::Violeta){
        a = "7";
    }
    else if (eleccion == Colores::Gris){
        a = "8";
    }
    else if (eleccion == Colores::Blanco){
        a = "9";
    }
    return a;
}

basic_string<char> DecodificadorDlg::Banda2(){
    string a;
    const QColor eleccion = ui->kColorBanda2->color();
    if (eleccion == Colores::Negro){
        a = "0";
    }
    else if (eleccion == Colores::Marron){
        a = "1";
    }
    else if (eleccion == Colores::Rojo){
        a = "2";
    }
    else if (eleccion == Colores::Naranja){
        a = "3";
    }
    else if (eleccion == Colores::Amarillo){
        a = "4";
    }
    else if (eleccion == Colores::Verde){
        a = "5";
    }
    else if (eleccion == Colores::Azul){
        a = "6";
    }
    else if (eleccion == Colores::Violeta){
        a = "7";
    }
    else if (eleccion == Colores::Gris){
        a = "8";
    }
    else if (eleccion == Colores::Blanco){
        a = "9";
    }
    return a;
}

basic_string<char> DecodificadorDlg::Banda3_a(){
    string a;
    const QColor eleccion = ui->kColorBanda3->color();
    if (eleccion == Colores::Negro){
        a = "";
    }
    else if (eleccion == Colores::Marron){
        a = "0";
    }
    else if (eleccion == Colores::Rojo){
        a = "00";
    }
    else if (eleccion == Colores::Naranja){
        a = "K";
    }
    else if (eleccion == Colores::Amarillo){
        a = "0 K";
    }
    else if (eleccion == Colores::Verde){
        a = "00 K";
    }
    else if (eleccion == Colores::Azul){
        a = "M";
    }
    else if (eleccion == Colores::Violeta){
        a = "0 M";
    }
    else if (eleccion == Colores::Gris){
        a = "00 M";
    }
    else if (eleccion == Colores::Blanco){
        a = "G";
    }
    return a;
}

basic_string<char> DecodificadorDlg::Banda3_b(){
    string a;
    const QColor eleccion = ui->kColorBanda3->color();
    if (eleccion == Colores::Negro){
        a = "0";
    }
    else if (eleccion == Colores::Marron){
        a = "1";
    }
    else if (eleccion == Colores::Rojo){
        a = "2";
    }
    else if (eleccion == Colores::Naranja){
        a = "3";
    }
    else if (eleccion == Colores::Amarillo){
        a = "4";
    }
    else if (eleccion == Colores::Verde){
        a = "5";
    }
    else if (eleccion == Colores::Azul){
        a = "6";
    }
    else if (eleccion == Colores::Violeta){
        a = "7";
    }
    else if (eleccion == Colores::Gris){
        a = "8";
    }
    else if (eleccion == Colores::Blanco){
        a = "9";
    }
    return a;
}

basic_string<char> DecodificadorDlg::Banda4(){
    string a;
    const QColor eleccion = ui->kColorBanda4->color();
    if (eleccion == Colores::Negro){
        a = "";
    }
    else if (eleccion == Colores::Marron){
        a = "0";
    }
    else if (eleccion == Colores::Rojo){
        a = "00";
    }
    else if (eleccion == Colores::Naranja){
        a = "K";
    }
    else if (eleccion == Colores::Amarillo){
        a = "0 K";
    }
    else if (eleccion == Colores::Verde){
        a = "00 K";
    }
    else if (eleccion == Colores::Azul){
        a = "M";
    }
    else if (eleccion == Colores::Violeta){
        a = "0 M";
    }
    else if (eleccion == Colores::Gris){
        a = "00 M";
    }
    else if (eleccion == Colores::Blanco){
        a = "G";
    }
    return a;
}

basic_string<char> DecodificadorDlg::Banda5(){
    string a;
    const QColor eleccion = ui->kColorBanda5->color();
    if (eleccion == Colores::Marron){
        a = "1%";
    }
    else if (eleccion == Colores::Rojo){
        a = "2%";
    }
    else if (eleccion == Colores::Verde){
        a = "0.5%";
    }
    else if (eleccion == Colores::Azul){
        a = "0.25%";
    }
    else if (eleccion == Colores::Violeta){
        a = "0.1%";
    }
    else if (eleccion == Colores::Gris) {
        a = "0.05%";
    }
    else if (eleccion == Colores::Oro){
        a = "5%";
    }
    else if (eleccion == Colores::Plata){
        a = "10%";
    }
    return a;
}