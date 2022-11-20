#pragma once
#include"NodoEst.h"
class ListaEst
{
private:
	NodoEst* ppio;
	int cont;
	int cont2;
public:
	ListaEst();
	virtual ~ListaEst();

	void ingresarIN(EInternacional*);
	void ingresarN(ENacional*);

	ENacional* buscarCed(string);
	EInternacional* buscarPas(string);
	bool eliminarEstN(string);
	bool eliminarEstIN(string);

	string nacional();
	string internacional();
	string exiliados();
	string toString();
};

