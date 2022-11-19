#include "Taxi.h"

Taxi::Taxi(string pla, string mar, double dis, bool id, int num, Cobro* cob):Transporte(pla, mar), distancia(dis), idaVuelta(id), numPacientes(num), cobroPtr(cob) {} //cobro
Taxi:: ~Taxi() { if (cobroPtr != NULL) delete cobroPtr; }

double Taxi::getDistancia() { return distancia; }
bool Taxi::getIdaVuelta() { return idaVuelta; }
int Taxi::getNumPacientes() { return numPacientes; }
Cobro* Taxi::getCobro() { return cobroPtr; }
void Taxi::setCobro(Cobro* cob) { cobroPtr = cob; }
void Taxi::setDistancia(double dis) { distancia = dis; }
void Taxi::setIdaVuelta(char id) { idaVuelta = id; }
void Taxi::setNumPacientes(int num) { numPacientes = num; }

double Taxi::total() {
	if (idaVuelta = false)
		return cobroPtr->realizaCobro(distancia, numPacientes);
	else
		return cobroPtr->realizaCobro2(distancia, numPacientes);
}

string Taxi::toString() {
	stringstream s;
	s << "-----------TAXI------------" << endl
		<< "Placa: " << placa << endl
		<< "Marca: " << marca << endl
		<< "Numero de Pacientes: " << numPacientes << endl
		<< "Total generado: " << total() << " colones" << endl;
	return s.str();
}