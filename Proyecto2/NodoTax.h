#pragma once
#include "Taxi.h"
class NodoTax
{
private:
	Taxi* ptrT;
	NodoTax* sig;

public:
	NodoTax(Taxi*, NodoTax*);
	virtual ~NodoTax();
	void setTaxi(Taxi*);
	void setSig(NodoTax*);

	Taxi* getTaxi();
	NodoTax* getSig();
};

