#pragma once
#include"NodoTax.h"
class ListaTax
{
private:
	NodoTax* ppio;
public:
	ListaTax();
	virtual ~ListaTax();

	void ingresar(Taxi*);
	string toString();
};

