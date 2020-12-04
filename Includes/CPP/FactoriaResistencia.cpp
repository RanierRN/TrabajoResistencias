#include "Includes/HEADER/FactoriaResistencia.h"
#include <iostream>

using namespace std;

void Resistencia4Bandas::Codificar() {
    cout << "F en el chat" << endl;
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