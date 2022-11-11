#include "Paciente.h"

Paciente::Paciente(string ced, string nom, string ape, string num, string uni):Persona(ced, nom, ape, num), universidad(uni) {}
Paciente:: ~Paciente(){}
string Paciente::toString(){
	stringstream s;
	s << "--------Paciente---------" << endl
		<< "Universidad: " << universidad << endl;
	return s.str();
}
