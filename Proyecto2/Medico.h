#pragma once
#include "Persona.h"
class Medico: public Persona
{
private:
	string especialidad;
public:
	Medico(string, string, string, string, string);
	virtual ~Medico();
	string getEspecialidad();

	string toString();

};

