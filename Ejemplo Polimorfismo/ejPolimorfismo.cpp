//Codigo de aplicación del ejercicio de Polimorfismo
#include "Electrodomestico.h"
#include "Microondas.h"
#include "Licuadora.h"
#include "Freidora.h"
#include <iostream>
using namespace std;

void cambiaReportaFuncion(Electrodomestico &elec,string nf){
    elec.cambiaFuncionActual(nf);
    cout << "Cambio realizado: " << elec.dimeFuncionActual() << endl;
}

int main(int argc, char const *argv[])
{
    Microondas micro1{5,"Burgundy"};
    Licuadora licua1{7};
    Freidora frei1{"Rostizando"};

    cout << micro1.toString() << endl;
    cout << licua1.toString() << endl;
    cout << frei1.toString() << endl;

    cambiaReportaFuncion(micro1,"Calentado rapido");
    cambiaReportaFuncion(licua1,"Triturando");
    cambiaReportaFuncion(frei1,"Pre-calentado");
    return 0;
}
