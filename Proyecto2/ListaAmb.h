#pragma once
#include "NodoAmb.h"
class ListaAmb
{
private:
	NodoAmb* ppio;
public:
	ListaAmb();
	virtual ~ListaAmb();

	void ingresar(Ambulancia*);
	Ambulancia* buscarPlaca(string);
	string toString();
};

