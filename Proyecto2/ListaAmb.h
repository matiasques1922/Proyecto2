#pragma once
#include "NodoAmb.h"
class ListaAmb
{
private:
	NodoAmb* ppio;
	int cont;
public:
	ListaAmb();
	virtual ~ListaAmb();

	void ingresar(Ambulancia*);
	Ambulancia* buscarPlaca(string);
	bool eliminarAmb(string);
	string toString();
};

