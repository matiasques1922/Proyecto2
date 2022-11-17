#pragma once
#include "ListaAmb.h"
#include "ListaCitas.h"
#include "ListaMed.h"
#include "ListaTax.h"
#include "ListaProf.h"
#include "ListaEst.h"
class Hospital
{
private:
	//contenedor medicos, profesores, estudiantes, ambulancias, taxis, citas
	string nombreHospital;
	ListaAmb* listaAmb;
	ListaTax* listaTax;
	ListaProf* listaProf;
	ListaEst* listaEst;
	ListaMed* listaMed;
	ListaCitas* listaCitas;

public:
	Hospital(string);
	virtual ~Hospital();

	ListaAmb* getAmb();
	ListaTax* getTax();
	ListaProf* getProf();
	ListaEst* getEst();
	ListaMed* getMed();
	ListaCitas* getCitas();

	void ingresarAmb();
	void ingresarTax();
	void ingresarProf();
	void ingresarEst();
	void ingresarMed();
	void crearCita();

	string toString();

};

