#include "usuario.h"
#include "ui_usuario.h"

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
