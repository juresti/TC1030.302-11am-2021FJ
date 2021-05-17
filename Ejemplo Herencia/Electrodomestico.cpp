//Codigo del ejercio de Herencia
#include "Electrodomestico.h"
#include <string>
using namespace std;

Electrodomestico::Electrodomestico() : encendido{0} {}

bool Electrodomestico::isEncendido() {return encendido;}
void Electrodomestico::setEncendido(bool val) {encendido = val;}

string Electrodomestico::toString(){
    string tmp{""};
    if(isEncendido()) tmp = "Encendido";
    else tmp = "Apagado";
    return "Electrodomestico(" + tmp + ")";
}
