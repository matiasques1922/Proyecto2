#pragma once
#include "Fecha.h"
class Cobro
{
private:
	double total;
public:
	Cobro();
	virtual~Cobro();
	double getTotal();
	void setTotal(double);
	double realizaCobro(double, int);
	double realizaCobro2(double, int);
};

