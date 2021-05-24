//Codigo del ejercicio en clase de Polimorfismo

#ifndef FREIDORA_H
#define FREIDORA_H

#include "Electrodomestico.h"
class Freidora : public Electrodomestico{
private:
    float tiempoFreir{0};
    int temperatura{0};
public:
    Freidora(string fa);
    void seleccionarTiempo(float t);
    void seleccionarTemp(int t);
    void encender();
    void apagar();
    string toString();
    virtual string dimeFuncionActual();
    virtual void cambiaFuncionActual(string fa);
}; //Electrodomestico

#endif
