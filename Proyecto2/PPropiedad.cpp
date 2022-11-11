#include "PPropiedad.h"

PPropiedad::PPropiedad(string ced, string nom, string ape, string num, string uni, string tit, int an, string cod): Profesor(ced, nom, ape, num, uni), titulo(tit), anioslab(an), codigo(cod) {}
PPropiedad:: ~PPropiedad(){}
string PPropiedad::getTitulo() { return titulo; }
int PPropiedad::getAnios() { return anioslab; }
string PPropiedad::getCodigo() { return codigo; }
string PPropiedad::toString() {
	stringstream s;
	s << Profesor::toString() << endl
		<< "Tipo: Profesor Interino" << endl
		<< "Cedula: " << cedula << endl
		<< "Titulo: " << titulo << endl
		<< "Anios laborados: " << anioslab << endl
		<< "Codigo: " << codigo << endl;
	return s.str();

}