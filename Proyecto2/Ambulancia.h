#pragma once
#include"Transporte.h"
class Ambulancia: public Transporte
{
private:
	string codigo;
	bool ocupado = false;
	double kmRecorridos;
	/*si el viaje : “ida”, “ida y vuelta” o “vuelta “.*/
public:
	Ambulancia(string, string, string, bool, double);
	virtual ~Ambulancia();
	string getCodigo();
	bool getOcupado();
	double getKM();

	void setOcupado(bool);
	void setKM(double);

	string toString();

};

