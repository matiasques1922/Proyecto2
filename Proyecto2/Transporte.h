//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include"Fecha.h"
class Transporte
{
protected:
	string placa;
	string marca;
public:
	Transporte(string, string);
	virtual ~Transporte();

	void setPlaca(string);
	void setMarca(string);
	string getPlaca();
	string getMarca();

	virtual string toString() = 0;

};

