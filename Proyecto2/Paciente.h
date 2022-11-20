#pragma once
#include "Persona.h"
#include "Transporte.h"
#include "Taxi.h"
#include "Ambulancia.h"
class Paciente: public Persona{
protected:
	string universidad;
	Transporte* transPtr;
	int tipoTransporte;
public:
	Paciente();
	Paciente(string,string,string,string,string, Transporte*);
	virtual ~Paciente();
	string getUniversidad();
	Transporte* getTransporte();
	int getTipoTransporte();
	void setTransporte(Transporte*);
	void setUniversidad(string);
	void setTipoTransporte(int);

	string toString();

};

