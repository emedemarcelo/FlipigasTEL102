#ifndef SOLICITANTE_H
#define SOLICITANTE_H

#include <QMainWindow>
#include <iostream>

namespace Ui {
class Solicitante;
}

class Solicitante : public QMainWindow
{
    Q_OBJECT

public:
    explicit Solicitante(QWidget *parent = 0);
    ~Solicitante();

private slots:
    void on_CantCIlindrosBox_valueChanged(int arg1);

    void on_VolverSolicitudButton_clicked();

private:
    Ui::Solicitante *ui;
    int ID;
    std::string name;
    int cantGalones;
};

#endif // SOLICITANTE_H
