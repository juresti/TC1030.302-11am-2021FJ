//Codigo del ejemplo en clase de Abstractas

#include "TelefonoFijo.h"
#include <iostream>
TelefonoFijo::TelefonoFijo(int nl) : Telefono("55 2356 8974"),numLineas{nl} {}

bool TelefonoFijo::comunicar(){ //Viende del Metodo abstracto
    cout << "Comunicando tu Telefono Fijo\n";
    return true;
}
