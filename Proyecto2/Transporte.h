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

