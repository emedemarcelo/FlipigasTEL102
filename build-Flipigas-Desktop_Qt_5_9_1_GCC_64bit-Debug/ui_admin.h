/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *InformacionTab;
    QLabel *InfoGeneralLabel;
    QFrame *InformacionFrame;
    QLabel *TiempoEntregaLabel;
    QLabel *CantidadSolicitudesActLabel;
    QLabel *CantidadSolicitudesAttLabel;
    QLabel *TiempoDisponibilidadCamionLabel;
    QLabel *TiempoEntrega;
    QLabel *CantidadSolicitudesAct;
    QLabel *CantidadSolicitudesAtt;
    QLabel *TiempoDisponibilidadCamion;
    QLabel *minutosLabel1;
    QLabel *minutosLabel2;
    QPushButton *VolverAdminButton;
    QPushButton *ActualizarButton;
    QLabel *InfoGeneralIcon;
    QWidget *RepartidorTab;
    QFrame *RepartidorFrame;
    QLabel *CamionesEnRepartoLabel;
    QLabel *CamionesEnRepartoIcon;
    QPushButton *ActualizarCamionesButton;
    QTableWidget *CamionesRepartoTabla;
    QWidget *VentasyBodegaTab;
    QLabel *InfoVentasyBodegaLabel;
    QLabel *InfoventasIcon;
    QFrame *VentasFrame;
    QLabel *VentasLabel;
    QLabel *ClasificarLabel;
    QLabel *CerroLabel;
    QComboBox *CerroBox;
    QLabel *TipoLabel;
    QRadioButton *CataliticoRadioButton;
    QRadioButton *NoCataliticoRadioButton;
    QRadioButton *AmbosRadioButton;
    QFrame *BodegaFrame;
    QLabel *BodegaLabel;
    QLabel *CilindrosRestantesLabel;
    QLabel *CilindrosRestantes;
    QPushButton *SolicitarReposicionButton;
    QFrame *frame;
    QRadioButton *CincoLTRadioButton;
    QRadioButton *DiezLTRadioButton;
    QRadioButton *QuinceLTRadioButton;
    QLabel *TamanoLabel;
    QPushButton *CalcularVentasButton;
    QLabel *Ventas;
    QLabel *SignoPesoLabel;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->resize(639, 350);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 641, 351));
        InformacionTab = new QWidget();
        InformacionTab->setObjectName(QStringLiteral("InformacionTab"));
        InfoGeneralLabel = new QLabel(InformacionTab);
        InfoGeneralLabel->setObjectName(QStringLiteral("InfoGeneralLabel"));
        InfoGeneralLabel->setGeometry(QRect(110, 30, 371, 51));
        QFont font;
        font.setPointSize(22);
        InfoGeneralLabel->setFont(font);
        InformacionFrame = new QFrame(InformacionTab);
        InformacionFrame->setObjectName(QStringLiteral("InformacionFrame"));
        InformacionFrame->setGeometry(QRect(50, 90, 521, 221));
        InformacionFrame->setFrameShape(QFrame::StyledPanel);
        InformacionFrame->setFrameShadow(QFrame::Raised);
        TiempoEntregaLabel = new QLabel(InformacionFrame);
        TiempoEntregaLabel->setObjectName(QStringLiteral("TiempoEntregaLabel"));
        TiempoEntregaLabel->setGeometry(QRect(20, 20, 201, 16));
        CantidadSolicitudesActLabel = new QLabel(InformacionFrame);
        CantidadSolicitudesActLabel->setObjectName(QStringLiteral("CantidadSolicitudesActLabel"));
        CantidadSolicitudesActLabel->setGeometry(QRect(20, 50, 221, 16));
        CantidadSolicitudesAttLabel = new QLabel(InformacionFrame);
        CantidadSolicitudesAttLabel->setObjectName(QStringLiteral("CantidadSolicitudesAttLabel"));
        CantidadSolicitudesAttLabel->setGeometry(QRect(20, 80, 231, 16));
        TiempoDisponibilidadCamionLabel = new QLabel(InformacionFrame);
        TiempoDisponibilidadCamionLabel->setObjectName(QStringLiteral("TiempoDisponibilidadCamionLabel"));
        TiempoDisponibilidadCamionLabel->setGeometry(QRect(20, 110, 311, 16));
        TiempoEntrega = new QLabel(InformacionFrame);
        TiempoEntrega->setObjectName(QStringLiteral("TiempoEntrega"));
        TiempoEntrega->setGeometry(QRect(210, 20, 51, 16));
        CantidadSolicitudesAct = new QLabel(InformacionFrame);
        CantidadSolicitudesAct->setObjectName(QStringLiteral("CantidadSolicitudesAct"));
        CantidadSolicitudesAct->setGeometry(QRect(230, 50, 91, 16));
        CantidadSolicitudesAtt = new QLabel(InformacionFrame);
        CantidadSolicitudesAtt->setObjectName(QStringLiteral("CantidadSolicitudesAtt"));
        CantidadSolicitudesAtt->setGeometry(QRect(240, 80, 91, 16));
        TiempoDisponibilidadCamion = new QLabel(InformacionFrame);
        TiempoDisponibilidadCamion->setObjectName(QStringLiteral("TiempoDisponibilidadCamion"));
        TiempoDisponibilidadCamion->setGeometry(QRect(310, 110, 61, 16));
        minutosLabel1 = new QLabel(InformacionFrame);
        minutosLabel1->setObjectName(QStringLiteral("minutosLabel1"));
        minutosLabel1->setGeometry(QRect(260, 20, 58, 16));
        minutosLabel2 = new QLabel(InformacionFrame);
        minutosLabel2->setObjectName(QStringLiteral("minutosLabel2"));
        minutosLabel2->setGeometry(QRect(360, 110, 58, 16));
        VolverAdminButton = new QPushButton(InformacionFrame);
        VolverAdminButton->setObjectName(QStringLiteral("VolverAdminButton"));
        VolverAdminButton->setGeometry(QRect(290, 170, 151, 31));
        ActualizarButton = new QPushButton(InformacionFrame);
        ActualizarButton->setObjectName(QStringLiteral("ActualizarButton"));
        ActualizarButton->setGeometry(QRect(90, 170, 151, 31));
        InfoGeneralIcon = new QLabel(InformacionTab);
        InfoGeneralIcon->setObjectName(QStringLiteral("InfoGeneralIcon"));
        InfoGeneralIcon->setGeometry(QRect(40, 30, 51, 51));
        InfoGeneralIcon->setPixmap(QPixmap(QString::fromUtf8("Imgs/home-512.gif")));
        InfoGeneralIcon->setScaledContents(true);
        tabWidget->addTab(InformacionTab, QString());
        RepartidorTab = new QWidget();
        RepartidorTab->setObjectName(QStringLiteral("RepartidorTab"));
        RepartidorFrame = new QFrame(RepartidorTab);
        RepartidorFrame->setObjectName(QStringLiteral("RepartidorFrame"));
        RepartidorFrame->setGeometry(QRect(20, 20, 601, 101));
        RepartidorFrame->setFrameShape(QFrame::StyledPanel);
        RepartidorFrame->setFrameShadow(QFrame::Raised);
        CamionesEnRepartoLabel = new QLabel(RepartidorFrame);
        CamionesEnRepartoLabel->setObjectName(QStringLiteral("CamionesEnRepartoLabel"));
        CamionesEnRepartoLabel->setGeometry(QRect(90, 10, 371, 51));
        CamionesEnRepartoLabel->setFont(font);
        CamionesEnRepartoIcon = new QLabel(RepartidorFrame);
        CamionesEnRepartoIcon->setObjectName(QStringLiteral("CamionesEnRepartoIcon"));
        CamionesEnRepartoIcon->setGeometry(QRect(20, 10, 51, 51));
        CamionesEnRepartoIcon->setPixmap(QPixmap(QString::fromUtf8("Imgs/191.png")));
        CamionesEnRepartoIcon->setScaledContents(true);
        ActualizarCamionesButton = new QPushButton(RepartidorFrame);
        ActualizarCamionesButton->setObjectName(QStringLiteral("ActualizarCamionesButton"));
        ActualizarCamionesButton->setGeometry(QRect(440, 30, 111, 31));
        CamionesRepartoTabla = new QTableWidget(RepartidorTab);
        if (CamionesRepartoTabla->columnCount() < 6)
            CamionesRepartoTabla->setColumnCount(6);
        CamionesRepartoTabla->setObjectName(QStringLiteral("CamionesRepartoTabla"));
        CamionesRepartoTabla->setGeometry(QRect(20, 130, 601, 181));
        CamionesRepartoTabla->setEditTriggers(QAbstractItemView::NoEditTriggers);
        CamionesRepartoTabla->setGridStyle(Qt::SolidLine);
        CamionesRepartoTabla->setColumnCount(6);
        tabWidget->addTab(RepartidorTab, QString());
        VentasyBodegaTab = new QWidget();
        VentasyBodegaTab->setObjectName(QStringLiteral("VentasyBodegaTab"));
        InfoVentasyBodegaLabel = new QLabel(VentasyBodegaTab);
        InfoVentasyBodegaLabel->setObjectName(QStringLiteral("InfoVentasyBodegaLabel"));
        InfoVentasyBodegaLabel->setGeometry(QRect(120, 30, 401, 51));
        InfoVentasyBodegaLabel->setFont(font);
        InfoventasIcon = new QLabel(VentasyBodegaTab);
        InfoventasIcon->setObjectName(QStringLiteral("InfoventasIcon"));
        InfoventasIcon->setGeometry(QRect(40, 30, 61, 61));
        InfoventasIcon->setPixmap(QPixmap(QString::fromUtf8("Imgs/meter_calculator_11440.png")));
        InfoventasIcon->setScaledContents(true);
        VentasFrame = new QFrame(VentasyBodegaTab);
        VentasFrame->setObjectName(QStringLiteral("VentasFrame"));
        VentasFrame->setGeometry(QRect(30, 100, 351, 131));
        VentasFrame->setFrameShape(QFrame::StyledPanel);
        VentasFrame->setFrameShadow(QFrame::Raised);
        VentasLabel = new QLabel(VentasFrame);
        VentasLabel->setObjectName(QStringLiteral("VentasLabel"));
        VentasLabel->setGeometry(QRect(10, 10, 91, 21));
        QFont font1;
        font1.setPointSize(16);
        VentasLabel->setFont(font1);
        ClasificarLabel = new QLabel(VentasFrame);
        ClasificarLabel->setObjectName(QStringLiteral("ClasificarLabel"));
        ClasificarLabel->setGeometry(QRect(20, 50, 101, 16));
        QFont font2;
        font2.setPointSize(13);
        ClasificarLabel->setFont(font2);
        CerroLabel = new QLabel(VentasFrame);
        CerroLabel->setObjectName(QStringLiteral("CerroLabel"));
        CerroLabel->setGeometry(QRect(30, 80, 71, 16));
        CerroBox = new QComboBox(VentasFrame);
        CerroBox->setObjectName(QStringLiteral("CerroBox"));
        CerroBox->setGeometry(QRect(80, 80, 111, 16));
        TipoLabel = new QLabel(VentasFrame);
        TipoLabel->setObjectName(QStringLiteral("TipoLabel"));
        TipoLabel->setGeometry(QRect(30, 110, 58, 14));
        CataliticoRadioButton = new QRadioButton(VentasFrame);
        CataliticoRadioButton->setObjectName(QStringLiteral("CataliticoRadioButton"));
        CataliticoRadioButton->setGeometry(QRect(80, 110, 91, 16));
        NoCataliticoRadioButton = new QRadioButton(VentasFrame);
        NoCataliticoRadioButton->setObjectName(QStringLiteral("NoCataliticoRadioButton"));
        NoCataliticoRadioButton->setGeometry(QRect(170, 110, 121, 16));
        AmbosRadioButton = new QRadioButton(VentasFrame);
        AmbosRadioButton->setObjectName(QStringLiteral("AmbosRadioButton"));
        AmbosRadioButton->setGeometry(QRect(280, 110, 91, 16));
        BodegaFrame = new QFrame(VentasyBodegaTab);
        BodegaFrame->setObjectName(QStringLiteral("BodegaFrame"));
        BodegaFrame->setGeometry(QRect(400, 100, 221, 211));
        BodegaFrame->setFrameShape(QFrame::StyledPanel);
        BodegaFrame->setFrameShadow(QFrame::Raised);
        BodegaLabel = new QLabel(BodegaFrame);
        BodegaLabel->setObjectName(QStringLiteral("BodegaLabel"));
        BodegaLabel->setGeometry(QRect(10, 10, 91, 21));
        BodegaLabel->setFont(font1);
        CilindrosRestantesLabel = new QLabel(BodegaFrame);
        CilindrosRestantesLabel->setObjectName(QStringLiteral("CilindrosRestantesLabel"));
        CilindrosRestantesLabel->setGeometry(QRect(20, 50, 121, 16));
        CilindrosRestantes = new QLabel(BodegaFrame);
        CilindrosRestantes->setObjectName(QStringLiteral("CilindrosRestantes"));
        CilindrosRestantes->setGeometry(QRect(140, 50, 58, 16));
        SolicitarReposicionButton = new QPushButton(BodegaFrame);
        SolicitarReposicionButton->setObjectName(QStringLiteral("SolicitarReposicionButton"));
        SolicitarReposicionButton->setGeometry(QRect(30, 90, 171, 61));
        frame = new QFrame(VentasyBodegaTab);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 230, 151, 91));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        CincoLTRadioButton = new QRadioButton(frame);
        CincoLTRadioButton->setObjectName(QStringLiteral("CincoLTRadioButton"));
        CincoLTRadioButton->setGeometry(QRect(30, 30, 51, 16));
        DiezLTRadioButton = new QRadioButton(frame);
        DiezLTRadioButton->setObjectName(QStringLiteral("DiezLTRadioButton"));
        DiezLTRadioButton->setGeometry(QRect(30, 40, 51, 31));
        QuinceLTRadioButton = new QRadioButton(frame);
        QuinceLTRadioButton->setObjectName(QStringLiteral("QuinceLTRadioButton"));
        QuinceLTRadioButton->setGeometry(QRect(30, 60, 51, 31));
        TamanoLabel = new QLabel(frame);
        TamanoLabel->setObjectName(QStringLiteral("TamanoLabel"));
        TamanoLabel->setGeometry(QRect(20, 10, 111, 16));
        CalcularVentasButton = new QPushButton(VentasyBodegaTab);
        CalcularVentasButton->setObjectName(QStringLiteral("CalcularVentasButton"));
        CalcularVentasButton->setGeometry(QRect(230, 250, 121, 31));
        Ventas = new QLabel(VentasyBodegaTab);
        Ventas->setObjectName(QStringLiteral("Ventas"));
        Ventas->setGeometry(QRect(260, 290, 71, 21));
        SignoPesoLabel = new QLabel(VentasyBodegaTab);
        SignoPesoLabel->setObjectName(QStringLiteral("SignoPesoLabel"));
        SignoPesoLabel->setGeometry(QRect(250, 280, 21, 41));
        tabWidget->addTab(VentasyBodegaTab, QString());
        Admin->setCentralWidget(centralwidget);

        retranslateUi(Admin);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "Flipigas - Administrador", Q_NULLPTR));
        InfoGeneralLabel->setText(QApplication::translate("Admin", "Informaci\303\263n General", Q_NULLPTR));
        TiempoEntregaLabel->setText(QApplication::translate("Admin", "Tiempo estimado de entrega:", Q_NULLPTR));
        CantidadSolicitudesActLabel->setText(QApplication::translate("Admin", "Cantidad de solicitudes actuales:", Q_NULLPTR));
        CantidadSolicitudesAttLabel->setText(QApplication::translate("Admin", "Cantidad de solicitudes atendidas:", Q_NULLPTR));
        TiempoDisponibilidadCamionLabel->setText(QApplication::translate("Admin", "Tiempo de disponibilidad del siguiente cami\303\263n:", Q_NULLPTR));
        TiempoEntrega->setText(QApplication::translate("Admin", "0", Q_NULLPTR));
        CantidadSolicitudesAct->setText(QApplication::translate("Admin", "0", Q_NULLPTR));
        CantidadSolicitudesAtt->setText(QApplication::translate("Admin", "0", Q_NULLPTR));
        TiempoDisponibilidadCamion->setText(QApplication::translate("Admin", "0", Q_NULLPTR));
        minutosLabel1->setText(QApplication::translate("Admin", "minutos.", Q_NULLPTR));
        minutosLabel2->setText(QApplication::translate("Admin", "minutos.", Q_NULLPTR));
        VolverAdminButton->setText(QApplication::translate("Admin", "Volver al menu anterior", Q_NULLPTR));
        ActualizarButton->setText(QApplication::translate("Admin", "Actualizar", Q_NULLPTR));
        InfoGeneralIcon->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(InformacionTab), QApplication::translate("Admin", "Informacion", Q_NULLPTR));
        CamionesEnRepartoLabel->setText(QApplication::translate("Admin", "Camiones en reparto", Q_NULLPTR));
        CamionesEnRepartoIcon->setText(QString());
        ActualizarCamionesButton->setText(QApplication::translate("Admin", "Actualizar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(RepartidorTab), QApplication::translate("Admin", "Repartidor", Q_NULLPTR));
        InfoVentasyBodegaLabel->setText(QApplication::translate("Admin", "Informaci\303\263n de ventas y bodega", Q_NULLPTR));
        InfoventasIcon->setText(QString());
        VentasLabel->setText(QApplication::translate("Admin", "Ventas", Q_NULLPTR));
        ClasificarLabel->setText(QApplication::translate("Admin", "Clasificar por:", Q_NULLPTR));
        CerroLabel->setText(QApplication::translate("Admin", "Cerro:", Q_NULLPTR));
        CerroBox->clear();
        CerroBox->insertItems(0, QStringList()
         << QApplication::translate("Admin", "Escoja cerro...", Q_NULLPTR)
        );
        TipoLabel->setText(QApplication::translate("Admin", "Tipo:", Q_NULLPTR));
        CataliticoRadioButton->setText(QApplication::translate("Admin", "Catal\303\255tico", Q_NULLPTR));
        NoCataliticoRadioButton->setText(QApplication::translate("Admin", "No Catal\303\255tico", Q_NULLPTR));
        AmbosRadioButton->setText(QApplication::translate("Admin", "Ambos", Q_NULLPTR));
        BodegaLabel->setText(QApplication::translate("Admin", "Bodega", Q_NULLPTR));
        CilindrosRestantesLabel->setText(QApplication::translate("Admin", "Cilindros restantes:", Q_NULLPTR));
        CilindrosRestantes->setText(QApplication::translate("Admin", "100000", Q_NULLPTR));
        SolicitarReposicionButton->setText(QApplication::translate("Admin", "Solicitar Reposici\303\263n", Q_NULLPTR));
        CincoLTRadioButton->setText(QApplication::translate("Admin", "5", Q_NULLPTR));
        DiezLTRadioButton->setText(QApplication::translate("Admin", "10", Q_NULLPTR));
        QuinceLTRadioButton->setText(QApplication::translate("Admin", "15", Q_NULLPTR));
        TamanoLabel->setText(QApplication::translate("Admin", "Tama\303\261o (en litros):", Q_NULLPTR));
        CalcularVentasButton->setText(QApplication::translate("Admin", "Calcular ventas", Q_NULLPTR));
        Ventas->setText(QApplication::translate("Admin", "0", Q_NULLPTR));
        SignoPesoLabel->setText(QApplication::translate("Admin", "$", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(VentasyBodegaTab), QApplication::translate("Admin", "Ventas y Bodega", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
