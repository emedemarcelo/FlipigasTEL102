#include "Solicitud.h"

Solicitud::Solicitud() {
}

Solicitud::Solicitud(std::string theName, std::string theDir, int qtyRequired, std::string telephoneNum, std::vector<Galon> galonRequired, std::string cerro, int payOption) {
	Name = theName;
	Direction = theDir;
	qty = qtyRequired;
	telephoneNumber = telephoneNum;
	galonsRequired = galonRequired;
	Cerro = cerro;
	payMethod = payOption;
}

Solicitud::~Solicitud() {
}