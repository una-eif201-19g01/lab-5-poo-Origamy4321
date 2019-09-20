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



};


#endif //LAB_5_POO_ORIGAMY4321_SECRETARIA_H
