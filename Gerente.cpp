//
// Created by Lady Asura III on 13/9/2019.
//

#include "Gerente.h"

Gerente::Gerente() {}

Gerente::~Gerente() {

}

float Gerente::getBonifiacion() const {
    return bonificacion;
}

void Gerente::setBonifiacion(float bonifiacion) {
    bonifiacion = bonifiacion;
}

std::string Gerente::toString(){
    return nullptr;
}

float Gerente::calcularSalarioBase() {
    return 0;
}

float Gerente::calcularHorasExtra() {
    return 0;
}

float Gerente::calcularAnualidads() {
    return 0;
}

float Gerente::calcularSalarioBruto() {
    return 0;
}

float Gerente::calcularCargas() {
    return 0;
}

float Gerente::calcularSalarioNeto() {
    return 0;
}

Gerente::Gerente(const string &iD, int horasLab, int precioHoras, int annosLaborados, float bonificacion) : Trabajador(iD, horasLab,
                                                                                                   precioHoras,
                                                                                                   annosLaborados), bonificacion(bonificacion) {

}



