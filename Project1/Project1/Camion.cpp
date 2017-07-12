#include "Camion.h"

Camion::Camion() {
}

Camion::Camion(int theType, int theCapacity) {
	id = rand() % 1000;
	type = theType;
	capacity = theCapacity;
}

Camion::~Camion() {
}