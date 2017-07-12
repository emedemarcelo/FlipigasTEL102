#pragma once

/*
* @brief Clase que modela a un gal�n de gas.
*/

class Galon {
public:

	/*
	* @brief Constructor por defecto
	*/
	Galon();

	/*
	* @brief Constructor para un determinado tipo de gal�n
	* @param theWeight Peso del gal�n (int).
	*/
	Galon(int);

	/*
	* @brief Destructor por defecto
	*/
	~Galon();

	/*
	* @brief M�todo que "setea" el precio de un gal�n en funci�n de su peso.
	*/
	void setPrice();
private:
	int Weight;/**< Capacidad del gal�n. (5, 11, 15 y 45 [kg]). */
	double Price; /**< Precio del gal�n en funci�n de su peso. */
};