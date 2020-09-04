#include <iostream>
#include "Movimiento.h"
using namespace std;

#ifndef Pieza_H
#define Pieza_H

class Pieza
{
protected:
    char **tablero;
    Movimiento* ubicacion_actual, destino;
public:
    Pieza::Pieza();
    virtual bool Validar_Movimiento(Movimiento*, Movimiento*, char**)=0;
};
#endif