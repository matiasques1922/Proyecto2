#pragma once
#include "Persona.h"
class Paciente: public Persona{
protected:
	string universidad;
public:
	Paciente(string,string,string,string,string);
	virtual ~Paciente();
	string toString();

};

