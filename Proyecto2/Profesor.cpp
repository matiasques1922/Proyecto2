#include "Profesor.h"

Profesor::Profesor(string ced, string nom, string ape, string num, string uni, Transporte* trans):Paciente(ced, nom, ape, num, uni, trans) {}
Profesor:: ~Profesor(){}
string Profesor::toString(){
	stringstream s;
	s << Paciente::toString() << endl
		<< "Profesor: " << endl;
	return s.str();
}