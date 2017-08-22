/********************************************************************************
** Form generated from reading UI file 'usuario.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USUARIO_H
#define UI_USUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Usuario
{
public:
    QWidget *centralwidget;
    QFrame *Tabla_Frame;
    QTableWidget *tableWidget;
    QFrame *InfoRepartidorFrame;
    QLabel *RepartidorLabel;
    QLabel *NombreRepartidor;
    QFrame *AdjustFrame;
    QLabel *CamionAsignadoLabel;
    QLabel *TiempoLlegadaLabel;
    QLineEdit *TiempoLlegada;
    QLabel *LugarRepartidorLabel;
    QPushButton *UpdateSolicitudesButton;
    QPushButton *FinalizarEntregaButton;
    QLabel *TipoCamion;
    QPushButton *Volver;
    QComboBox *CerrosRepartidor;

    void setupUi(QMainWindow *Usuario)
    {
        if (Usuario->objectName().isEmpty())
            Usuario->setObjectName(QStringLiteral("Usuario"));
        Usuario->resize(838, 437);
        centralwidget = new QWidget(Usuario);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Tabla_Frame = new QFrame(centralwidget);
        Tabla_Frame->setObjectName(QStringLiteral("Tabla_Frame"));
        Tabla_Frame->setGeometry(QRect(40, 100, 461, 311));
        Tabla_Frame->setFrameShape(QFrame::StyledPanel);
        Tabla_Frame->setFrameShadow(QFrame::Raised);
        tableWidget = new QTableWidget(Tabla_Frame);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 461, 311));
        InfoRepartidorFrame = new QFrame(centralwidget);
        InfoRepartidorFrame->setObjectName(QStringLiteral("InfoRepartidorFrame"));
        InfoRepartidorFrame->setGeometry(QRect(39, 10, 461, 80));
        InfoRepartidorFrame->setFrameShape(QFrame::StyledPanel);
        InfoRepartidorFrame->setFrameShadow(QFrame::Raised);
        RepartidorLabel = new QLabel(InfoRepartidorFrame);
        RepartidorLabel->setObjectName(QStringLiteral("RepartidorLabel"));
        RepartidorLabel->setGeometry(QRect(60, 30, 71, 16));
        NombreRepartidor = new QLabel(InfoRepartidorFrame);
        NombreRepartidor->setObjectName(QStringLiteral("NombreRepartidor"));
        NombreRepartidor->setGeometry(QRect(140, 30, 221, 16));
        AdjustFrame = new QFrame(centralwidget);
        AdjustFrame->setObjectName(QStringLiteral("AdjustFrame"));
        AdjustFrame->setGeometry(QRect(520, 10, 311, 401));
        AdjustFrame->setFrameShape(QFrame::StyledPanel);
        AdjustFrame->setFrameShadow(QFrame::Raised);
        CamionAsignadoLabel = new QLabel(AdjustFrame);
        CamionAsignadoLabel->setObjectName(QStringLiteral("CamionAsignadoLabel"));
        CamionAsignadoLabel->setGeometry(QRect(10, 20, 141, 21));
        TiempoLlegadaLabel = new QLabel(AdjustFrame);
        TiempoLlegadaLabel->setObjectName(QStringLiteral("TiempoLlegadaLabel"));
        TiempoLlegadaLabel->setGeometry(QRect(10, 50, 221, 16));
        TiempoLlegada = new QLineEdit(AdjustFrame);
        TiempoLlegada->setObjectName(QStringLiteral("TiempoLlegada"));
        TiempoLlegada->setGeometry(QRect(240, 50, 51, 22));
        LugarRepartidorLabel = new QLabel(AdjustFrame);
        LugarRepartidorLabel->setObjectName(QStringLiteral("LugarRepartidorLabel"));
        LugarRepartidorLabel->setGeometry(QRect(10, 80, 141, 16));
        UpdateSolicitudesButton = new QPushButton(AdjustFrame);
        UpdateSolicitudesButton->setObjectName(QStringLiteral("UpdateSolicitudesButton"));
        UpdateSolicitudesButton->setGeometry(QRect(40, 130, 231, 81));
        FinalizarEntregaButton = new QPushButton(AdjustFrame);
        FinalizarEntregaButton->setObjectName(QStringLiteral("FinalizarEntregaButton"));
        FinalizarEntregaButton->setGeometry(QRect(40, 230, 231, 91));
        TipoCamion = new QLabel(AdjustFrame);
        TipoCamion->setObjectName(QStringLiteral("TipoCamion"));
        TipoCamion->setGeometry(QRect(140, 20, 101, 21));
        Volver = new QPushButton(AdjustFrame);
        Volver->setObjectName(QStringLiteral("Volver"));
        Volver->setGeometry(QRect(40, 350, 231, 31));
        CerrosRepartidor = new QComboBox(AdjustFrame);
        CerrosRepartidor->setObjectName(QStringLiteral("CerrosRepartidor"));
        CerrosRepartidor->setGeometry(QRect(160, 80, 131, 22));
        Usuario->setCentralWidget(centralwidget);

        retranslateUi(Usuario);

        QMetaObject::connectSlotsByName(Usuario);
    } // setupUi

    void retranslateUi(QMainWindow *Usuario)
    {
        Usuario->setWindowTitle(QApplication::translate("Usuario", "Flipigas - Repartidor", Q_NULLPTR));
        RepartidorLabel->setText(QApplication::translate("Usuario", "Repartidor:", Q_NULLPTR));
        NombreRepartidor->setText(QApplication::translate("Usuario", "NOMBRE_REPARTIDOR", Q_NULLPTR));
        CamionAsignadoLabel->setText(QApplication::translate("Usuario", "Cami\303\263n asignado:", Q_NULLPTR));
        TiempoLlegadaLabel->setText(QApplication::translate("Usuario", "TIempo de llegada (en minutos): ", Q_NULLPTR));
        LugarRepartidorLabel->setText(QApplication::translate("Usuario", "Lugar del repartidor: ", Q_NULLPTR));
        UpdateSolicitudesButton->setText(QApplication::translate("Usuario", "Actualizar solicitudes en Sector", Q_NULLPTR));
        FinalizarEntregaButton->setText(QApplication::translate("Usuario", "Finalizar entrega", Q_NULLPTR));
        TipoCamion->setText(QApplication::translate("Usuario", "tipo_camion", Q_NULLPTR));
        Volver->setText(QApplication::translate("Usuario", "Volver al men\303\272 principal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Usuario: public Ui_Usuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USUARIO_H
