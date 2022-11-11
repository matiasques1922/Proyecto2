#include "Fecha.h"

Fecha::Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

Fecha:: ~Fecha() {

}

string Fecha::toString() {
	stringstream s;
	s << "Fecha: " << endl
		<< "Dia: " << dia << endl
		<< "Mes: " << mes << endl
		<< "Anio: " << anio << endl;
	return s.str();
}
