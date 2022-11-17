#pragma once
#include "Persona.h"
#include "Transporte.h"
class Paciente: public Persona{
protected:
	string universidad;
	Transporte* transPtr;
public:
	Paciente(string,string,string,string,string, Transporte*);
	virtual ~Paciente();
	string getUniversidad();
	Transporte* getTransporte();
	string toString();

};

