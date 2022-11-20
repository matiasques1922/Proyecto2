//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

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
	string ocupadas();
	string toString();
};

