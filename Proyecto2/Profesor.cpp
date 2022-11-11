#include "Profesor.h"

Profesor::Profesor(string ced, string nom, string ape, string num, string uni):Paciente(ced, nom, ape, num, uni) {}
Profesor:: ~Profesor(){}
string Profesor::toString(){
	stringstream s;
	s << Paciente::toString() << endl
		<< "Profesor: " << endl;
	return s.str();
}