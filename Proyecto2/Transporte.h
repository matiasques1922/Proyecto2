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
	string getPlaca();
	string getMarca();

	virtual string toString() = 0;

};

