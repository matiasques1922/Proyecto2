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