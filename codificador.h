//
// Created by ranierrn on 29/11/20.
//

#ifndef RESISTENCIAS_CODIFICADOR_H
#define RESISTENCIAS_CODIFICADOR_H
#include <QDialog>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class CodificadorDlg; }
QT_END_NAMESPACE

class CodificadorDlg : public QDialog
{
Q_OBJECT

public:
    CodificadorDlg(QWidget *parent = nullptr);
    ~CodificadorDlg();

private:
    Ui::CodificadorDlg *ui;
    bool using_5bands = true;

    void bands_changed();
    void Codificar();
    void Banda1(string g);
    void Banda2(string h);
    void Banda3(string d);
    void Banda3_0(int d);
    void Banda3_k(int d);
    void Banda3_m(int d);
    void Banda3_g(int d);
    void Banda4_0(int d);
    void Banda4_k(int d);
    void Banda4_m(int d);
    void Banda4_g(int d);
};
#endif //RESISTENCIAS_CODIFICADOR_H
