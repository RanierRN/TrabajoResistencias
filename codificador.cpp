#include "codificador.h"
#include "mainwindow.h"
#include "./ui_codificador.h"
#include <iostream>

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
    string ValorResistencia;
    ValorResistencia = ui->ValorRes->text().toInt();
    bool x, y;
    x = ui->rb4Bandas->isChecked();
    y = ui->rb5Bandas->isChecked();
    if (x == 1){
        if (ui->UnidadBox->currentIndex() == 0){
            ui->Banda3->setStyleSheet("background-color: rgb(0, 0, 0);"); // Negro
        }
        if (ui->UnidadBox->currentIndex() == 1){
            ui->Banda3->setStyleSheet("background-color: rgb(255, 127, 0);"); // Naranja
        }
        if (ui->UnidadBox->currentIndex() == 2){
            ui->Banda3->setStyleSheet("background-color: rgb(0, 0, 255);"); // Azul
        }
        if (ui->UnidadBox->currentIndex() == 3){
            ui->Banda3->setStyleSheet("background-color: rgb(255, 255, 255);"); // Blanco
        }
    }

    if (y == 1){
        if (ui->UnidadBox->currentIndex() == 0){
            ui->Banda4->setStyleSheet("background-color: rgb(0, 0, 0);"); // Negro
        }
        if (ui->UnidadBox->currentIndex() == 1){
            ui->Banda4->setStyleSheet("background-color: rgb(255, 127, 0);"); // Naranja
        }
        if (ui->UnidadBox->currentIndex() == 2){
            ui->Banda4->setStyleSheet("background-color: rgb(0, 0, 255);"); // Azul
        }
        if (ui->UnidadBox->currentIndex() == 3){
            ui->Banda4->setStyleSheet("background-color: rgb(255, 255, 255);"); // Blanco
        }
    }

    ui->Banda1->setStyleSheet("background-color: rgb(255, 0, 0);");
}