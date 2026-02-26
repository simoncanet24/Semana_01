//
// Created by ESCINF on 26/02/2026.
//

#ifndef SEMANA_01_AUTOMOVIL_H
#define SEMANA_01_AUTOMOVIL_H
#include <string>
#include "Vehiculo.h"
using namespace std;


class Automovil : protected Vehiculo {

protected:

    string marca;
    string modelo;
    int year;

public:

    Automovil();
    Automovil(string marca, string modelo, int year);

};

#endif