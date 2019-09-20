//
// Created by Lady Asura III on 13/9/2019.
//

#ifndef LAB_5_POO_ORIGAMY4321_SECRETARIA_H
#define LAB_5_POO_ORIGAMY4321_SECRETARIA_H

#include <iostream>

#include "Trabajador.h"
class Trabajador;
using namespace std;
class Secretaria: public Trabajador {

public:

    Secretaria();

    Secretaria(const string &iD, int horasLab, int precioHoras, int annosLaborados);

    virtual float calcularSalarioBase()=0;

    virtual float calcularHorasExtra()=0;

    virtual float calcularAnualidads()=0;

    virtual float calcularSalarioBruto()=0;

    virtual float calcularCargas()=0;

    virtual float calcularSalarioNeto()=0;


};


#endif //LAB_5_POO_ORIGAMY4321_SECRETARIA_H
