/********************************************************************************
** Form generated from reading UI file 'solicitante.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLICITANTE_H
#define UI_SOLICITANTE_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Solicitante
{
public:
    QWidget *centralwidget;
    QFrame *NumeroyCIlindrosFrame;
    QLabel *NombreLabel;
    QLabel *CantCilindrosLabel;
    QSpinBox *CantCIlindrosBox;
    QLineEdit *lineEditNombre;
    QFrame *DatosSolicitante;
    QLabel *DireccionLabel;
    QLabel *TelefonoLabel;
    QLabel *SectorLabel;
    QLabel *MediodePagoLabel;
    QLabel *TiempoEntregaLabel;
    QComboBox *SectorBox;
    QComboBox *MediodePagoBox;
    QLineEdit *TIempoEntregaBox;
    QLabel *MinutosLabel;
    QPushButton *IngresarSolicitudButton;
    QLineEdit *lineEditDireccion;
    QLineEdit *lineEditTelefono;
    QPushButton *VolverSolicitudButton;
    QFrame *TableFrame;
    QLabel *TablaLabel;
    QTableWidget *TablaPedidos;
    QLabel *TotalLabel;
    QLabel *Total;

    void setupUi(QMainWindow *Solicitante)
    {
        if (Solicitante->objectName().isEmpty())
            Solicitante->setObjectName(QStringLiteral("Solicitante"));
        Solicitante->resize(939, 471);
        centralwidget = new QWidget(Solicitante);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        NumeroyCIlindrosFrame = new QFrame(centralwidget);
        NumeroyCIlindrosFrame->setObjectName(QStringLiteral("NumeroyCIlindrosFrame"));
        NumeroyCIlindrosFrame->setGeometry(QRect(30, 30, 501, 61));
        NumeroyCIlindrosFrame->setFrameShape(QFrame::StyledPanel);
        NumeroyCIlindrosFrame->setFrameShadow(QFrame::Raised);
        NombreLabel = new QLabel(NumeroyCIlindrosFrame);
        NombreLabel->setObjectName(QStringLiteral("NombreLabel"));
        NombreLabel->setGeometry(QRect(30, 10, 58, 14));
        CantCilindrosLabel = new QLabel(NumeroyCIlindrosFrame);
        CantCilindrosLabel->setObjectName(QStringLiteral("CantCilindrosLabel"));
        CantCilindrosLabel->setGeometry(QRect(30, 30, 221, 16));
        CantCIlindrosBox = new QSpinBox(NumeroyCIlindrosFrame);
        CantCIlindrosBox->setObjectName(QStringLiteral("CantCIlindrosBox"));
        CantCIlindrosBox->setGeometry(QRect(260, 30, 44, 22));
        lineEditNombre = new QLineEdit(NumeroyCIlindrosFrame);
        lineEditNombre->setObjectName(QStringLiteral("lineEditNombre"));
        lineEditNombre->setGeometry(QRect(90, 6, 311, 20));
        DatosSolicitante = new QFrame(centralwidget);
        DatosSolicitante->setObjectName(QStringLiteral("DatosSolicitante"));
        DatosSolicitante->setGeometry(QRect(550, 30, 371, 421));
        DatosSolicitante->setFrameShape(QFrame::StyledPanel);
        DatosSolicitante->setFrameShadow(QFrame::Raised);
        DireccionLabel = new QLabel(DatosSolicitante);
        DireccionLabel->setObjectName(QStringLiteral("DireccionLabel"));
        DireccionLabel->setGeometry(QRect(20, 20, 81, 16));
        TelefonoLabel = new QLabel(DatosSolicitante);
        TelefonoLabel->setObjectName(QStringLiteral("TelefonoLabel"));
        TelefonoLabel->setGeometry(QRect(20, 50, 81, 16));
        SectorLabel = new QLabel(DatosSolicitante);
        SectorLabel->setObjectName(QStringLiteral("SectorLabel"));
        SectorLabel->setGeometry(QRect(20, 110, 131, 16));
        MediodePagoLabel = new QLabel(DatosSolicitante);
        MediodePagoLabel->setObjectName(QStringLiteral("MediodePagoLabel"));
        MediodePagoLabel->setGeometry(QRect(20, 150, 141, 16));
        TiempoEntregaLabel = new QLabel(DatosSolicitante);
        TiempoEntregaLabel->setObjectName(QStringLiteral("TiempoEntregaLabel"));
        TiempoEntregaLabel->setGeometry(QRect(20, 190, 151, 16));
        SectorBox = new QComboBox(DatosSolicitante);
        SectorBox->setObjectName(QStringLiteral("SectorBox"));
        SectorBox->setGeometry(QRect(170, 110, 171, 22));
        MediodePagoBox = new QComboBox(DatosSolicitante);
        MediodePagoBox->setObjectName(QStringLiteral("MediodePagoBox"));
        MediodePagoBox->setGeometry(QRect(170, 150, 171, 22));
        TIempoEntregaBox = new QLineEdit(DatosSolicitante);
        TIempoEntregaBox->setObjectName(QStringLiteral("TIempoEntregaBox"));
        TIempoEntregaBox->setGeometry(QRect(170, 190, 61, 22));
        MinutosLabel = new QLabel(DatosSolicitante);
        MinutosLabel->setObjectName(QStringLiteral("MinutosLabel"));
        MinutosLabel->setGeometry(QRect(250, 190, 58, 14));
        IngresarSolicitudButton = new QPushButton(DatosSolicitante);
        IngresarSolicitudButton->setObjectName(QStringLiteral("IngresarSolicitudButton"));
        IngresarSolicitudButton->setGeometry(QRect(110, 270, 151, 71));
        lineEditDireccion = new QLineEdit(DatosSolicitante);
        lineEditDireccion->setObjectName(QStringLiteral("lineEditDireccion"));
        lineEditDireccion->setGeometry(QRect(90, 16, 241, 20));
        lineEditTelefono = new QLineEdit(DatosSolicitante);
        lineEditTelefono->setObjectName(QStringLiteral("lineEditTelefono"));
        lineEditTelefono->setGeometry(QRect(90, 50, 231, 21));
        VolverSolicitudButton = new QPushButton(DatosSolicitante);
        VolverSolicitudButton->setObjectName(QStringLiteral("VolverSolicitudButton"));
        VolverSolicitudButton->setGeometry(QRect(110, 360, 151, 41));
        TableFrame = new QFrame(centralwidget);
        TableFrame->setObjectName(QStringLiteral("TableFrame"));
        TableFrame->setGeometry(QRect(30, 100, 501, 351));
        TableFrame->setFrameShape(QFrame::StyledPanel);
        TableFrame->setFrameShadow(QFrame::Raised);
        TablaLabel = new QLabel(TableFrame);
        TablaLabel->setObjectName(QStringLiteral("TablaLabel"));
        TablaLabel->setGeometry(QRect(30, 10, 441, 16));
        TablaPedidos = new QTableWidget(TableFrame);
        if (TablaPedidos->columnCount() < 3)
            TablaPedidos->setColumnCount(3);
        TablaPedidos->setObjectName(QStringLiteral("TablaPedidos"));
        TablaPedidos->setGeometry(QRect(10, 30, 461, 271));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TablaPedidos->sizePolicy().hasHeightForWidth());
        TablaPedidos->setSizePolicy(sizePolicy);
        TablaPedidos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TablaPedidos->setAlternatingRowColors(true);
        TablaPedidos->setSelectionMode(QAbstractItemView::NoSelection);
        TablaPedidos->setShowGrid(false);
        TablaPedidos->setWordWrap(false);
        TablaPedidos->setCornerButtonEnabled(false);
        TablaPedidos->setRowCount(0);
        TablaPedidos->setColumnCount(3);
        TotalLabel = new QLabel(TableFrame);
        TotalLabel->setObjectName(QStringLiteral("TotalLabel"));
        TotalLabel->setGeometry(QRect(260, 310, 58, 14));
        Total = new QLabel(TableFrame);
        Total->setObjectName(QStringLiteral("Total"));
        Total->setGeometry(QRect(310, 310, 141, 16));
        Solicitante->setCentralWidget(centralwidget);

        retranslateUi(Solicitante);

        QMetaObject::connectSlotsByName(Solicitante);
    } // setupUi

    void retranslateUi(QMainWindow *Solicitante)
    {
        Solicitante->setWindowTitle(QApplication::translate("Solicitante", "Flipigas - Solicitante", Q_NULLPTR));
        NombreLabel->setText(QApplication::translate("Solicitante", "Nombre:", Q_NULLPTR));
        CantCilindrosLabel->setText(QApplication::translate("Solicitante", "Cantidad de cilindros solicitados:", Q_NULLPTR));
        DireccionLabel->setText(QApplication::translate("Solicitante", "Direcci\303\263n:", Q_NULLPTR));
        TelefonoLabel->setText(QApplication::translate("Solicitante", "Tel\303\251fono:", Q_NULLPTR));
        SectorLabel->setText(QApplication::translate("Solicitante", "Sector que solicita:", Q_NULLPTR));
        MediodePagoLabel->setText(QApplication::translate("Solicitante", "Medio de pago:", Q_NULLPTR));
        TiempoEntregaLabel->setText(QApplication::translate("Solicitante", "TIempo de entrega:", Q_NULLPTR));
        MinutosLabel->setText(QApplication::translate("Solicitante", "minutos.", Q_NULLPTR));
        IngresarSolicitudButton->setText(QApplication::translate("Solicitante", "Procesar Solicitud", Q_NULLPTR));
        VolverSolicitudButton->setText(QApplication::translate("Solicitante", "Volver al menu principal", Q_NULLPTR));
        TablaLabel->setText(QApplication::translate("Solicitante", "Complete la tabla con la informaci\303\263n del pedido:", Q_NULLPTR));
        TotalLabel->setText(QApplication::translate("Solicitante", "Total:", Q_NULLPTR));
        Total->setText(QApplication::translate("Solicitante", "NUMERO_TOTAL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Solicitante: public Ui_Solicitante {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLICITANTE_H
