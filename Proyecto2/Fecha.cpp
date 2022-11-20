#include "Fecha.h"

Fecha::Fecha() {
	dia = 0;
	mes = 0;
	anio = 0;
}
Fecha::Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

Fecha:: ~Fecha() {

}

int Fecha::getDia() { return dia; }
int Fecha::getMes() { return mes; }
int Fecha::getAnio() { return anio; }

string Fecha::toString() {
	stringstream s;
	s << "Fecha: " << endl
		<< "Dia: " << dia << endl
		<< "Mes: " << mes << endl
		<< "Anio: " << anio << endl;
	return s.str();
}
