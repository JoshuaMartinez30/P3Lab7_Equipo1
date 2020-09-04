#include <iostream>
#include "Pieza.h"
#include "Movimiento.h"
using namespace std;

class Caballo:public Pieza
{
public:
	Caballo();
	virtual bool validar_Movimiento(Movimiento*,char **);
	~Caballo();
};