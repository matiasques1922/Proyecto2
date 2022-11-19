#include "Paciente.h"

Paciente::Paciente(string ced, string nom, string ape, string num, string uni, Transporte* ptr):Persona(ced, nom, ape, num), universidad(uni), transPtr(ptr) {}
Paciente:: ~Paciente(){
	if (transPtr != NULL)
		delete transPtr;
}
string Paciente::getUniversidad() { return universidad; }
Transporte* Paciente::getTransporte() { return transPtr; }
void Paciente::setTransporte(Transporte* trans) { transPtr = trans; }
void Paciente::setUniversidad(string uni) { universidad = uni; }

string Paciente::toString(){
	stringstream s;
	s << "--------Paciente---------" << endl
		<< "Universidad: " << universidad << endl;
	if (transPtr == NULL)
		s << "Transporte: Propio o aun no asignado" << endl;
	else
		s << "Transporte brindado por el hospital placa: " << transPtr->getPlaca() << endl;
	return s.str();
}


//TRANSPORTE