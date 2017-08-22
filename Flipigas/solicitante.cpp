#include "solicitante.h"
#include "ui_solicitante.h"
#include <string>
#include <sstream>

Solicitante::Solicitante(QWidget *parent): QMainWindow(parent), ui(new Ui::Solicitante) {
    ui->setupUi(this);
    name = "José Luis Gallardo Parancán";

    //logic for updating the Cerros in solicitud view
    QStringList listCerros;
    listCerros << "Selecione Cerro";
    std::fstream fileCerros;
    std::string lineReading;
    std::string theHill;
    fileCerros.open("cerros.csv");
    if (fileCerros.is_open()){
        while(!fileCerros.eof()){
            getline(fileCerros, lineReading); //read the entire line, and store it in lineReading String
            theHill = lineReading.substr(0, lineReading.find(','));
            const char* c = theHill.c_str();
            listCerros << c;
        }
    }
    else{
        std::cout << "file could not be opened" << std::endl;
    }
    fileCerros.close();
    ui->SectorBox->addItems(listCerros);
    // END LOGIC CERROS

    // Logic for updating the Payment Methods
    QStringList payMethods;
    payMethods << "Seleccione metodo pago";
    std::string methods[] = {"Efectivo", "Cheque al dia", "Tarjeta de Debito", "Tarjeta de Credito"};
    for (unsigned int i = 0; i < (sizeof(methods)/sizeof(methods[0])); i++){
        const char* c = methods[i].c_str();
        payMethods << c;
    }
    ui->MediodePagoBox->addItems(payMethods);
    // END LOGIC PAYMENT METHODS

    // Logic for assign solicitud ID

    // END ID ASSIGNMENT LOGIC
    std::cout << "Solicitud ID: " << ID << std::endl;
}

Solicitante::~Solicitante() {
    delete ui;
}

void Solicitante::on_CantCIlindrosBox_valueChanged(int arg1) {
    int actual = ui->TablaPedidos->rowCount();
    if (arg1 > actual){
        ui->TablaPedidos->insertRow(actual);

        QComboBox* comboBoxTipo = new QComboBox();
        QStringList types;
        types << "Catalitico" << "No Catalitico";
        comboBoxTipo->addItems(types);

        QComboBox* comboBoxPeso = new QComboBox();
        QStringList weights;
        weights << "5" << "10" << "15" ;
        comboBoxPeso->addItems(weights);

        ui->TablaPedidos->setCellWidget(actual, 0, comboBoxTipo);
        ui->TablaPedidos->setCellWidget(actual, 1, comboBoxPeso);
    }
    else{
        ui->TablaPedidos->removeRow(arg1);
    }
    cantGalones = arg1;
}

void Solicitante::on_IngresarSolicitudButton_clicked() {
    // Logic for form information extraction
    std::string name = ui->lineEditNombre->text().toUtf8().constData();
    std::string direction = ui->lineEditDireccion->text().toUtf8().constData();
    std::string telephone = ui->lineEditTelefono->text().toUtf8().constData();
    std::string cerroDestiny = ui->SectorBox->currentText().toUtf8().constData();
    std::string payMethod = ui->MediodePagoBox->currentText().toUtf8().constData();
    std::string timeToDeliver = ui->TIempoEntregaBox->text().toUtf8().constData();
    int deliverTime = atoi(timeToDeliver.c_str());

    std::ofstream theFile;
    //theFile.open("solicitudes.csv", std::ios::app); // Open file in append mode
    theFile.open(cerroDestiny+".csv", std::ios::app);

    double totalPrice = 0;

    if(name != "" && cerroDestiny != "Selecione Cerro" && payMethod != "Seleccione metodo pago"){
        for (int i = 0; i < cantGalones; i++){

            QComboBox* type = qobject_cast<QComboBox*>(ui->TablaPedidos->cellWidget(i, 0));
            QComboBox* weight = qobject_cast<QComboBox*>(ui->TablaPedidos->cellWidget(i, 1));

            int theType = type->currentIndex();
            std::string typeGalon = std::to_string(theType);

            std::string theWeight = weight->currentText().toUtf8().constData();
            int realWeight = atoi(theWeight.c_str());

            Galon* theGalon = new Galon(realWeight, theType);
            totalPrice = totalPrice + theGalon->getPrice();

            // Here we convert a double to string (because galonPrice in double and we need it in string type to write in the db
            std::ostringstream galonPriceConvert;
            galonPriceConvert << theGalon->getPrice();
            std::string galonPrice = galonPriceConvert.str();

            std::cout << cerroDestiny << "," << typeGalon << "," << theWeight << "," << galonPrice << std::endl;
            theFile << cerroDestiny << "," << typeGalon << "," << theWeight << "," << galonPrice << std::endl;

            delete theGalon;
        }
        theFile.close();

        QMessageBox msg;
        msg.setWindowTitle("Pedido ingresado!");
        msg.setText("Solicitud ingresada correctamente!\n Total a pagar: $"
                    + QString::number(totalPrice)
                    + "\n Tiempo de espera aproximado: "+QString::number(deliverTime)
                    +" minutos!");
        msg.exec();
    }
    // If the user has not typed well the fields or they are empty
    else{
        QMessageBox error;
        error.setText("Por favor, rellene todos los campos");
        error.setWindowTitle("Error");
        error.exec();
    }

    ui->lineEditNombre->clear();
    ui->lineEditDireccion->clear();
    ui->lineEditTelefono->clear();
    ui->SectorBox->setCurrentIndex(0);
    ui->MediodePagoBox->setCurrentIndex(0);
    ui->TIempoEntregaBox->clear();

    for(int filas = ui->TablaPedidos->rowCount(); filas >=0; filas--){
        ui->TablaPedidos->removeRow(filas);
    }

    std::cout << "Before exit! " << std::endl;

}

void Solicitante::on_VolverSolicitudButton_clicked()
{
    this->hide();
    QWidget *pariente= this->parentWidget();
    pariente->show();
}
