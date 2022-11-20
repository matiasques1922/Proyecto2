//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include "Profesor.h"
Profesor::Profesor() {
	titulo = "";
	anioslab = 0;
	codigo = "";
}
Profesor::Profesor(string ced, string nom, string ape, string num, string uni, Transporte* trans, string tit, int an, string cod):Paciente(ced, nom, ape, num, uni, trans), titulo(tit), anioslab(an), codigo(cod) {}
Profesor:: ~Profesor(){}

void Profesor::setTitulo(string tit) { titulo = tit; }
void Profesor::setAniosLab(int ani) { anioslab = ani; }
void Profesor::setCodigo(string cod) { codigo = cod; }

string Profesor::toString(){
	stringstream s;
	s << Paciente::toString() << endl
		<< "Profesor: " << endl;
	return s.str();
}