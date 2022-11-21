//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include "Paciente.h"

Paciente::Paciente() {
	universidad = "";
	transPtr = NULL;
	tipoTransporte = 0;
}
Paciente::Paciente(string ced, string nom, string ape, string num, string uni, Transporte* ptr) :Persona(ced, nom, ape, num), universidad(uni), transPtr(ptr) { tipoTransporte = 0; }
Paciente:: ~Paciente(){
}
string Paciente::getUniversidad() { return universidad; }
Transporte* Paciente::getTransporte() { return transPtr; }
int Paciente::getTipoTransporte() { return tipoTransporte; }
void Paciente::setTransporte(Transporte* trans) { transPtr = trans; }
void Paciente::setUniversidad(string uni) { universidad = uni; }
void Paciente::setTipoTransporte(int tip) { tipoTransporte = tip; }

string Paciente::toString(){
	stringstream s;
	s << "--------Paciente---------" << endl
		<< "Universidad: " << universidad << endl;
	if (tipoTransporte == 0)
		s << "Transporte: No Asignado" << endl;
	if (tipoTransporte == 1)
		s << "Transporte: Propio" << endl;
	if (tipoTransporte == 2)
		s << "Transporte: Taxi placa -> " << transPtr->getPlaca() << endl;
	if (tipoTransporte == 3)
		s << "Transporte: Ambulancia placa -> " << transPtr->getPlaca() << endl;
	return s.str();
}


//TRANSPORTE