#pragma once
#include "Paciente.h"
class Estudiante: public Paciente
{
protected:
	string codigoCa;
	string ultimoNivel;

public:
	Estudiante(string, string, string, string, string, string, string);
	virtual ~Estudiante();
	string toString();
};

