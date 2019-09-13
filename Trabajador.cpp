//
// Created by Lady Asura III on 13/9/2019.
//

#include "Trabajador.h"

Trabajador::Trabajador(const string &iD, int horasLab, int precioHoras, int annosLaborados) : iD(iD),
                                                                                              horasLab(horasLab),
                                                                                              precioHoras(precioHoras),
                                                                                              annosLaborados(
                                                                                                      annosLaborados) {}

Trabajador::Trabajador() {}

const string &Trabajador::getId() const {
    return iD;
}

void Trabajador::setId(const string &iD) {
    Trabajador::iD = iD;
}

int Trabajador::getHorasLab() const {
    return horasLab;
}

void Trabajador::setHorasLab(int horasLab) {
    Trabajador::horasLab = horasLab;
}

int Trabajador::getPrecioHoras() const {
    return precioHoras;
}

void Trabajador::setPrecioHoras(int precioHoras) {
    Trabajador::precioHoras = precioHoras;
}

int Trabajador::getAnnosLaborados() const {
    return annosLaborados;
}

void Trabajador::setAnnosLaborados(int annosLaborados) {
    Trabajador::annosLaborados = annosLaborados;
}
//*********************************METODOS DE CALCULO*************************************************//

float Trabajador::calcularSalarioBase() {

    int suma = 0;
    if (horasLab = 48)
        for (int i = 1; i < 48; i++) {

            suma += precioHoras;
        }
    return suma;
}

float Trabajador::calcularHorasExtra(int extra) {

    int suma = 0;
    int precioHorasExtras = precioHoras * 0.50;
    if (extra < 0) {
        for (int i = 0; i < extra; i++) {

            suma += precioHorasExtras;
        }
        return suma;
    }
}

float Trabajador::calcularAnualidads() {

    int suma = 0;
    int anualidad = calcularSalarioBase() * 0.05;
    if (annosLaborados < 0)
        for (int i = 0; i < annosLaborados; i++) {

            suma += calcularSalarioBase();
        }


    return suma;
}

float Trabajador::calcularSalarioBruto(int extra) {

    int suma = 0;
    suma = calcularSalarioBase() + calcularAnualidads() + calcularHorasExtra(extra);


    return suma;
}

float Trabajador::calcularCargas() {

    int cargas = 0;


    return 0;
}

float Trabajador::calcularSalarioNeto() {
    return 0;
}
