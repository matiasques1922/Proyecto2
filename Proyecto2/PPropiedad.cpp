//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include "PPropiedad.h"

PPropiedad::PPropiedad(string ced, string nom, string ape, string num, string uni, Transporte* trans, string tit, int an, string cod): Profesor(ced, nom, ape, num, uni, trans, tit, an, cod) {}
PPropiedad:: ~PPropiedad(){}
string PPropiedad::getTitulo() { return titulo; }
int PPropiedad::getAnios() { return anioslab; }
string PPropiedad::getCodigo() { return codigo; }
string PPropiedad::toString() {
	stringstream s;
	s << Profesor::toString() << endl
		<< "Tipo: Profesor Propiedad" << endl
		<< "Cedula: " << cedula << endl
		<< "Titulo: " << titulo << endl
		<< "Anios laborados: " << anioslab << endl
		<< "Codigo: " << codigo << endl;
	return s.str();

}