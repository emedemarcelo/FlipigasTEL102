#include "solicitante.h"
#include "ui_solicitante.h"

Solicitante::Solicitante(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Solicitante)
{
    ui->setupUi(this);
    ID = 1;
    name = "José Luis Gallardo Parancán";
}

Solicitante::~Solicitante()
{
    delete ui;
}

void Solicitante::on_CantCIlindrosBox_valueChanged(int arg1)
{
    cantGalones = arg1;
    std::cout << cantGalones << std::endl;
}

void Solicitante::on_VolverSolicitudButton_clicked()
{
    this->hide();
    QWidget *pariente= this->parentWidget();
    pariente->show();
}
