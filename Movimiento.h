#include <iostream>
using namespace std;

#ifndef Movimiento_H
#define Movimiento_H

class Movimiento
{
protected:
	int Ubiacacion_actual_x,Ubiacacion_actual_y,Destino_x,Destino_y;
public:
	Movimiento();
	Movimiento(int,int,int,int);
	int getU_a_x();
    void setU_a_x(int);
    int getU_a_y();
    void setU_a_y(int);
    int getD_x();
    void setD_x(int);
    int getD_y();
    void setD_y(int);
	~Movimiento();
};
 #endif