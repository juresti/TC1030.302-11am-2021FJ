//Codigo del ejercicio en clase de Polimorfismo

#include "Licuadora.h"
#include <iostream>
#include <string>
using namespace std;

Licuadora::Licuadora() : Electrodomestico(),numVelocidades{3},pulsarActivo{0} {}
Licuadora::Licuadora(int nv) : Electrodomestico(),numVelocidades{nv},pulsarActivo{0} {}

void Licuadora::licuar() {cout << "Licuando tus alimentos\n";}
void Licuadora::encender() {setEncendido(1);}
void Licuadora::apagar() {setEncendido(0);}
string Licuadora::toString(){
    return "Licuadora(" + Electrodomestico::toString() + "," + to_string(numVelocidades) + "," + to_string(pulsarActivo) + ")";
}

string Licuadora::dimeFuncionActual(){
    return "La licuadora esta en la funcion: " + funcionActual;
}
void Licuadora::cambiaFuncionActual(string fa){
    cout << "Cambiando la funcion de la licuadora a: " + fa;
    funcionActual = fa;
}
