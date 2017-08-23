/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *Button_MainFrame;
    QRadioButton *user_radioButton;
    QRadioButton *repartidor_radioButton;
    QRadioButton *admin_radioButton;
    QLabel *Enter_MainFrame;
    QPushButton *EntrarButton;
    QLabel *FlipigasImage;
    QLabel *Bienvenida_text;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(455, 388);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Button_MainFrame = new QFrame(centralWidget);
        Button_MainFrame->setObjectName(QStringLiteral("Button_MainFrame"));
        Button_MainFrame->setGeometry(QRect(60, 200, 201, 141));
        Button_MainFrame->setFrameShape(QFrame::StyledPanel);
        Button_MainFrame->setFrameShadow(QFrame::Raised);
        user_radioButton = new QRadioButton(Button_MainFrame);
        user_radioButton->setObjectName(QStringLiteral("user_radioButton"));
        user_radioButton->setGeometry(QRect(20, 50, 84, 19));
        repartidor_radioButton = new QRadioButton(Button_MainFrame);
        repartidor_radioButton->setObjectName(QStringLiteral("repartidor_radioButton"));
        repartidor_radioButton->setGeometry(QRect(20, 80, 101, 19));
        admin_radioButton = new QRadioButton(Button_MainFrame);
        admin_radioButton->setObjectName(QStringLiteral("admin_radioButton"));
        admin_radioButton->setGeometry(QRect(20, 110, 84, 19));
        Enter_MainFrame = new QLabel(Button_MainFrame);
        Enter_MainFrame->setObjectName(QStringLiteral("Enter_MainFrame"));
        Enter_MainFrame->setGeometry(QRect(20, 10, 111, 31));
        QFont font;
        font.setPointSize(11);
        Enter_MainFrame->setFont(font);
        EntrarButton = new QPushButton(centralWidget);
        EntrarButton->setObjectName(QStringLiteral("EntrarButton"));
        EntrarButton->setGeometry(QRect(290, 240, 111, 51));
        FlipigasImage = new QLabel(centralWidget);
        FlipigasImage->setObjectName(QStringLiteral("FlipigasImage"));
        FlipigasImage->setGeometry(QRect(80, 40, 81, 121));
        FlipigasImage->setAutoFillBackground(false);
        FlipigasImage->setPixmap(QPixmap(QString::fromUtf8("Imgs/gas-flame-logo.png")));
        FlipigasImage->setScaledContents(true);
        FlipigasImage->setWordWrap(false);
        Bienvenida_text = new QLabel(centralWidget);
        Bienvenida_text->setObjectName(QStringLiteral("Bienvenida_text"));
        Bienvenida_text->setGeometry(QRect(180, 60, 261, 101));
        QFont font1;
        font1.setPointSize(16);
        Bienvenida_text->setFont(font1);
        Bienvenida_text->setAutoFillBackground(false);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Flipigas", Q_NULLPTR));
        user_radioButton->setText(QApplication::translate("MainWindow", "Solicitud", Q_NULLPTR));
        repartidor_radioButton->setText(QApplication::translate("MainWindow", "Repartidor", Q_NULLPTR));
        admin_radioButton->setText(QApplication::translate("MainWindow", "Admin", Q_NULLPTR));
        Enter_MainFrame->setText(QApplication::translate("MainWindow", "Entrar como:", Q_NULLPTR));
        EntrarButton->setText(QApplication::translate("MainWindow", "Entrar", Q_NULLPTR));
        FlipigasImage->setText(QString());
        Bienvenida_text->setText(QApplication::translate("MainWindow", "\302\241Bienvenido a Flipigas!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
