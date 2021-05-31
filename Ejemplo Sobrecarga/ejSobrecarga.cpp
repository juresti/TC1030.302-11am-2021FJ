//Codigo ejemplo de Sobrecarga

#include "Cafetera.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    Cafetera cPeq{"Pequena",0.75,1};
    Cafetera cMed{"Mediana",5.8,3};
    Cafetera cGran{"Grande",13.7,10};

    int total = cPeq + cMed + cGran;
    cout << "Las cafeteras suman " << to_string(total) << " tazas por minuto" << endl;
    return 0;
}
