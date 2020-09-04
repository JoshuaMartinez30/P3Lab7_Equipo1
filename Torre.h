#include <iostream>
#include "Pieza.h"
#include "Movimiento.h"
using namespace std;

class Torre:public Pieza
{
public:
	Torre();
	virtual bool validar_Movimiento(Movimiento*,char **);
	~Torre();
};