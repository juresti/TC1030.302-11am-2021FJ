//Codigo ejemplo en clase de Abstractas

#ifndef SISTCOM_H
#define SISTCOM_H

#include <string>
using namespace std;

class SistemaComunicacion{
private:
    bool comunicando;
protected:
    string tipoComunicacion;
    SistemaComunicacion(string tipo);
public:
    virtual bool comunicar() = 0; //Método abstracto. No tiene cuerpo, no dice cómo se hacen las cosas.
    bool isComunicando();
    void setComunicando(bool val);
}; //SistemaComunicacion

#endif
