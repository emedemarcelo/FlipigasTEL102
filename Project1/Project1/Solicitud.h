#pragma once

#include <string>
#include <vector>
#include "Galon.h"

/*
* @brief Clase que modela una solicitud de gas.
*/

class Solicitud {
public:

	/*
	* @brief Constructor por defecto.
	*/
	Solicitud();

	/*
	* @brief Constructor para una solicitud con todas sus caracter�sticas.
	* @param theName Nombre de qui�n solicita.
	* @param theDir Direcci�n de entrega.
	* @param qtyRequired Cantidad de galones solicitados.
	* @param telephoneNum Tel�fono de quien solicita.
	* @param galonRequired Vector con los galones solicitados
	* @param cerro El cerro de destino
	* @param payOption Medio de pago de la solicitud.
	*/
	Solicitud(std::string theName, std::string theDir, int qtyRequired, std::string telephoneNum, std::vector<Galon> galonRequired, std::string cerro, int payOption);

	/*
	* @brief Destructor por defecto.
	*/
	~Solicitud();

private:
	std::string Name; /**< Nombre de quien solicita. */
	std::string Direction; /**< Direcci�n de entrega de la solicitud */
	std::string telephoneNumber; /**< Tel�fono de quien solicita. */
	std::string Cerro; /**< Cerro de entrega*/
	int qty; /**< Cantidad de galones requeridos */
	std::vector<Galon> galonsRequired; /**< Detalle de galones pedidos */
	int payMethod; /**< M�todo de pago  (1: Efectivo, 2: Redcompra, 3: T. Cr�dito, 4: Cheque) */
};