#pragma once
#include "Estudiante.h"
class EInternacional: public Estudiante
{
private:
	string nacionalidad;
	//string numPasaporte;
	string condicion;
public:
	EInternacional(string, string, string, string, string, string, string, string, string);
	virtual ~EInternacional();
	string getNacionalidad();
	/*string getNumPasaporte();*/
	string getCondicion();

	string toString();

};

