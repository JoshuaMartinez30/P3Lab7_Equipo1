#include <iostream>
#include "Pieza.h"
#include "Movimiento.h"
using namespace std;

class Rey:public Pieza
{
public:
	Rey();
	virtual bool validar_Movimiento(Movimiento*,char **);
	~Rey();
	
};