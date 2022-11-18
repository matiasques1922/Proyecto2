#pragma once
#include "Persona.h"
#include "Transporte.h"
#include "Taxi.h"
#include "Ambulancia.h"
class Paciente: public Persona{
protected:
	string universidad;
	Transporte* transPtr;
public:
	Paciente(string,string,string,string,string, Transporte*);
	virtual ~Paciente();
	string getUniversidad();
	Transporte* getTransporte();
	void setTransporte(Transporte*);
	void setUniversidad(string);

	string toString();

};

