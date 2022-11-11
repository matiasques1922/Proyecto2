#pragma once
#include "Transporte.h"
class Taxi: public Transporte
{
private:
	double distancia;
	char idaVuelta;
	int numPacientes;
	/*Cobro* cobroPtr;*/
public:
	Taxi(string, string, double, char, int); //cobro
	virtual ~Taxi();

	double getDistancia();
	char getIdaVuelta();
	int getNumPacientes();
	void setDistancia(double);
	void setIdaVuelta(char);
	void setNumPacientes(int);

	string toString();

};

