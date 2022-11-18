#include "EInternacional.h"

EInternacional::EInternacional(string ced, string nom, string ape, string num, string uni, Transporte* trans, string cod, string ult, string nac, int cond):Estudiante(ced, nom, ape, num, uni, trans, cod, ult ), nacionalidad(nac), condicion(cond) {}
EInternacional:: ~EInternacional(){}
string EInternacional::getNacionalidad() { return nacionalidad; }
//string EInternacional::getNumPasaporte() { return numPasaporte; }
int EInternacional::getCondicion() { return condicion; }

string EInternacional::toString(){
	stringstream s;
	s << Estudiante::toString() << endl
		<< "Tipo: Estudiante Internacional" << endl
		<< "Nacionalidad: " << nacionalidad << endl
		<< "Numero de Pasaporte: " << cedula << endl;
	if (condicion = 1)
		s << "Condicion: Exiliado" << endl;
	else
		s << "Condicion: Refugiado" << endl;

	return s.str();
}