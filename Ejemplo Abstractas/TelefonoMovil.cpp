//Codigo del ejemplo de Abstractas

#include "TelefonoMovil.h"
#include <string>
#include <iostream>
using namespace std;

TelefonoMovil::TelefonoMovil() : Telefono("55 6554 8822"),pctBateria{100} {}
    
string TelefonoMovil::avisarBateriaBaja(){
    return "La bateria de tu Telefono Movil esta baja";
}

bool TelefonoMovil::cargarBateria(){
    pctBateria = 100;
    cout << "Bateria de tu Telefono Movil cargada\n";
}
    
bool TelefonoMovil::comunicar(){
    cout << "Comunicando tu Telefono Movil\n";
    return true;
}
