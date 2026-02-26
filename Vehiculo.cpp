//
// Created by ESCINF on 26/02/2026.
//

#include "Vehiculo.h"

Vehiculo::Vehiculo() {

    nombre = "";
    placa = 0;
    ruedas = 0;

};

Vehiculo::Vehiculo(string nombre, int placa, int ruedas) {
    this->nombre = nombre;
    this->placa = placa;
    this->ruedas = ruedas;
}

