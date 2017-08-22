#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>

namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = 0);
    ~Admin();

private slots:
    void on_VolverAdminButton_clicked();

    void on_CalcularVentasButton_clicked();

private:
    Ui::Admin *ui;
    int ID;
    std::string name;
};

#endif // ADMIN_H
