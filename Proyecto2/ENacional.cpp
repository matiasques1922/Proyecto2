#include "ENacional.h"

ENacional::ENacional(string ced, string nom, string ape, string  num, string uni, Transporte* trans, string cod, string ult, int est):Estudiante(ced, nom, ape, num, uni, trans, cod, ult), estado(est) {}
ENacional:: ~ENacional(){}
int ENacional::getEstado() { return estado; }
void ENacional::setEstado(int est) { estado = est; }
string ENacional::toString(){
	stringstream s;
	s << Estudiante::toString() << endl
		<< "Tipo: Estudiante Nacional" << endl;
	if (estado == 1)
		s << "Estado: activo" << endl;
	else
		s << "Estado: suspendido" << endl;
	return s.str();

}