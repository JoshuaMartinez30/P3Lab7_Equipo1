#include <iostream>
#include "Pieza.h"
#include "Movimiento.h"
using namespace std;

class Peon:public Pieza
{
public:
	Peon();
	virtual bool validar_Movimiento(Movimiento*,char **);
	~Peon();
};