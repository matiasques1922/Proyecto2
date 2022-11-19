#include "Estudiante.h"

Estudiante::Estudiante(string ced, string nom, string ape, string  num, string uni, Transporte* trans, string cod, string ult):Paciente(ced, nom, ape, num, uni, trans), codigoCa(cod), ultimoNivel(ult) {}
Estudiante:: ~Estudiante(){}

void Estudiante::setCodigo(string cod) { codigoCa = cod; }
void Estudiante::setUltimo(string ult) { ultimoNivel = ult; }

string Estudiante::toString(){
	stringstream s;
	s << Paciente::toString() << endl
		<< "Estudiante: " << endl
		<< "Codigo de Carrera: " << codigoCa << endl
		<< "Ultimo Nivel Cursado: " << ultimoNivel << endl
		<< "Numero Telefonico: " << numeroT << endl;
	return s.str();
}
