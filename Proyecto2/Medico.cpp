#include "Medico.h"

Medico::Medico(string ced, string nom, string ape, string num, string esp): Persona(ced, nom, ape, num), especialidad(esp) {}
Medico:: ~Medico(){}
string Medico::getEspecialidad() { return especialidad; }
void Medico::setEspecialidad(string esp) { especialidad = esp; }

string Medico::toString(){
	stringstream s;
	s << "--------Medico---------" << endl
		<< "Cedula: " << cedula << endl
		<< "Nombre: " << nombre << endl
		<< "Apellido: " << apellido << endl
		<< "Numero Telefonico: " << numeroT << endl
		<< "Especialidad: " << especialidad << endl;
	return s.str();
}

