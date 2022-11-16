#pragma once
#include"NodoMed.h"
class ListaMed
{
private:
	NodoMed* ppio;
public:
	ListaMed();
	virtual ~ListaMed();

	void ingresar(Medico*);
	string toString();
};

