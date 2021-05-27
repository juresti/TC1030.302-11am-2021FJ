//Codigo del ejemplo de clase Abstractas

#include "Telefono.h"
#include <iostream>

Telefono::Telefono(string num) : SistemaComunicacion("Voz y sonido"),encendido{false},numero{num} {}

void Telefono::encender() {encendido = true;}
void Telefono::apagar() {encendido = false;}
string Telefono::getNumero() {return numero;}
bool Telefono::marcar(string num){
    cout << "Marcando el numero: " << num << endl;
    return true;
}
