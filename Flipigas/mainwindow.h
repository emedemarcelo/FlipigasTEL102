#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "usuario.h"
#include "solicitante.h"
#include "admin.h"
#include <iostream>
#include <fstream>
#include <QStackedWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int window;

private slots:
    void on_EntrarButton_clicked();

    void on_user_radioButton_pressed();

    void on_repartidor_radioButton_pressed();

    void on_admin_radioButton_pressed();

    int getSolicitudesHechas();

private:
    Ui::MainWindow *ui;
    Usuario *user;
    Solicitante *solicit;
    Admin *administrador;
    QStackedWidget *CambiadorPaginas;
};

#endif // MAINWINDOW_H
