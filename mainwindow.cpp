#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "decodificador.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btnCodificador->setEnabled(false);
    ui->actionCodificador->setEnabled(false);

    connect(ui->btnDecodificador, &QPushButton::clicked,
                     this, &MainWindow::show_decodificador_dlg);

    connect(ui->actionDecodificador, &QAction::triggered,
                        this, &MainWindow::show_decodificador_dlg);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::show_decodificador_dlg()
{
    DecodificadorDlg dlg;
    dlg.exec();
}
