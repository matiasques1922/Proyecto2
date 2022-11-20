//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

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

