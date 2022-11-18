#pragma once
#include"Estudiante.h"
class ENacional: public Estudiante
{
private:
	string estado;
public:
	ENacional(string, string, string, string, string, Transporte*, string, string, string);
	virtual ~ENacional();
	string getEstado();
	string toString();
};

