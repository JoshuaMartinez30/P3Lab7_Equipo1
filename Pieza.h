#include <iostream>
using namespace std;

#ifndef Pieza_H
#define Pieza_H

class Pieza
{
protected:
    
public:
    Pieza::Pieza();
    virtual bool Validar_Movimiento();
};
#endif