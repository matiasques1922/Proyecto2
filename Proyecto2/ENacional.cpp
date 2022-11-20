//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include "ENacional.h"

ENacional::ENacional(string ced, string nom, string ape, string  num, string uni, Transporte* trans, string cod, string ult, int est):Estudiante(ced, nom, ape, num, uni, trans, cod, ult, est){}
ENacional:: ~ENacional(){}
//int ENacional::getEstado() { return estado; }
//void ENacional::setEstado(int est) { estado = est; }
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