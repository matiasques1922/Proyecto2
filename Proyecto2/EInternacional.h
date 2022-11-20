#pragma once
#include "Estudiante.h"
class EInternacional: public Estudiante
{
private:
	string nacionalidad;
	//string numPasaporte;
	/*int condicion;*/
public:
	EInternacional(string, string, string, string, string, Transporte*, string, string, int, string);
	virtual ~EInternacional();
	string getNacionalidad();
	/*string getNumPasaporte();*/
	//int getCondicion();
	//void setCondicion(int);

	string toString();

};

