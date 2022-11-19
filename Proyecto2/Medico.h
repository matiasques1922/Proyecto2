#pragma once
#include "Persona.h"
class Persona;
class Medico: public Persona{
private:
	string especialidad;
public:
	Medico(string, string, string, string, string);
	virtual ~Medico();
	string getEspecialidad();
	void setEspecialidad(string);

	string toString();

};

