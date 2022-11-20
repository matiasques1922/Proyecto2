//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

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

