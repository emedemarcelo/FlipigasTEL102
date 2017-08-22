#include "camion.h"

/*
* @brief Función que convierte un char (número) a un entero ocupando la conversión ASCII
* @param theChar Carácter a convertir
* @return theNum Número convertido
*/

int charToInt(const char theChar) {
    int theNum = theChar - '0';
    return theNum;
}

Camion::Camion() {
}

Camion::Camion(int theType, std::vector<Galon> thegalons) {
    setID();
    type = theType;
    setCapacity(type);
    isDelivering = true;
    idSolicitud = 0;
    timeToRefill = 0;
    refill = false;
    galons = thegalons;
}

Camion::~Camion() {
}

void Camion::setID() {
    int lastID = 0;
    std::string theLine;
    std::ifstream theFile("Camiones.csv");
    if (theFile.is_open()) {
        while (getline(theFile, theLine)) {
            lastID = charToInt(theLine[0]) + 1;
        }
    }
    else {
        std::cout << "Unable to open file!" << std::endl;
    }
    theFile.close();
    id = lastID;
}

void Camion::setCapacity(int theType) {
    switch (theType) {
    case 1:
        capacity = 100;
        break;
    case 2:
        capacity = 75;
        break;
    case 3:
        capacity = 50;
        break;
    default:
        capacity = 0;
        break;
    }
}
