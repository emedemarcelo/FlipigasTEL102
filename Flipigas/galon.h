#ifndef GALON_H
#define GALON_H

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
    Galon(int, int);

    /*
    * @brief Destructor por defecto
    */
    ~Galon();

    /*
    * @brief Método que "setea" el precio de un galón en función de su peso.
    */
    void setPrice();

    /*
    * @brief Método que retorna el precio de un galón
    * @return Price Precio del galón
    */
    double getPrice();
private:
    int Weight;/**< Capacidad del galón. (5, 11, 15 y 45 [kg]). */
    double Price; /**< Precio del galón en función de su peso. */
    int Type; /**< Tipo de galón (True: Catalítico - False: No Catalítico). */
};



#endif // GALON_H
