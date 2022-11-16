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

