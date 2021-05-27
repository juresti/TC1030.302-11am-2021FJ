//Codigo de la clase de Abstractas
#ifndef TELMOVIL_H
#define TELMOVIL_H

#include "Telefono.h"
#include <string>
using namespace std;

class TelefonoMovil : public Telefono{
private:
    int pctBateria;
public:
    TelefonoMovil();
    string avisarBateriaBaja();
    bool cargarBateria();
    virtual bool comunicar(); //Del método abstracto
};//TelefonoMovil

#endif
