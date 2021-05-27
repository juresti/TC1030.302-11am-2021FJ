//Codigo de la clase de Abstractas

#include "SistemaComunicacion.h"
#include <string>
using namespace std;

SistemaComunicacion::SistemaComunicacion(string tipo) : tipoComunicacion{tipo},comunicando{false} {}

//virtual bool comunicar() = 0; //Método abstracto. No tiene cuerpo, no dice cómo se hacen las cosas.
bool SistemaComunicacion::isComunicando() {return comunicando;}
void SistemaComunicacion::setComunicando(bool val) {comunicando = val;}
