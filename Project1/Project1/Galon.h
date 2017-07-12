#pragma once

/*
* @brief Clase que modela a un galón de gas.
*/

class Galon {
public:

	/*
	* @brief Constructor por defecto
	*/
	Galon();

	/*
	* @brief Constructor para un determinado tipo de galón
	* @param theWeight Peso del galón (int).
	*/
	Galon(int);

	/*
	* @brief Destructor por defecto
	*/
	~Galon();

	/*
	* @brief Método que "setea" el precio de un galón en función de su peso.
	*/
	void setPrice();
private:
	int Weight;/**< Capacidad del galón. (5, 11, 15 y 45 [kg]). */
	double Price; /**< Precio del galón en función de su peso. */
};