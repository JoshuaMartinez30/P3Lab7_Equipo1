#include <iostream>
#include "Pieza.h"
#include "Movimiento.h"
using namespace std;

class Alfil:public Pieza
{
public:
	Alfil();
	virtual bool validar_Movimiento(Movimiento*,char **);
	~Alfil();
};