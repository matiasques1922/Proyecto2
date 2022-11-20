//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include "Estudiante.h"

Estudiante::Estudiante(string ced, string nom, string ape, string  num, string uni, Transporte* trans, string cod, string ult, int est):Paciente(ced, nom, ape, num, uni, trans), codigoCa(cod), ultimoNivel(ult), estado(est) {}
Estudiante:: ~Estudiante(){}

void Estudiante::setCodigo(string cod) { codigoCa = cod; }
void Estudiante::setUltimo(string ult) { ultimoNivel = ult; }
void Estudiante::setEstado(int est) { estado = est; }
int Estudiante::getEstado() { return estado; }

string Estudiante::toString(){
	stringstream s;
	s << Paciente::toString() << endl
		<< "Estudiante: " << endl
		<< "Codigo de Carrera: " << codigoCa << endl
		<< "Ultimo Nivel Cursado: " << ultimoNivel << endl
		<< "Numero Telefonico: " << numeroT << endl;
	return s.str();
}
