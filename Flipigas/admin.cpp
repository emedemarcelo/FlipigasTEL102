#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    ID = 1;
    name = "Marcelo Iván González Henríquez";
}

Admin::~Admin()
{
    delete ui;
}
