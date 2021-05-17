//Codigo de prueba del ejemplo de Herencia

#include "Electrodomestico.h"
#include "Microondas.h"
#include <iostream>
using namespace std;

int main()
{
    Electrodomestico elect1{};
    cout << elect1.toString() << endl;
    elect1.setEncendido(1);
    cout << elect1.isEncendido() << endl;

    Microondas micro1{};
    cout << micro1.toString() << endl;
    cout << micro1.calentadoRapido() << endl;

    Microondas micro2{13,"Rosa Mexicano"};
    cout << micro2.toString() << endl;
    micro2.encender();
    cout << micro2.calentadoRapido() << endl;
    micro2.apagar();
    cout << micro2.toString() << endl;
    return 0;
}
