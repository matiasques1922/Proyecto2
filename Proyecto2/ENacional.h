//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include"Estudiante.h"
class ENacional: public Estudiante
{
private:
	/*int estado;*/
public:
	ENacional(string, string, string, string, string, Transporte*, string, string, int);
	virtual ~ENacional();
	/*int getEstado();
	void setEstado(int);*/
	string toString();
};

