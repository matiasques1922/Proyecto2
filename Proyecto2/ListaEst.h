//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

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

	/*ENacional* buscarCed(string);*/
	Estudiante* buscarCed(string);
	bool eliminarEstN(string);
	bool eliminarEstIN(string);

	string nacional();
	string internacional();
	string exiliados();
	string toString();
};

