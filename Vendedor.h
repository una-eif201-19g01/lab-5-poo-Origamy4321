//
// Created by Lady Asura III on 13/9/2019.
//

#ifndef LAB_5_POO_ORIGAMY4321_VENDEDOR_H
#define LAB_5_POO_ORIGAMY4321_VENDEDOR_H


class Vendedor {

private:
    float comision;
    int ventas;

public:

    Vendedor();

    Vendedor(float comision, int ventas);

    float getComision() const;

    void setComision(float comision);

    virtual ~Vendedor();
};


#endif //LAB_5_POO_ORIGAMY4321_VENDEDOR_H
