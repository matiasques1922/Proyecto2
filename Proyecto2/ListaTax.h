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
	string toString();
};

