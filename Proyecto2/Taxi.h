//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

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

	double total();

	string toString();

};

