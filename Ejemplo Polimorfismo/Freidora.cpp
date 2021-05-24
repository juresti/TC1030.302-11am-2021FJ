//Codigo del ejercicio en clase de Polimorfismo

#include "Freidora.h"
#include <string>
#include <iostream>
using namespace std;
Freidora::Freidora(string fa) : Electrodomestico(),tiempoFreir{0},temperatura{0} {
    funcionActual = fa;
}

void Freidora::seleccionarTiempo(float t) {tiempoFreir = t;}
void Freidora::seleccionarTemp(int t) {temperatura = t;}
void Freidora::encender() {setEncendido(1);}
void Freidora::apagar() {setEncendido(0);}
string Freidora::toString(){
    return "Freidora(" + Electrodomestico::toString() + "," + to_string(tiempoFreir) + "," + to_string(temperatura) + ")";
}

string Freidora::dimeFuncionActual(){
    return "Tu freidora esta en la funcion: " + funcionActual;
}
void Freidora::cambiaFuncionActual(string fa){
    cout << "Cambiando la funcion de tu freidora a: " + fa;
    funcionActual = fa;
}
