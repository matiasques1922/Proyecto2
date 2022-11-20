//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include"NodoTax.h"
class ListaTax
{
private:
	NodoTax* ppio;
	int cont;
public:
	ListaTax();
	virtual ~ListaTax();

	void ingresar(Taxi*);
	Taxi* buscarPlaca(string);
	bool eliminarTax(string);
	double totalRecaudado();
	string toString();
};

