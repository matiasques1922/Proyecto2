//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include"Transporte.h"
class Ambulancia: public Transporte
{
private:
	string codigo;
	bool ocupado = false;
	double kmRecorridos;
	bool idaVuelta;
public:
	Ambulancia(string, string, string, bool, double);
	virtual ~Ambulancia();
	string getCodigo();
	bool getOcupado();
	double getKM();
	bool getIdaVuelta();

	void setIdaVuelta(bool);
	void setCodigo(string);
	void setOcupado(bool);
	void setKM(double);

	string toString();

};

