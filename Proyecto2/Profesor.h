#pragma once
#include "Paciente.h"

class Profesor: public Paciente {
protected:
	string titulo;
	int anioslab;
	string codigo;
public:
	Profesor();
	Profesor(string, string, string, string, string, Transporte*, string, int, string);
	virtual ~Profesor();
	void setTitulo(string);
	void setAniosLab(int);
	void setCodigo(string);


	string toString();

};

