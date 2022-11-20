//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include"Ambulancia.h"
class NodoAmb
{
private:
	Ambulancia* ptrA;
	NodoAmb* sig;

public:
	NodoAmb(Ambulancia*, NodoAmb*);
	virtual ~NodoAmb();
	void setAmbulancia(Ambulancia*);
	void setSig(NodoAmb*);

	Ambulancia* getAmbulancia();
	NodoAmb* getSig();
};

