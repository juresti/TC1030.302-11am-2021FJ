//Codigo del ejercicio de Herencia

#include "Microondas.h"
#include <string>
using namespace std;

Microondas::Microondas() : capacidad{3},color{"Negro"} {}
Microondas::Microondas(float cap,string col) : capacidad{cap},color{col} {}
string Microondas::calentadoRapido() {
    string tmp{""};
    if(isEncendido()) tmp = "Calentando tu comida";
    else tmp = "Primero encendiende el microondas";
    return tmp;
}
void Microondas::encender() {setEncendido(1);}
void Microondas::apagar() {setEncendido(0);}

string Microondas::toString(){
    string tmp{""};
    if(isEncendido()) tmp = "Encendido";
    else tmp = "Apagado";
    return "Microondas(" + tmp + "," + to_string(capacidad) + "," + color + ")";
}
