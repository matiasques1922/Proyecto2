#include "EInternacional.h"

EInternacional::EInternacional(string ced, string nom, string ape, string num, string uni, Transporte* trans, string cod, string ult, int est, string nac):Estudiante(ced, nom, ape, num, uni, trans, cod, ult, est ), nacionalidad(nac) {}
EInternacional:: ~EInternacional(){}
string EInternacional::getNacionalidad() { return nacionalidad; }
//string EInternacional::getNumPasaporte() { return numPasaporte; }
//int EInternacional::getCondicion() { return condicion; }
//void EInternacional::setCondicion(int cond) { condicion = cond; }
string EInternacional::toString(){
	stringstream s;
	s << Estudiante::toString() << endl
		<< "Tipo: Estudiante Internacional" << endl
		<< "Nacionalidad: " << nacionalidad << endl
		<< "Numero de Pasaporte: " << cedula << endl;
	if (estado == 1)
		s << "Condicion: Exiliado" << endl;
	else
		s << "Condicion: Refugiado" << endl;

	return s.str();
}