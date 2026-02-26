
#include <iostream>
using namespace std;

class Vehiculo {

    protected:

    string nombre;
    int placa;
    int ruedas;

    public:

    Vehiculo() {

        nombre = "";
        placa = 0;
        ruedas = 0;

    };

    Vehiculo(string nombre, int placa, int ruedas) {
        this->nombre = nombre;
        this->placa = placa;
        this->ruedas = ruedas;
    }


};

class Automovil {

    protected:

    string marca;
    string modelo;
    int year;

    public:

    Automovil() {
        marca = "";
        modelo = "";
        year = 0;
    }
    Automovil(string marca, string modelo, int year) {
        this->marca = marca;
        this->modelo = modelo;
        this->year = year;
    }


};

int main() {


    Automovil MiAuto;
    Vehiculo* MiVehiculo = &MiAuto;

    return 0;
}