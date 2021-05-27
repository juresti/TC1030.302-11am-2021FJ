//Codigo del ejemplo de Abstractas

#include "TelefonoFijo.h"
#include "TelefonoMovil.h"

void usaTelefonoFijo(){
    TelefonoFijo telCasa{3};

    telCasa.marcar("55 1245 9865");
    telCasa.encender();
    telCasa.comunicar();
    telCasa.apagar();
}

void usaTelefonoMovil(){
    TelefonoMovil miCel{};
    miCel.cargarBateria();
    miCel.marcar("55 1245 2356");
    miCel.comunicar();
}

int main(int argc, char const *argv[])
{
    usaTelefonoMovil();   
    return 0;
}
