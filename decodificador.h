//
// Created by adrian on 22/11/20.
//

#ifndef RESISTENCIAS_DECODIFICADOR_H
#define RESISTENCIAS_DECODIFICADOR_H

#include <QDialog>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class DecodificadorDlg; }
QT_END_NAMESPACE

class DecodificadorDlg : public QDialog
{
Q_OBJECT

public:
    DecodificadorDlg(QWidget *parent = nullptr);
    ~DecodificadorDlg();

private:
    Ui::DecodificadorDlg *ui;
    bool using_5_bands = true;

    void bands_changed();
    void initialize_colorcombos();
    void Conversion();
    basic_string<char> Banda1();
    basic_string<char> Banda2();
    basic_string<char> Banda3_a();
    basic_string<char> Banda3_b();
    basic_string<char> Banda4();
    basic_string<char> Banda5();
};


class Colores{
public:
    static const QColor Negro;
    static const QColor Marron;
    static const QColor Rojo;
    static const QColor Naranja;
    static const QColor Amarillo;
    static const QColor Verde;
    static const QColor Azul;
    static const QColor Violeta;
    static const QColor Gris;
    static const QColor Blanco;
    static const QColor Plata;
    static const QColor Oro;
};
#endif //RESISTENCIAS_DECODIFICADOR_H
