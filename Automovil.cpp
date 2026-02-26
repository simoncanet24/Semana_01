//
// Created by ESCINF on 26/02/2026.
//

#include "Automovil.h"

Automovil::Automovil() {
    marca = "";
    modelo = "";
    year = 0;
}
Automovil::Automovil(string marca, string modelo, int year) {
    this->marca = marca;
    this->modelo = modelo;
    this->year = year;
}
