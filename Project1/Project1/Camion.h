#pragma once

#include <vector>
#include <stdlib.h>
#include <time.h>
#include "Galon.h"

/*
* @brief Clase que modela el comportamiento de
*        un camión. 
*/

class Camion {
public:

	/*
	* @brief Constructor por defecto.
	*/
	Camion();

	/*
	* @brief Constructor para un determinado tipo de camión.
	* @param theType (int) El tipo de camión (1: A, 2: B, 3: C).
	* @param theCapacity (int) La capacidad del camión para llevar galones.
	*/
	Camion(int theType, int theCapacity);

	/*
	* @brief Destructor por defecto
	*/
	~Camion();
private:
	int id; /**< ID del camión */
	int type; /**< Tipo de camión */
	double capacity; /**< Capacidad del camión */
	std::vector<Galon> galons; /**< Vector con los galones disponibles en el camión */
};