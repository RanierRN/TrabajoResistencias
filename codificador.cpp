#include "codificador.h"
#include "mainwindow.h"
#include "./ui_codificador.h"
#include <iostream>
#include <vector>

using namespace std;

CodificadorDlg::CodificadorDlg(QWidget *parent)
        : QDialog(parent)
        , ui(new Ui::CodificadorDlg)
{
    ui->setupUi(this);
    connect(ui->rb4Bandas, &QRadioButton::clicked,
            this, &CodificadorDlg::bands_changed);
    connect(ui->rb5Bandas, &QRadioButton::clicked,
            this, &CodificadorDlg::bands_changed);
    connect(ui->btnCodificar, &QPushButton::clicked,
            this, &CodificadorDlg::Codificar);
}

CodificadorDlg::~CodificadorDlg()
{
    delete ui;
}

void CodificadorDlg::bands_changed(){
    using_5bands = ui->rb5Bandas->isChecked();
    ui->Banda4->setVisible(using_5bands);
}

void CodificadorDlg::Codificar(){
    string ValorResistencia, Valor;
    ValorResistencia = ui->ValorRes->text().toStdString();
    vector<string> Vector;
    cout << ValorResistencia.size() << endl;
    for(int i = 0; i < ValorResistencia.size(); i++){
        string Value;
        Value = ValorResistencia[i];
        Vector.push_back(Value);
    }
    bool x, y;
    x = ui->rb4Bandas->isChecked();
    y = ui->rb5Bandas->isChecked();
    if (x == 1){
        string Banda1, Banda2;
        Banda1 = Vector[0];//1
        Banda2 = Vector[1];//10
        if (ui->UnidadBox->currentIndex() == 0){
            CodificadorDlg::Banda1(Banda1);
            CodificadorDlg::Banda2(Banda2);
            CodificadorDlg::Banda3_0(ValorResistencia.size());
        }
        if (ui->UnidadBox->currentIndex() == 1){
            CodificadorDlg::Banda1(Banda1);
            CodificadorDlg::Banda2(Banda2);
            CodificadorDlg::Banda3_k(ValorResistencia.size());
        }
        if (ui->UnidadBox->currentIndex() == 2){
            CodificadorDlg::Banda1(Banda1);
            CodificadorDlg::Banda2(Banda2);
            CodificadorDlg::Banda3_m(ValorResistencia.size());
        }
        if (ui->UnidadBox->currentIndex() == 3){
            CodificadorDlg::Banda1(Banda1);
            CodificadorDlg::Banda2(Banda2);
            CodificadorDlg::Banda3_g(ValorResistencia.size());
        }
    }

    if (y == 1){
        string Banda1, Banda2, Banda3;
        Banda1 = ValorResistencia[0];
        Banda2 = ValorResistencia[1];
        Banda3 = ValorResistencia[2];
        CodificadorDlg::Banda1(Banda1);
        CodificadorDlg::Banda2(Banda2);
        CodificadorDlg::Banda3(Banda3);
        if (ui->UnidadBox->currentIndex() == 0){
            CodificadorDlg::Banda1(Banda1);
            CodificadorDlg::Banda2(Banda2);
            CodificadorDlg::Banda3(Banda3);
            CodificadorDlg::Banda4_0(ValorResistencia.size());
        }
        if (ui->UnidadBox->currentIndex() == 1){
            CodificadorDlg::Banda1(Banda1);
            CodificadorDlg::Banda2(Banda2);
            CodificadorDlg::Banda3(Banda3);
            CodificadorDlg::Banda4_k(ValorResistencia.size());
        }
        if (ui->UnidadBox->currentIndex() == 2){
            CodificadorDlg::Banda1(Banda1);
            CodificadorDlg::Banda2(Banda2);
            CodificadorDlg::Banda3(Banda3);
            CodificadorDlg::Banda4_m(ValorResistencia.size());
        }
        if (ui->UnidadBox->currentIndex() == 3){
            CodificadorDlg::Banda1(Banda1);
            CodificadorDlg::Banda2(Banda2);
            CodificadorDlg::Banda3(Banda3);
            CodificadorDlg::Banda4_g(ValorResistencia.size());
        }
    }
}

void CodificadorDlg::Banda1(string g){
    if (g == "0") //negro
        ui->Banda1->setStyleSheet("background-color: rgb(0, 0, 0);");
    else if (g == "1") //cafe
        ui->Banda1->setStyleSheet("background-color: rgb(152, 101, 54);");
    else if (g == "2") //rojo
        ui->Banda1->setStyleSheet("background-color: rgb(255, 0, 0);");
    else if (g == "3") //naranja
        ui->Banda1->setStyleSheet("background-color: rgb(255, 127, 0);");
    else if (g == "4") //amarillo
        ui->Banda1->setStyleSheet("background-color: rgb(248, 255, 0);");
    else if (g == "5") //verde
        ui->Banda1->setStyleSheet("background-color: rgb(0, 255, 0);");
    else if (g == "6") //azul
        ui->Banda1->setStyleSheet("background-color: rgb(0, 0, 255);");
    else if (g == "7") //violeta
        ui->Banda1->setStyleSheet("background-color: rgb(150, 0, 255);");
    else if (g == "8") //gris
        ui->Banda1->setStyleSheet("background-color: rgb(156, 156, 156);");
    else if (g == "9") //blanco
        ui->Banda1->setStyleSheet("background-color: rgb(255, 255, 255);");
}

