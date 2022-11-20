#pragma once
#include"NodoProf.h"
class ListaProf
{
private:
	NodoProf* ppio;
	int cont;
	int cont2;
public:
	ListaProf();
	virtual ~ListaProf();

	void ingresarP(PPropiedad*);
	void ingresarI(PInterino*);
	/*PPropiedad* buscarCedP(string);*/
	Profesor* buscarCed(string);
	bool eliminarProfP(string);
	bool eliminarProfI(string);
	void mejoresCali();

	string propiedad();
	string interino();
	string toString();
};

