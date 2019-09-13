//
// Created by Lady Asura III on 13/9/2019.
//

#ifndef LAB_5_POO_ORIGAMY4321_GERENTE_H
#define LAB_5_POO_ORIGAMY4321_GERENTE_H

#include <string>

using namespace std;
class Gerente {

private:
    float bonifiacion;

public:
    Gerente();

    Gerente(float bonifiacion);

    virtual ~Gerente();

    float getBonifiacion() const;

    void setBonifiacion(float bonifiacion);

    string toString();

};


#endif //LAB_5_POO_ORIGAMY4321_GERENTE_H
