#pragma once
#include "Transporte.h"
#include "Cobro.h"
class Taxi: public Transporte
{
private:
	double distancia;
	bool idaVuelta;
	int numPacientes;
	Cobro* cobroPtr;
public:
	Taxi(string, string, double, bool, int, Cobro*); //cobro
	virtual ~Taxi();

	double getDistancia();
	bool getIdaVuelta();
	int getNumPacientes();
	Cobro* getCobro();
	void setDistancia(double);
	void setIdaVuelta(char);
	void setNumPacientes(int);
	void setCobro(Cobro*);

	double cobro();

	string toString();

};

