//
// Created by Lady Asura III on 13/9/2019.
//

#include "Trabajador.h"

Trabajador::Trabajador(const string &iD, int horasLab, int precioHoras, int annosLaborados) : iD(iD),
                                                                                              horasLab(horasLab),
                                                                                              precioHoras(precioHoras),
                                                                                              annosLaborados(
                                                                                                      annosLaborados) {}

Trabajador::Trabajador() : iD(""), horasLab(0), precioHoras(0), annosLaborados(0) {}

const string &Trabajador::getId() const {
    return iD;
}

void Trabajador::setId(const string &iD) {
    Trabajador::iD = iD;
}

int Trabajador::getHorasLab() const {
    return horasLab;
}

void Trabajador::setHorasLab(int horasLab) {
    Trabajador::horasLab = horasLab;
}

int Trabajador::getPrecioHoras() const {
    return precioHoras;
}

void Trabajador::setPrecioHoras(int precioHoras) {
    Trabajador::precioHoras = precioHoras;
}

int Trabajador::getAnnosLaborados() const {
    return annosLaborados;
}

void Trabajador::setAnnosLaborados(int annosLaborados) {
    Trabajador::annosLaborados = annosLaborados;
}
//*********************************METODOS DE CALCULO*************************************************//

float Trabajador::calcularSalarioBase() {

    int extra = 0;
    int suma = 0;
    if (horasLab = 48)
        for (int i = 1; i < 48; i++) {

            suma += precioHoras;
        }
    return suma;
}

float Trabajador::calcularHorasExtra() {
    int suma = 0;
    int precioHorasExtras=0;
    int extra = horasLab - 48;
    if (extra <= 0)
        return 0;
    else
    precioHorasExtras = precioHoras * 0.50;
    if (extra < 0)
        for (int i = 0; i < extra; i++) {

            suma += precioHorasExtras;}

            return suma;


}
float Trabajador::calcularAnualidads() {

    int suma = 0;
    int anualidad = calcularSalarioBase() * 0.05;
    if (annosLaborados < 0)
        for (int i = 0; i < annosLaborados; i++) {

            suma = suma + calcularSalarioBase();
        }

    return suma;
}

float Trabajador::calcularSalarioBruto() {

    int suma = 0;
    suma = calcularSalarioBase() + calcularAnualidads() + calcularHorasExtra();


    return suma;
}

float Trabajador::calcularCargas() {

    int nuevoSalario = calcularSalarioBruto();
    nuevoSalario * 0.09;



    return nuevoSalario;
}

float Trabajador::calcularSalarioNeto() {

    int salarioReal;

    salarioReal=calcularSalarioBruto()-calcularCargas();

    return salarioReal;
}

string Trabajador::toString() {
    string z;
    z = +"identifación: " + getId() + "\n" + "el salario base es: " + to_string(calcularSalarioBase()) + "\n" +
        "las horas extras son de: " + to_string(calcularHorasExtra()) + "\n" + "el salario bruto es de : " +
       to_string(calcularSalarioBruto()) + "\n" + "el salario neto es de: " + to_string(calcularSalarioNeto()) +"\n";

    return z;
}

