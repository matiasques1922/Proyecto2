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

