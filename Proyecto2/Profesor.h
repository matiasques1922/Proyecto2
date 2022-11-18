#pragma once
#include "Paciente.h"
class Profesor: public Paciente {
private:

public:
	Profesor(string, string, string, string, string, Transporte*);
	virtual ~Profesor();
	string toString();

};

