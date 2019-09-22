//
// Created by Lady Asura III on 13/9/2019.
//

#include "Vendedor.h"

Vendedor::Vendedor() {

}

Vendedor::Vendedor(const string &iD, int horasLab, int precioHoras, int annosLaborados, int comision, int ventas)
        : Trabajador(iD, horasLab, precioHoras, annosLaborados), comision(comision), ventas(ventas) {

}

float Vendedor::getComision() const {
    return comision;
}

void Vendedor::setComision(float comision) {
    Vendedor::comision = comision;
}

int Vendedor::getVentas() const {
    return ventas;
}

void Vendedor::setVentas(int ventas) {
    Vendedor::ventas = ventas;
}

Vendedor::~Vendedor() {

}

float Vendedor::calculoComision() {

    float comision_minima = 5000;
    if (getVentas() <= 0)
        return 0;
    else
        return comision_minima * getVentas();

}

float Vendedor::calcularSalarioBruto() {

    return calcularSalarioBase()+calcularAnualidads()+calcularHorasExtra()+calculoComision();
}




