#include "usuario.h"
#include "ui_usuario.h"

Usuario::Usuario(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Usuario)
{
    ui->setupUi(this);
}

Usuario::~Usuario()
{
    delete ui;
}
