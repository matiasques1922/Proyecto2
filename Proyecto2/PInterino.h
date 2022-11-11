#pragma once
#include"Profesor.h"
class PInterino: public Profesor{
private:
	string titulo;
	int anioslab;
	double calificacion;
public:
	PInterino(string, string, string, string, string, string, int, double);
	virtual ~PInterino();
	string getTitulo();
	int getAnios();
	double getCali();

	string toString();

};

