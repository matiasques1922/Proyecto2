#include "PInterino.h"

PInterino::PInterino(string ced, string nom, string ape, string num, string uni, Transporte* trans, string tit, int an, string cal):Profesor(ced, nom, ape, num, uni, trans, tit, an, cal) {}
PInterino:: ~PInterino(){}
string PInterino::getTitulo() { return titulo; }
int PInterino::getAnios() { return anioslab; }
string PInterino::getCali() { return codigo; }

string PInterino::toString(){
	stringstream s;
	s << Profesor::toString() << endl
		<< "Tipo: Profesor Interino" << endl
		<< "Cedula: " << cedula << endl
		<< "Titulo: " << titulo << endl
		<< "Anios laborados: " << anioslab << endl
		<< "Calificacion: " << codigo << endl;
	return s.str();
}
