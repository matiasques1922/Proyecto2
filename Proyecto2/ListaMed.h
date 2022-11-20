//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include"NodoMed.h"
class ListaMed
{
private:
	NodoMed* ppio;
	int cont;
public:
	ListaMed();
	virtual ~ListaMed();

	void ingresar(Medico*);
	Medico* buscarCed(string);
	Medico* buscarEsp(string);
	bool eliminarMed(string);
	string toString();
};

