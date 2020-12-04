#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "decodificador.h"
#include "codificador.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnCodificador, &QPushButton::clicked,
            this, &MainWindow::show_codificador_dlg);

    connect(ui->actionCodificador, &QAction::triggered,
            this, &MainWindow::show_codificador_dlg);

    connect(ui->btnDecodificador, &QPushButton::clicked,
                     this, &MainWindow::show_decodificador_dlg);

    connect(ui->actionDecodificador, &QAction::triggered,
                        this, &MainWindow::show_decodificador_dlg);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::show_codificador_dlg()
{
    CodificadorDlg dlg;
    dlg.exec();
}

void MainWindow::show_decodificador_dlg()
{
    DecodificadorDlg dlg;
    dlg.exec();
}
