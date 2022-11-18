#pragma once
#include"NodoProf.h"
class ListaProf
{
private:
	NodoProf* ppio;
public:
	ListaProf();
	virtual ~ListaProf();

	void ingresarP(PPropiedad*);
	void ingresarI(PInterino*);

	string toString();
};

