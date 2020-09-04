#include <iostream>
#include "Peon.h"
#include "Movimiento.h"
using namespace std;

Peon::Peon():Pieza(){
}


bool Peon::validar_Movimiento (Movimiento* movi, char** tablero){
    bool validacion = false;
    if(movi->getU_a_y()==1 || movi -> getU_a_y()==6){
        if(movi->getD_y()==(movi->getU_a_y()+2)){
            validacion=true;
        }
    }
    else if (movi->getD_y()==(movi->getU_a_y()+1))
    {
        validacion=true;
    }
    else{
        validacion=false;
    }
    
    return validacion;
}

Peon::~Peon(){
}