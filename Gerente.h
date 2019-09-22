//
// Created by Lady Asura III on 13/9/2019.
//

#ifndef LAB_5_POO_ORIGAMY4321_GERENTE_H
#define LAB_5_POO_ORIGAMY4321_GERENTE_H

#include <string>
#include "Trabajador.h"
class Trabajador;
using namespace std;
class Gerente: public Trabajador {

private:

    float bonificacion;

public:
    Gerente();

    Gerente(const string &iD, int horasLab, int precioHoras, int annosLaborados, float bonificacion);

    float calcularSalarioBruto() override;

};


#endif //LAB_5_POO_ORIGAMY4321_GERENTE_H
