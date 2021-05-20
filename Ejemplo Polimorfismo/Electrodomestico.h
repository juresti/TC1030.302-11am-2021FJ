//Codigo del ejercio de Herencia

#ifndef ELECTRODOMESTICO_H
#define ELECTRODOMESTICO_H

#include <string>
using namespace std;

class Electrodomestico{
private:
    bool encendido;
protected:
    string funcionActual;
public:
    Electrodomestico();
    bool isEncendido();
    void setEncendido(bool val);
    string toString();

    virtual string dimeFuncionActual();
    virtual void cambiaFuncionActual(string fa);
}; //Electrodomestico

#endif
