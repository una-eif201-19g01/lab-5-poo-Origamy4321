//
// Created by Lady Asura III on 13/9/2019.
//
#include <iostream>
#include "Trabajador.h"
#include "Secretaria.h"
#include "Gerente.h"
#include "Vendedor.h"

int main(){



Secretaria secretaria("001", 59,10000, 4);

cout<<"los datos de secretaria son: "<< secretaria.toString()<<endl<<endl;

Vendedor vendedor1("002",50,5000,20,1500,20);

    cout<<"los datos del vendedor son: "<< vendedor1.toString()<<endl<<endl;


Gerente gerente1("003", 56, 3000,3,25000);


    cout<<"los datos del gerente son: "<< gerente1.toString()<<endl<<endl;


}