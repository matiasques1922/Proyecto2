//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

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

