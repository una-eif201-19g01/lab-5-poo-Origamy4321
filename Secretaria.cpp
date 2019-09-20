//
// Created by Lady Asura III on 13/9/2019.
//

#include "Secretaria.h"

Secretaria::Secretaria() {}

Secretaria::Secretaria(const string &iD, int horasLab, int precioHoras, int annosLaborados) : Trabajador(iD, horasLab,
                                                                                                         precioHoras,
                                                                                                         annosLaborados) {}

float Secretaria::calcularSalarioBase(){
    return 0;
}

float Secretaria::calcularHorasExtra() {
    return 0;
}

float Secretaria::calcularAnualidads() {
    return 0;
}

float Secretaria::calcularSalarioBruto() {
    return 0;
}

float Secretaria::calcularCargas() {
    return 0;
}

float Secretaria::calcularSalarioNeto() {
    return 0;
}
