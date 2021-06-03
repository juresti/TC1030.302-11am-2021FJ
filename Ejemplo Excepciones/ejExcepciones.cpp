//Codigo del ejemplo de Excepciones de clase

#include "Cafetera.h"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

float pideCapacidad(){
    float cap{0.0};
    bool correcta{false};
    while(!correcta){
        try{
            cout << "Dime la capacidad de la cafetera: ";
            cin >> cap;
            if(cin.fail()) throw runtime_error("ERROR en captura de capacidad de la cafetera");
            correcta = true;
        } catch(runtime_error objE){
            cin.clear(); //Limpia la bandera de fail
            cin.ignore(32767,'\n'); //Limpia el buffer de los datos recibidos erroneamente
            cout << "ERROR. En la captura de los datos. La capacidad debe de ser de tipo float.\n";
            cout << objE.what() << endl;
        }
    }
    return cap;
}

int pideTazas(){
    int tazas{0};
    bool correcta{false};
    while(!correcta){
        try{
            cout << "Dime la cantidad de tazas por minuto: ";
            cin >> tazas;
            if(cin.fail()) throw runtime_error("Datos en tazas por minuto son erroneos.");
            correcta = true;
        } catch(runtime_error objE){
            cin.clear();
            cin.ignore(32767,'\n');
            cout << "ERROR... las tazas por minutos deben de ser un numero entero.\n";
            cout << objE.what() << endl;
        }
    }
    return tazas;
}

int main(int argc, char const *argv[])
{
    string nom;
    cout << "Dime el nombre de la cafetera: ";
    cin >> nom;

    float cap = pideCapacidad();
    int tazas = pideTazas();
    
    Cafetera caf1{nom,cap,tazas};
    cout << caf1.toString() << endl;
    return 0;
}
