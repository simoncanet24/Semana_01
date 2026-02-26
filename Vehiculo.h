//
// Created by ESCINF on 26/02/2026.
//

#ifndef SEMANA_01_VEHICULO_H
#define SEMANA_01_VEHICULO_H
#include <string>
using namespace std;


class Vehiculo {

protected:

    string nombre;
    int placa;
    int ruedas;

public:

    Vehiculo();

    Vehiculo(string nombre, int placa, int ruedas);


};

#endif //SEMANA_01_VEHICULO_H