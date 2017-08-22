#include "admin.h"
#include "ui_admin.h"
#include "mainwindow.h"

#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QCompleter>
#include <QTextStream>
#include <QComboBox>

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    ID = 1;
    name = "Marcelo Iván González Henríquez";

    QFile inputFile("db/cerros.csv");
    if (inputFile.open(QIODevice::ReadOnly))
    {
      QTextStream in(&inputFile);
      while (!in.atEnd())
      {
         QString line = in.readLine();
         QStringList line2= line.split(",");
        ui->CerroBox->addItem (line2[0]);
      }
      inputFile.close();
    }
    }

Admin::~Admin()
{
    delete ui;
}


void Admin::on_VolverAdminButton_clicked()
{
    this->hide();
    QWidget *pariente= this->parentWidget();
    pariente->show();

}

void Admin::on_CalcularVentasButton_clicked()
{
    int Tipo_Escogido;
    int Litros_Escogido;

    if(ui->CincoLTRadioButton->isChecked()) Litros_Escogido=5;
    else if (ui->DiezLTRadioButton->isChecked()) Litros_Escogido=10;
    else if (ui->QuinceLTRadioButton->isChecked()) Litros_Escogido=15;

    if (ui->CataliticoRadioButton->isChecked()) Tipo_Escogido=0;
    else if (ui->NoCataliticoRadioButton->isChecked()) Tipo_Escogido=1;
    else if (ui->AmbosRadioButton->isChecked()) Tipo_Escogido=2;

    QString Cerro_Escogido_Box = ui->CerroBox->currentText();
    std::string Cerro_Escogido= Cerro_Escogido_Box.toStdString();


    std::cout << Cerro_Escogido << " - " << Tipo_Escogido << "-" << Litros_Escogido << std::endl;
}
