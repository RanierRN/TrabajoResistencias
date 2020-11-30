#include "codificador.h"
#include "mainwindow.h"
#include "./ui_codificador.h"
#include <iostream>

CodificadorDlg::CodificadorDlg(QWidget *parent)
        : QDialog(parent)
        , ui(new Ui::CodificadorDlg)
{
    ui->setupUi(this);
}

CodificadorDlg::~CodificadorDlg()
{
    delete ui;
}
