#include "PrimerSemestre.h"

PrimerSemestre::PrimerSemestre()
{
    //ctor
}

PrimerSemestre::PrimerSemestre(string nombre1, string nombre2, string nombre3, string nombre4, string nombre5)
{
    this -> nombre1=nombre1;
    this -> nombre2=nombre2;
    this -> nombre3=nombre3;
    this -> nombre4=nombre4;
    this -> nombre5=nombre5;
}

void PrimerSemestre::datos()
{
    generaDatos();
}