void CodificadorDlg::Banda2(string h){
    if (h == "0") //negro
        ui->Banda2->setStyleSheet("background-color: rgb(0, 0, 0);");
    else if (h == "1") //cafe
        ui->Banda2->setStyleSheet("background-color: rgb(152, 101, 54);");
    else if (h == "2") //rojo
        ui->Banda2->setStyleSheet("background-color: rgb(255, 0, 0);");
    else if (h == "3") //naranja
        ui->Banda2->setStyleSheet("background-color: rgb(255, 127, 0);");
    else if (h == "4") //amarillo
        ui->Banda2->setStyleSheet("background-color: rgb(248, 255, 0);");
    else if (h == "5") //verde
        ui->Banda2->setStyleSheet("background-color: rgb(0, 255, 0);");
    else if (h == "6") //azul
        ui->Banda2->setStyleSheet("background-color: rgb(0, 0, 255);");
    else if (h == "7") //violeta
        ui->Banda2->setStyleSheet("background-color: rgb(150, 0, 255);");
    else if (h == "8") //gris
        ui->Banda2->setStyleSheet("background-color: rgb(156, 156, 156);");
    else if (h == "9") //blanco
        ui->Banda2->setStyleSheet("background-color: rgb(255, 255, 255);");
}

void CodificadorDlg::Banda3(string d){
    if (d == "0") //negro
        ui->Banda3->setStyleSheet("background-color: rgb(0, 0, 0);");
    else if (d == "1") //cafe
        ui->Banda3->setStyleSheet("background-color: rgb(152, 101, 54);");
    else if (d == "2") //rojo
        ui->Banda3->setStyleSheet("background-color: rgb(255, 0, 0);");
    else if (d == "3") //naranja
        ui->Banda3->setStyleSheet("background-color: rgb(255, 127, 0);");
    else if (d == "4") //amarillo
        ui->Banda3->setStyleSheet("background-color: rgb(248, 255, 0);");
    else if (d == "5") //verde
        ui->Banda3->setStyleSheet("background-color: rgb(0, 255, 0);");
    else if (d == "6") //azul
        ui->Banda3->setStyleSheet("background-color: rgb(0, 0, 255);");
    else if (d == "7") //violeta
        ui->Banda3->setStyleSheet("background-color: rgb(150, 0, 255);");
    else if (d == "8") //gris
        ui->Banda3->setStyleSheet("background-color: rgb(156, 156, 156);");
    else if (d == "9") //blanco
        ui->Banda3->setStyleSheet("background-color: rgb(255, 255, 255);");
}

void CodificadorDlg::Banda3_0(int d){
    if (d == 1) //dorado
        ui->Banda3->setStyleSheet("background-color: rgb(212, 175, 55);");
    else if (d == 2) //negro
        ui->Banda3->setStyleSheet("background-color: rgb(0, 0, 0);");
    else if (d == 3)//cafe
        ui->Banda3->setStyleSheet("background-color: rgb(152, 101, 54);");
    else if (d == 4) //rojo
        ui->Banda3->setStyleSheet("background-color: rgb(255, 0, 0);");
    else if (d == 5) //naranja
        ui->Banda3->setStyleSheet("background-color: rgb(255, 127, 0);");
    else if (d == 6) //amarillo
        ui->Banda3->setStyleSheet("background-color: rgb(248, 255, 0);");
    else if (d == 7) //verde
        ui->Banda3->setStyleSheet("background-color: rgb(0, 255, 0);");
    else if (d == 8) //azul
        ui->Banda3->setStyleSheet("background-color: rgb(0, 0, 255);");
    else if (d == 9) //violeta
        ui->Banda3->setStyleSheet("background-color: rgb(150, 0, 255);");
    else if (d == 10) //gris
        ui->Banda3->setStyleSheet("background-color: rgb(156, 156, 156);");
    else if (d > 10) //blanco
        ui->Banda3->setStyleSheet("background-color: rgb(255, 255, 255);");
}

