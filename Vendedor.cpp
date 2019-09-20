//
// Created by Lady Asura III on 13/9/2019.
//

#include "Vendedor.h"

Vendedor::Vendedor() {}

Vendedor::Vendedor(float comision, int ventas) : comision(comision), ventas(ventas) {}

float Vendedor::getComision() const {
    return comision;
}

void Vendedor::setComision(float comision) {
    Vendedor::comision = comision;
}

Vendedor::~Vendedor() {

}
