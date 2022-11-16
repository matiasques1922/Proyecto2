#pragma once
#include"NodoProf.h"
class ListaProf
{
private:
	NodoProf* ppio;
public:
	ListaProf();
	virtual ~ListaProf();

	void ingresar(Profesor*);
	string toString();
};

