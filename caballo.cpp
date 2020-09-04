#include <iostream>
#include "Caballo.h"
#include "Movimiento.h"
using namespace std;

Caballo::Caballo():Pieza(){
}

bool Caballo::validar_Movimiento (Movimiento* movi, char** matriz){
    if (movi->getU_a_x()==movi->getU_a_x()+2 && movi->getD_y()==movi->getU_a_y()+1 || movi->getD_y()==movi->getU_a_y()-1 || movi->getU_a_y()==movi->getU_a_y()+2 && movi->getD_x()==movi->getU_a_x()+1 || movi->getD_x()==movi->getU_a_x()-1){
    	return true;
    }
    else{
    	return false;
    }
}

Caballo::~Caballo(){
    cout<<"Caballo Eliminado"<<endl;
}