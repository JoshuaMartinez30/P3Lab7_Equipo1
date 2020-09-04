#include <iostream>
#include "Torre.h"
#include "Movimiento.h"
using namespace std;

Torre::Torre():Pieza(){
}


bool Torre::validar_Movimiento (Movimiento* movi, char** matriz){
    bool validacion;
    for (int i = 1; i < 7; ++i){
        if (movi->getD_x()==movi->getU_a_x()+i && movi->getD_y()==movi->getU_a_y()|| movi->getD_y()==movi->getU_a_y()+i && movi->getD_x()==movi->getU_a_x()|| movi->getD_x()==movi->getU_a_x()-i && movi->getD_y()==movi->getU_a_y()|| movi->getD_y()==movi->getU_a_y()-i && movi->getD_x()==movi->getU_a_x()){
            validacion=true;
            i=7;
        }
        else{
            validacion=false;
        }
    }
    
    return validacion;
}

Torre::~Torre(){
}