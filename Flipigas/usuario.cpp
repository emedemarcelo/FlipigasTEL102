#include "usuario.h"
#include "ui_usuario.h"
#include "mainwindow.h"
#include <QApplication>
#include <QListWidget>
#include <QString>
#include <iostream>
#include <sstream>
#include <string>

Usuario::Usuario(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Usuario)
{
    ui->setupUi(this);
    ID = 1;
    name = "Ignacio Andrés García Peñailillo";
    csvModel = new QStandardItemModel(this);
    csvModel->setColumnCount(5);
    csvModel->setHorizontalHeaderLabels(QStringList() << "ID" << "Cerro" << "Tipo Galón" << "Tamaño Galón" << "Precio");
    ui->tableWidget->QTableView::setModel(csvModel);
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

Usuario::~Usuario()
{
    delete ui;
}


/*
 *     csvModel = new QStandardItemModel(this);
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
*/


void Usuario::on_UpdateSolicitudesButton_clicked(){
    std::cout << "UPDATE" << std::endl;
    QStandardItemModel *new_csvModel = new QStandardItemModel(this);
    new_csvModel->setColumnCount(5);
    new_csvModel->setHorizontalHeaderLabels(QStringList() << "ID" << "Cerro" << "Tipo Galón" << "Tamaño Galón" << "Precio");
    QFile file("solicitudes.csv");
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
            new_csvModel->insertRow(new_csvModel->rowCount(), standardItemsList);
        }
        ui->tableWidget->QTableView::setModel(new_csvModel);
        file.close();
    }
    gallons_delivered=0;
}

void Usuario::on_FinalizarEntregaButton_clicked(){
    std::cout << "DELIVER" << std::endl;
    QStandardItemModel *new_csvModel = new QStandardItemModel(this);
    new_csvModel->setColumnCount(5);
    new_csvModel->setHorizontalHeaderLabels(QStringList() << "ID" << "Cerro" << "Tipo Galón" << "Tamaño Galón" << "Precio");
    QFile file("solicitudes.csv");
    //int n_lineas = 1;
    int gallons_delivered_atmoment = 0;
    if ( !file.open(QFile::ReadOnly | QFile::Text) ) {
        qDebug() << "File not exists";
    } else {
        QTextStream in(&file);
        while (!in.atEnd()){
            std::cout << "MOVIENTO SOLICITUD" << std::endl;
            QList<QStandardItem *> standardItemsList;
            if (gallons_delivered_atmoment <= gallons_delivered){
                std::cout << "ELIMINANDO PRIMERA LINEA" << std::endl;
                gallons_delivered_atmoment++;
                QString line = in.readLine();
            }
            else {
                QString line = in.readLine();
                for (QString item : line.split(",")) {
                    standardItemsList.append(new QStandardItem(item));
                }
                new_csvModel->insertRow(new_csvModel->rowCount(), standardItemsList);
            }
            //n_lineas++;
        }
        ui->tableWidget->QTableView::setModel(new_csvModel);
        file.close();
    }
    gallons_delivered = gallons_delivered_atmoment;
    std::cout << "GALLONS DELIVERED : " << gallons_delivered << std::endl;
}

void Usuario::on_Volver_clicked()
{
    this->hide();
    QWidget *pariente= this->parentWidget();
    pariente->show();
}
