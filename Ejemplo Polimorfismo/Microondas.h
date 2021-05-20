// Codigo del ejercicio de Herencia
#ifndef MICROONDAS_H
#define MICROONDAS_H

#include "Electrodomestico.h"
#include <string>
using namespace std;

class Microondas : public Electrodomestico{
private:
    float capacidad;
    string color;
public:
    Microondas();
    Microondas(float cap,string col);
    string calentadoRapido();
    void encender();
    void apagar();
    string toString();

    virtual string dimeFuncionActual();
    virtual void cambiaFuncionActual(string fa);
};//Microondas

#endif
