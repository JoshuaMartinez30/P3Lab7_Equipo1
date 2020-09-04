#include <iostream>
#include "Rey.h"
#include "Movimiento.h"
using namespace std;

Rey::Rey():Pieza(){
}


bool Rey::validar_Movimiento (Movimiento* mov, char** matriz){
    if (mov->getD_x()==mov->getU_a_x()+1 || mov->getD_x()==mov->getU_a_y()-1 || mov->getD_y()==mov->getU_a_y()+1 || mov->getD_y()==mov->getU_a_y()-1 || mov->getD_x()==mov->getU_a_x()+1 && mov->getD_y()==mov->getU_a_y()+1 || mov->getD_x()==mov->getU_a_x()-1 && mov->getD_y()==mov->getU_a_y()-1){
        return true;
    }
    else{
        return false;
    }
}

Rey::~Rey(){
}