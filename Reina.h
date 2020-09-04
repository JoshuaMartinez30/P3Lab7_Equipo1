#include <iostream>
#include "Pieza.h"
#include "Movimiento.h"
using namespace std;

class Reina:public Pieza
{
public:
	Reina();
	virtual bool validar_Movimiento(Movimiento*,char **);
	~Reina();
	
};