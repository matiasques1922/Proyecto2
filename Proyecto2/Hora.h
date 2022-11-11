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

