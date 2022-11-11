#include "Estudiante.h"

Estudiante::Estudiante(string ced, string nom, string ape, string  num, string uni,string cod, string ult):Paciente(ced, nom, ape, num, uni), codigoCa(cod), ultimoNivel(ult) {}
Estudiante:: ~Estudiante(){}
string Estudiante::toString(){
	stringstream s;
	s << Paciente::toString() << endl
		<< "Estudiante: " << endl
		<< "Codigo de Carrera: " << codigoCa << endl
		<< "Ultimo Nivel Cursado: " << ultimoNivel << endl
		<< "Numero Telefonico: " << numeroT << endl;
	return s.str();
}
