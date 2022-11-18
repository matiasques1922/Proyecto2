#include "Profesor.h"

Profesor::Profesor(string ced, string nom, string ape, string num, string uni, Transporte* trans, string tit, int an, string cod):Paciente(ced, nom, ape, num, uni, trans), titulo(tit), anioslab(an), codigo(cod) {}
Profesor:: ~Profesor(){}
string Profesor::toString(){
	stringstream s;
	s << Paciente::toString() << endl
		<< "Profesor: " << endl;
	return s.str();
}