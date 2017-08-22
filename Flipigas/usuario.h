#ifndef USUARIO_H
#define USUARIO_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "camion.h"

namespace Ui {
class Usuario;
}

class Usuario : public QMainWindow
{
    Q_OBJECT

public:
    explicit Usuario(QWidget *parent = 0);
    ~Usuario();

private slots:
    void on_Volver_clicked();
    void on_UpdateSolicitudesButton_clicked();
    void on_FinalizarEntregaButton_clicked();

private:
    Ui::Usuario *ui;
    int ID;
    std::string name;
    QStandardItemModel *csvModel;
    int gallons_delivered = 0;
    Camion camion;
};

#endif // USUARIO_H
