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
