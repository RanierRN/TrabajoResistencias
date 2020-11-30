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
};
#endif //RESISTENCIAS_CODIFICADOR_H
