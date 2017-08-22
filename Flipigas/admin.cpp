#include "admin.h"
#include "ui_admin.h"
#include "mainwindow.h"

#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QCompleter>
#include <QTextStream>
#include <QComboBox>
#include <QStringList>

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    ID = 1;
    name = "Marcelo Iván González Henríquez";

    QFile inputFile("cerros.csv");
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

    CamionesQuery();
}

Admin::~Admin()
{
    delete ui;
    delete csvModel;
}

void Admin::VentasQuery(){
    int Tipo_Escogido;
    int Litros_Escogido;
    int Total_Ventas=0;

    // el csv debe tener de formato CERRO,CATALITICO/NO CATALITICO,LITROS,DINERO. catalitico =0  y no catalitico =1.

    QFile ventascsv("db/ventas_prueba.csv");
    bool ClassifyWithTipo= !ui->AmbosRadioButton->isChecked();

    if(ui->CincoLTRadioButton->isChecked()) Litros_Escogido=5;
    else if (ui->DiezLTRadioButton->isChecked()) Litros_Escogido=10;
    else if (ui->QuinceLTRadioButton->isChecked()) Litros_Escogido=15;

    if (ui->CataliticoRadioButton->isChecked()) Tipo_Escogido=0;
    else if (ui->NoCataliticoRadioButton->isChecked()) Tipo_Escogido=1;

    QString Cerro_Escogido_Box = ui->CerroBox->currentText();
    std::string Cerro_Escogido= Cerro_Escogido_Box.toStdString();

    if (ventascsv.open(QIODevice::ReadOnly))
    {
      QTextStream escuchador(&ventascsv);
      while (!escuchador.atEnd())
      {
         QString line_ventascsv = escuchador.readLine();
         QStringList line_ventacsv_splitted = line_ventascsv.split(",");

         QString cerro_incsv=line_ventacsv_splitted[0];
         QString tipo_incsv=line_ventacsv_splitted[1];
         QString litros_incsv = line_ventacsv_splitted[2];
         QString dinero_incsv = line_ventacsv_splitted[3];

         std::string cerro_incsv_std=cerro_incsv.toStdString();
         int tipo_incsv_std=tipo_incsv.toInt();
         int litros_incsv_std=litros_incsv.toInt();
         int dinero_incsv_std = dinero_incsv.toInt();

         if (ClassifyWithTipo== false){
             if (litros_incsv_std==Litros_Escogido && cerro_incsv_std==Cerro_Escogido){
                 Total_Ventas+=dinero_incsv_std;
             }
         }

         else{
             if (litros_incsv_std==Litros_Escogido && cerro_incsv_std==Cerro_Escogido && tipo_incsv_std==Tipo_Escogido){
                 Total_Ventas+=dinero_incsv_std;
             }

         }


      }
      ventascsv.close();
      ui->Ventas->setText(QString::number(Total_Ventas));
    }

}

void Admin::CamionesQuery(){

    csvModel = new QStandardItemModel(this);
    csvModel->setColumnCount(6);
    csvModel->setHorizontalHeaderLabels(QStringList() << "Numero de Camion" << "Cilindros restantes" << "Solicitudes restantes" << "Solicitudes atendidas" << "Tiempo estimado de disponibilidad" << "Tiempo que demora en atender");
    ui->CamionesRepartoTabla->QTableView::setModel(csvModel);
    ui->CamionesRepartoTabla->resizeColumnsToContents();
    ui->CamionesRepartoTabla->setEditTriggers(QAbstractItemView::NoEditTriggers);

    QFile file("db/camiones_enmarcha.csv");
    if ( !file.open(QFile::ReadOnly | QFile::Text) ) {
        qDebug() << "File not exists";
    } else {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QList<QStandardItem *> standardItemsList;
            for (QString item : line.split(",")) {
                standardItemsList.append(new QStandardItem(item));
            }
            csvModel->insertRow(csvModel->rowCount(), standardItemsList);
        }
        file.close();
    }
}

void Admin::on_VolverAdminButton_clicked()
{
    this->hide();
    QWidget *pariente= this->parentWidget();
    pariente->show();

}

void Admin::on_CalcularVentasButton_clicked()
{
    VentasQuery();
}

void Admin::on_ActualizarCamionesButton_clicked()
{
    CamionesQuery();
}
