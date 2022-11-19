#pragma once
#include "Paciente.h"
class Estudiante: public Paciente
{
protected:
	string codigoCa;
	string ultimoNivel;

public:
	Estudiante(string, string, string, string, string, Transporte*, string, string);
	virtual ~Estudiante();

	void setCodigo(string);
	void setUltimo(string);
	string toString();
};

