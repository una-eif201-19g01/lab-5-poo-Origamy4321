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


public:
    Gerente();


    Gerente(const string &iD, int horasLab, int precioHoras, int annosLaborados, float bonificacion);

    virtual ~Gerente();

    float getBonifiacion() const;

    void setBonifiacion(float bonifiacion);

    string toString();

    float calcularSalarioBase() override;

    float calcularHorasExtra() override;

    float calcularAnualidads() override;

    float calcularSalarioBruto() override;

    float calcularCargas() override;

    float calcularSalarioNeto() override;

private:

    float bonificacion;

};


#endif //LAB_5_POO_ORIGAMY4321_GERENTE_H
