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
	Fecha(int, int, int);
	virtual ~Fecha();
	string toString();
};