//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include "Paciente.h"
class Estudiante: public Paciente
{
protected:
	string codigoCa;
	string ultimoNivel;
	int estado;

public:
	Estudiante(string, string, string, string, string, Transporte*, string, string, int);
	virtual ~Estudiante();

	void setCodigo(string);
	void setUltimo(string);
	int getEstado();
	void setEstado(int);
	string toString();
};

