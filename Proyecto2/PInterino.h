//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include"Profesor.h"
class PInterino: public Profesor{
private:

public:
	PInterino();
	PInterino(string, string, string, string, string, Transporte*, string, int, string);
	virtual ~PInterino();
	string getTitulo();
	int getAnios();
	string getCali();

	string toString();

};