void CodificadorDlg::Banda3_k(int d){
    if (d == 1) //rojo
        ui->Banda3->setStyleSheet("background-color: rgb(255, 0, 0);");
    else if (d == 2) //naranja
        ui->Banda3->setStyleSheet("background-color: rgb(255, 127, 0);");
    else if (d == 3) //amarillo
        ui->Banda3->setStyleSheet("background-color: rgb(248, 255, 0);");
    else if (d == 4) //verde
        ui->Banda3->setStyleSheet("background-color: rgb(0, 255, 0);");
    else if (d == 5) //azul
        ui->Banda3->setStyleSheet("background-color: rgb(0, 0, 255);");
    else if (d == 6) //violeta
        ui->Banda3->setStyleSheet("background-color: rgb(150, 0, 255);");
    else if (d == 7) //gris
        ui->Banda3->setStyleSheet("background-color: rgb(156, 156, 156);");
    else if (d > 7) //blanco
        ui->Banda3->setStyleSheet("background-color: rgb(255, 255, 255);");
}

void CodificadorDlg::Banda3_m(int d){
    if (d == 1) //verde
        ui->Banda3->setStyleSheet("background-color: rgb(0, 255, 0);");
    else if (d == 2) //azul
        ui->Banda3->setStyleSheet("background-color: rgb(0, 0, 255);");
    else if (d == 3) //violeta
        ui->Banda3->setStyleSheet("background-color: rgb(150, 0, 255);");
    else if (d == 4) //gris
        ui->Banda3->setStyleSheet("background-color: rgb(156, 156, 156);");
    else if (d > 4) //blanco
        ui->Banda3->setStyleSheet("background-color: rgb(255, 255, 255);");
}

void CodificadorDlg::Banda3_g(int d){
    if (d == 1) //gris
        ui->Banda3->setStyleSheet("background-color: rgb(156, 156, 156);");
    else if (d > 1) //blanco
        ui->Banda3->setStyleSheet("background-color: rgb(255, 255, 255);");
}

void CodificadorDlg::Banda4_0(int d){
    if (d == 1) //dorado
        ui->Banda3->setStyleSheet("background-color: rgb(212, 175, 55);");
    else if (d == 2) //negro
        ui->Banda3->setStyleSheet("background-color: rgb(0, 0, 0);");
    else if (d == 3)//cafe
        ui->Banda3->setStyleSheet("background-color: rgb(152, 101, 54);");
    else if (d == 4) //rojo
        ui->Banda3->setStyleSheet("background-color: rgb(255, 0, 0);");
    else if (d == 5) //naranja
        ui->Banda3->setStyleSheet("background-color: rgb(255, 127, 0);");
    else if (d == 6) //amarillo
        ui->Banda3->setStyleSheet("background-color: rgb(248, 255, 0);");
    else if (d == 7) //verde
        ui->Banda3->setStyleSheet("background-color: rgb(0, 255, 0);");
    else if (d == 8) //azul
        ui->Banda3->setStyleSheet("background-color: rgb(0, 0, 255);");
    else if (d == 9) //violeta
        ui->Banda3->setStyleSheet("background-color: rgb(150, 0, 255);");
    else if (d == 10) //gris
        ui->Banda3->setStyleSheet("background-color: rgb(156, 156, 156);");
    else if (d > 10) //blanco
        ui->Banda3->setStyleSheet("background-color: rgb(255, 255, 255);");
}

void CodificadorDlg::Banda4_k(int d){
    if (d == 1) //rojo
        ui->Banda3->setStyleSheet("background-color: rgb(255, 0, 0);");
    else if (d == 2) //naranja
        ui->Banda3->setStyleSheet("background-color: rgb(255, 127, 0);");
    else if (d == 3) //amarillo
        ui->Banda3->setStyleSheet("background-color: rgb(248, 255, 0);");
    else if (d == 4) //verde
        ui->Banda3->setStyleSheet("background-color: rgb(0, 255, 0);");
    else if (d == 5) //azul
        ui->Banda3->setStyleSheet("background-color: rgb(0, 0, 255);");
    else if (d == 6) //violeta
        ui->Banda3->setStyleSheet("background-color: rgb(150, 0, 255);");
    else if (d == 7) //gris
        ui->Banda3->setStyleSheet("background-color: rgb(156, 156, 156);");
    else if (d > 7) //blanco
        ui->Banda3->setStyleSheet("background-color: rgb(255, 255, 255);");
}

void CodificadorDlg::Banda4_m(int d){
    if (d == 1) //verde
        ui->Banda3->setStyleSheet("background-color: rgb(0, 255, 0);");
    else if (d == 2) //azul
        ui->Banda3->setStyleSheet("background-color: rgb(0, 0, 255);");
    else if (d == 3) //violeta
        ui->Banda3->setStyleSheet("background-color: rgb(150, 0, 255);");
    else if (d == 4) //gris
        ui->Banda3->setStyleSheet("background-color: rgb(156, 156, 156);");
    else if (d > 4) //blanco
        ui->Banda3->setStyleSheet("background-color: rgb(255, 255, 255);");
}

void CodificadorDlg::Banda4_g(int d){
    if (d == 1) //gris
        ui->Banda3->setStyleSheet("background-color: rgb(156, 156, 156);");
    else if (d > 1) //blanco
        ui->Banda3->setStyleSheet("background-color: rgb(255, 255, 255);");
}