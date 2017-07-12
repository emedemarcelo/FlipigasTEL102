#pragma once

#include <vector>
#include <stdlib.h>
#include <time.h>
#include "Galon.h"

/*
* @brief Clase que modela el comportamiento de
*        un cami�n. 
*/

class Camion {
public:

	/*
	* @brief Constructor por defecto.
	*/
	Camion();

	/*
	* @brief Constructor para un determinado tipo de cami�n.
	* @param theType (int) El tipo de cami�n (1: A, 2: B, 3: C).
	* @param theCapacity (int) La capacidad del cami�n para llevar galones.
	*/
	Camion(int theType, int theCapacity);

	/*
	* @brief Destructor por defecto
	*/
	~Camion();
private:
	int id; /**< ID del cami�n */
	int type; /**< Tipo de cami�n */
	double capacity; /**< Capacidad del cami�n */
	std::vector<Galon> galons; /**< Vector con los galones disponibles en el cami�n */
};