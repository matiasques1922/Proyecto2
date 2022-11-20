//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include"NodoCit.h"
class ListaCitas
{
private:
	NodoCit* ppio;
	int cont;
public:
	ListaCitas();
	virtual ~ListaCitas();
	bool eliminarCita(string);
	void ingresar(Cita*);
	Cita* buscarCod(string);
	string historialP(string);
	void masCitas();
	void FechaMas();
	void transMas();
	string toString();
	
};

