//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include <sstream>
#include <iostream>
using namespace std;

class Fecha {
private:
	int dia;
	int mes;
	int anio;
public:
	Fecha();
	Fecha(int, int, int);
	virtual ~Fecha();
	int getDia();
	int getMes();
	int getAnio();
	string toString();
};