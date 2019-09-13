//
// Created by Lady Asura III on 13/9/2019.
//

#include "Gerente.h"

Gerente::Gerente() {}

Gerente::Gerente(float bonifiacion) : bonifiacion(bonifiacion) {}

Gerente::~Gerente() {

}

float Gerente::getBonifiacion() const {
    return bonifiacion;
}

void Gerente::setBonifiacion(float bonifiacion) {
    Gerente::bonifiacion = bonifiacion;
}

std::string Gerente::toString(){


    return nullptr;
}
