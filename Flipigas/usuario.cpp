#include "usuario.h"
#include "ui_usuario.h"
#include "mainwindow.h"

Usuario::Usuario(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Usuario)
{
    ui->setupUi(this);
    ID = 1;
    name = "Ignacio Andrés García Peñailillo";
}

Usuario::~Usuario()
{
    delete ui;
}

void Usuario::on_Volver_clicked()
{
    this->hide();
    QWidget *pariente= this->parentWidget();
    pariente->show();
}
