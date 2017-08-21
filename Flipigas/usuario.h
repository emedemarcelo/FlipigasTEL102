#ifndef USUARIO_H
#define USUARIO_H

#include <QMainWindow>

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

private:
    Ui::Usuario *ui;
    int ID;
    std::string name;
};

#endif // USUARIO_H
