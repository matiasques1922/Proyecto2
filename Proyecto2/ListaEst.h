#pragma once
#include"NodoEst.h"
class ListaEst
{
private:
	NodoEst* ppio;
public:
	ListaEst();
	virtual ~ListaEst();

	void ingresar(Estudiante*);
	string toString();
};

