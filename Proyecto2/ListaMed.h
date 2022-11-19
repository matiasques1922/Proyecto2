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

