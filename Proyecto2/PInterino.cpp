#include "PInterino.h"

PInterino::PInterino(string ced, string nom, string ape, string num, string uni, Transporte* trans, string tit, int an, double cal):Profesor(ced, nom, ape, num, uni, trans), titulo(tit), anioslab(an), calificacion(cal) {}
PInterino:: ~PInterino(){}
string PInterino::getTitulo() { return titulo; }
int PInterino::getAnios() { return anioslab; }
double PInterino::getCali() { return calificacion; }

string PInterino::toString(){
	stringstream s;
	s << Profesor::toString() << endl
		<< "Tipo: Profesor Interino" << endl
		<< "Cedula: " << cedula << endl
		<< "Titulo: " << titulo << endl
		<< "Anios laborados: " << anioslab << endl
		<< "Calificacion: " << calificacion << endl;
	return s.str();
}
