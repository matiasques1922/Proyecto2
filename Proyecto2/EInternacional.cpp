#include "EInternacional.h"

EInternacional::EInternacional(string ced, string nom, string ape, string num, string uni, string cod, string ult, string nac, string cond):Estudiante(ced, nom, ape, num, uni, cod, ult ), nacionalidad(nac), condicion(cond) {}
EInternacional:: ~EInternacional(){}
string EInternacional::getNacionalidad() { return nacionalidad; }
//string EInternacional::getNumPasaporte() { return numPasaporte; }
string EInternacional::getCondicion() { return condicion; }

string EInternacional::toString(){
	stringstream s;
	s << Estudiante::toString() << endl
		<< "Tipo: Estudiante Internacional" << endl
		<< "Nacionalidad: " << nacionalidad << endl
		/*<< "Numero de Pasaporte: " << numPasaporte << endl*/
		<< "Condicion: " << condicion << endl;
	return s.str();
}