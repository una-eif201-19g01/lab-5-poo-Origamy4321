//
// Created by Lady Asura III on 13/9/2019.
//

#include "Gerente.h"


Gerente::Gerente() {}

Gerente::Gerente(const string &iD, int horasLab, int precioHoras, int annosLaborados, float bonificacion):Trabajador(iD, horasLab,
        precioHoras,annosLaborados), bonificacion(bonificacion) {}

float Gerente::calcularSalarioBruto() {

    return calcularHorasExtra()+calcularAnualidads()+calcularSalarioBase()+bonificacion;
}


