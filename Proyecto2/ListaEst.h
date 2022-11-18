#pragma once
#include"NodoEst.h"
class ListaEst
{
private:
	NodoEst* ppio;
public:
	ListaEst();
	virtual ~ListaEst();

	void ingresarIN(EInternacional*);
	void ingresarN(ENacional*);
	string toString();
};

