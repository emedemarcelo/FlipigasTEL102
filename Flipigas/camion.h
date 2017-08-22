#ifndef CAMION_H
#define CAMION_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "galon.h"

/*
* @brief Clase que modela el comportamiento de un camión.
*/

class Camion {
public:

    /*
    * @brief Constructor por defecto.
    */
    Camion();

    /*
    * @brief Constructor para un determinado tipo de camión.
    * @param theType (int) El tipo de camión (1: A (mayor capacidad), 2: B (media capacidad), 3: C (baja capacidad)).
    */
    Camion(int theType, std::vector <Galon> thegalons);

    /*
    * @brief Destructor por defecto
    */
    ~Camion();

    /*
    * @brief Método que asigna la capacidad (en galones) del camión en función de su tipo
    */
    void setCapacity(int);

    /*
    * @brief Método que retorna el último ID del inventario de camiones incrementado en una unidad.
    * @return ID El nuevo ID que tendrá el camión ingresado al sistema.
    */
    void setID();

private:
    int id; /**< ID del camión */
    int type; /**< Tipo de camión */
    double capacity; /**< Capacidad del camión en galones */
    std::vector<Galon> galons; /**< Vector con los galones disponibles en el camión */
    bool isDelivering; /**< Booleano indicando el estado de reparto del camión */
    int idSolicitud; /**< ID de la solicitud que está atendiendo */
    int timeToRefill; /**< Tiempo (en minutos) que tarda el camión en volver a la central */
    bool refill; /**< Booleando que indica si el camión necesita recarga */
};

#endif // CAMION_H
