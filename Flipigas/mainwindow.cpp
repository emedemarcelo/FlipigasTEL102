#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_user_radioButton_pressed()
{
    window = 1;
    std::cout << window << std::endl;
}

void MainWindow::on_repartidor_radioButton_pressed()
{
    window = 2;
    std::cout << window << std::endl;
}

void MainWindow::on_admin_radioButton_pressed()
{
    window = 3;
    std::cout << window << std::endl;
}

void MainWindow::on_EntrarButton_clicked()
{
    this->hide();
    //user = new Usuario(this);
    //user->show();
    //solicit = new Solicitante(this);
    //solicit->show();
    //administrador = new Admin(this);
    //administrador->show();

    if (window == 1){
        solicit = new Solicitante(this);
        solicit->show();
    }
    if (window == 2){
        user = new Usuario(this);
        user->show();
    }

    if (window == 3){
        administrador = new Admin(this);
        administrador->show();
    }
}
