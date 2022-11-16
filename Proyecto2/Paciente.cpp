#include "Paciente.h"

Paciente::Paciente(string ced, string nom, string ape, string num, string uni, Transporte* ptr):Persona(ced, nom, ape, num), universidad(uni), transPtr(ptr) {}
Paciente:: ~Paciente(){
	if (transPtr != NULL)
		delete transPtr;
}

Transporte* Paciente::getTransporte() { return transPtr; }
string Paciente::toString(){
	stringstream s;
	s << "--------Paciente---------" << endl
		<< "Universidad: " << universidad << endl;
	return s.str();
}


//TRANSPORTE