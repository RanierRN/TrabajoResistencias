//
// Created by ranierrn on 03/12/20.
//

#ifndef RESISTENCIAS_FACTORIARESISTENCIA_H
#define RESISTENCIAS_FACTORIARESISTENCIA_H

#include <memory>
#include "codificador.h"

class Resistencia{
public:
    virtual void Codificar() = 0;
    virtual void Decodificar() = 0;
};

class Resistencia4Bandas: public Resistencia{
public:
    virtual void Codificar();
    virtual void Decodificar();
};

class Resistencia5Bandas: public Resistencia{
public:
    virtual void Codificar();
    virtual void Decodificar();
};

enum class TipoResistencia {A, B};

class Factoria {
public:
    std::shared_ptr<Resistencia> getResistencia(TipoResistencia);
};

#endif //RESISTENCIAS_FACTORIARESISTENCIA_H
