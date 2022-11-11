#pragma once
#include "Paciente.h"
class Profesor: public Paciente {
private:

public:
	Profesor(string, string, string, string, string);
	virtual ~Profesor();
	string toString();

};

