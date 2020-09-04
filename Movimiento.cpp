#include <iostream>
#include "Movimiento.h"
using namespace std;

Movimiento::Movimiento(){
}

Movimiento::Movimiento(int UbicacionA_x, int UbicacionA_y, int destino_x, int destino_y){
    this -> Ubiacacion_actual_x = UbicacionA_x;
    this -> Ubiacacion_actual_y = UbicacionA_y;
    this -> Destino_x = destino_x;
    this -> Destino_y = destino_y;
}


int Movimiento::getU_a_x(){
    return Ubiacacion_actual_x;
}

void Movimiento::setU_a_x(int UbicacionA_x){
    Ubiacacion_actual_x = UbicacionA_x;
}

int Movimiento::getU_a_y(){
    return Ubiacacion_actual_y;
}

void Movimiento::setU_a_y(int UbicacionA_y){
    Ubiacacion_actual_y = UbicacionA_y;
}

int Movimiento::getD_x(){
    return Destino_x;
}

void Movimiento::setD_x(int destino_x){
    Destino_x = destino_x;
}

int Movimiento::getD_y(){
    return Destino_y;
}

void Movimiento::setD_y(int destino_y){
    Destino_y = destino_y;
}

Movimiento::~Movimiento(){
}