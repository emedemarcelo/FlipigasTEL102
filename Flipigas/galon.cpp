#include "galon.h"
#include <iostream>

Galon::Galon() {
}

Galon::Galon(int theWeight, int theType) {
    Weight = theWeight;
    Type = theType;
    setPrice();
    std::cout << "AÑADIDO GALON DE : " << theWeight << std::endl;
}

Galon::~Galon() {
}

void Galon::setPrice() {
    switch (this->Weight) {
    case 5:
        Price = 7000;
        break;
    case 10:
        Price = 12000;
        break;
    case 15:
        Price = 17000;
        break;
    default:
        Price = 0;
        break;
    }
}

double Galon::getPrice() {
    return Price;
}
