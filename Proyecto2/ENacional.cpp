#include "ENacional.h"

ENacional::ENacional(string ced, string nom, string ape, string  num, string uni, Transporte* trans, string cod, string ult, string est):Estudiante(ced, nom, ape, num, uni, trans, cod, ult), estado(est) {}
ENacional:: ~ENacional(){}
string ENacional::getEstado() { return estado; }
string ENacional::toString(){
	stringstream s;
	s << Estudiante::toString() << endl
		<<"Tipo: Estudiante Nacional"<<endl
		<< "Estado: " << estado << endl;
	return s.str();

}