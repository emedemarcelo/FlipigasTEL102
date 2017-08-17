#ifndef SOLICITANTE_H
#define SOLICITANTE_H

#include <QMainWindow>

namespace Ui {
class Solicitante;
}

class Solicitante : public QMainWindow
{
    Q_OBJECT

public:
    explicit Solicitante(QWidget *parent = 0);
    ~Solicitante();

private:
    Ui::Solicitante *ui;
};

#endif // SOLICITANTE_H
