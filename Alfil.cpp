#include <iostream>
#include "Alfil.h"
#include "Movimiento.h"
using namespace std;

Alfil::Alfil():Pieza(){

}


bool Alfil::validar_Movimiento (Movimiento* movi, char** matriz){
    int centinela=0;
    for (int i = 1; i < 7; ++i){
        if (movi->getU_a_x()!=movi->getD_x() && movi->getU_a_y()!=movi->getD_y() && movi->getD_x()==movi->getU_a_x()+i && movi->getD_y()==movi->getU_a_y()+i || movi->getD_x()==movi->getU_a_x()-i && movi->getD_y()==movi->getU_a_y()-i){
            centinela=1;
        }
    }
    if (centinela==1){
        return true;
    }
    else{
        return false;
    }
}

Alfil::~Alfil(){
}