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

