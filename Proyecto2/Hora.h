//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include "Fecha.h"
class Hora
{
private:
	int hora;
	int minutos;

public:
	Hora(int, int);
	virtual ~Hora();

	int getHora();
	int getMinutos();
	void setHora(int);
	void setMinutos(int);

	string toString();
};

