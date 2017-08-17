#include "solicitante.h"
#include "ui_solicitante.h"

Solicitante::Solicitante(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Solicitante)
{
    ui->setupUi(this);
}

Solicitante::~Solicitante()
{
    delete ui;
}
