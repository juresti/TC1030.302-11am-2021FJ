//Codigo del ejercicio en clase de Polimorfismo
#ifndef LICUADORA_H 
#define LICUADORA_H

#include "Electrodomestico.h"
#include <string>
using namespace std;
class Licuadora : public Electrodomestico{
private:
    int numVelocidades{3};
    bool pulsarActivo{0};
public:
    Licuadora();
    Licuadora(int nv);

    void licuar();
    void encender();
    void apagar();
    string toString();
    virtual string dimeFuncionActual();
    virtual void cambiaFuncionActual(string fa);
}; //Licuadora

#endif
