#include "galon.h"

Galon::Galon() {
}

Galon::Galon(int theWeight, bool theType) {
    Weight = theWeight;
    Type = theType;
    setPrice();
}

Galon::~Galon() {
}

void Galon::setPrice() {
    switch (this->Weight) {
    case 5:
        Price = 7000;
        break;
    case 11:
        Price = 12000;
        break;
    case 15:
        Price = 17000;
        break;
    case 45:
        Price = 50000;
        break;
    default:
        Price = 0;
        break;
    }
}

double Galon::getPrice() {
    return Price;
}
