#include "Hora.h"

Hora::Hora(int h, int min): hora(h), minutos(min) {}
Hora:: ~Hora(){}

int Hora::getHora() { return hora; }
int Hora::getMinutos() { return minutos; }
void Hora::setHora(int h) { hora = h; }
void Hora::setMinutos(int min) { minutos = min; }

string Hora::toString() {
	stringstream s;
	s << "Hora de la cita: " << hora << ":" << minutos << endl;
	return s.str();
}