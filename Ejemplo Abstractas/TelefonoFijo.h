//Codigo ejemplo de la clase de Abstractas

#ifndef TELFIJO_H
#define TELFIJO_H
#include "Telefono.h"
class TelefonoFijo : public Telefono{
private:
    int numLineas;
public:
    TelefonoFijo(int nl);
    virtual bool comunicar();
};//TelefonoFijo

#endif
