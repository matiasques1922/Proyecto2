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

