#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QCompleter>
#include <QTextStream>
#include <QComboBox>
#include <QStringList>
#include <QStandardItemModel>
namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = 0);
    ~Admin();
    void VentasQuery();
    void CamionesQuery();

private slots:
    void on_VolverAdminButton_clicked();

    void on_CalcularVentasButton_clicked();

    void on_ActualizarCamionesButton_clicked();

    void on_ActualizarButton_clicked();

private:
    Ui::Admin *ui;
    int ID;
    std::string name;
    QStandardItemModel *csvModel;
};

#endif // ADMIN_H
