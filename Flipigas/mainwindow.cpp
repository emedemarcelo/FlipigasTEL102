#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStackedWidget>
#include <QBoxLayout>
#include <QComboBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    user = new Usuario(this);
    solicit = new Solicitante(this);
    administrador = new Admin(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_user_radioButton_pressed()
{

}

void MainWindow::on_repartidor_radioButton_pressed()
{

}

void MainWindow::on_admin_radioButton_pressed()
{
}

void MainWindow::on_EntrarButton_clicked()
{
    this->hide();

    if (ui->admin_radioButton->isChecked()){
        administrador->show();
    }

    else if(ui->user_radioButton->isChecked()){
        solicit->show();
    }

    else if(ui->repartidor_radioButton->isChecked()){
        user->show();
    }

}

int MainWindow::getSolicitudesHechas(){
    return user->getGallonsDelivered();
}
