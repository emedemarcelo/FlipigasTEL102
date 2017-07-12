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
	* @brief Constructor para una solicitud con todas sus características.
	* @param theName Nombre de quién solicita.
	* @param theDir Dirección de entrega.
	* @param qtyRequired Cantidad de galones solicitados.
	* @param telephoneNum Teléfono de quien solicita.
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
	std::string Direction; /**< Dirección de entrega de la solicitud */
	std::string telephoneNumber; /**< Teléfono de quien solicita. */
	std::string Cerro; /**< Cerro de entrega*/
	int qty; /**< Cantidad de galones requeridos */
	std::vector<Galon> galonsRequired; /**< Detalle de galones pedidos */
	int payMethod; /**< Método de pago  (1: Efectivo, 2: Redcompra, 3: T. Crédito, 4: Cheque) */
};