#include "Includes/HEADER/FactoriaResistencia.h"
#include "codificador.h"
#include <iostream>

void Resistencia4Bandas::Codificar() {
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




    string Banda1, Banda2;
    Banda1 = Vector[0];//1
    if (ui->UnidadBox->currentIndex() == 0){
        if(ValorResistencia.size() == 1){
            CodificadorDlg::Banda1(Banda1);
            ui->Banda2->setStyleSheet("background-color: rgb(0, 0, 0);");
            CodificadorDlg::Banda3_0(ValorResistencia.size());
        }
        else{
            Banda2 = Vector[1];//10
            CodificadorDlg::Banda1(Banda1);
            CodificadorDlg::Banda2(Banda2);
            CodificadorDlg::Banda3_0(ValorResistencia.size());
        }
    }
    if (ui->UnidadBox->currentIndex() == 1){
        if(ValorResistencia.size() == 1){
            CodificadorDlg::Banda1(Banda1);
            ui->Banda2->setStyleSheet("background-color: rgb(0, 0, 0);");
            CodificadorDlg::Banda3_k(ValorResistencia.size());
        }
        else{
            Banda2 = Vector[1];//10
            CodificadorDlg::Banda1(Banda1);
            CodificadorDlg::Banda2(Banda2);
            CodificadorDlg::Banda3_k(ValorResistencia.size());
        }
    }
    if (ui->UnidadBox->currentIndex() == 2){
        if(ValorResistencia.size() == 1){
            CodificadorDlg::Banda1(Banda1);
            ui->Banda2->setStyleSheet("background-color: rgb(0, 0, 0);");
            CodificadorDlg::Banda3_m(ValorResistencia.size());
        }
        else{
            Banda2 = Vector[1];//10
            CodificadorDlg::Banda1(Banda1);
            CodificadorDlg::Banda2(Banda2);
            CodificadorDlg::Banda3_m(ValorResistencia.size());
        }
    }
    if (ui->UnidadBox->currentIndex() == 3) {
        if (ValorResistencia.size() == 1) {
            CodificadorDlg::Banda1(Banda1);
            ui->Banda2->setStyleSheet("background-color: rgb(0, 0, 0);");
            CodificadorDlg::Banda3_g(ValorResistencia.size());
        } else {
            Banda2 = Vector[1];//10
            CodificadorDlg::Banda1(Banda1);
            CodificadorDlg::Banda2(Banda2);
            CodificadorDlg::Banda3_g(ValorResistencia.size());
        }
    }
}

void Resistencia4Bandas::Decodificar() {
    std::cout << "Funcionalidad B del Producto A" << std::endl;
}

void Resistencia5Bandas::Codificar() {
    std::cout << "Funcionalidad A del Producto B" << std::endl;
}

void Resistencia5Bandas::Decodificar() {
    std::cout << "Funcionalidad B del Producto B" << std::endl;
}

std::shared_ptr<Resistencia> Factoria::getResistencia(TipoResistencia tr) {
    switch (tr) {
        case TipoResistencia::A:
            return std::make_shared<Resistencia4Bandas>();
        case TipoResistencia::B:
            return std::make_shared<Resistencia5Bandas>();
    }
    return nullptr;
}