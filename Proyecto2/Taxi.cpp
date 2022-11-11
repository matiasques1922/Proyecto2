#include "Taxi.h"

Taxi::Taxi(string pla, string mar, double dis, char id, int num):Transporte(pla, mar), distancia(dis), idaVuelta(id), numPacientes(num) {} //cobro
Taxi:: ~Taxi(){}

double Taxi::getDistancia() { return distancia; }
char Taxi::getIdaVuelta() { return idaVuelta; }
int Taxi::getNumPacientes() { return numPacientes; }
void Taxi::setDistancia(double dis) { distancia = dis; }
void Taxi::setIdaVuelta(char id) { idaVuelta = id; }
void Taxi::setNumPacientes(int num) { numPacientes = num; }

string Taxi::toString() {
	stringstream s;
	s << "---------AMBULANCIA-----------" << endl
		<< "Placa: " << placa << endl
		<< "Marca: " << marca << endl
		/*<<"Costo: "<<cobroPtr << endl*/
		<< "Numero de Pacientes: " << numPacientes << endl;
	return s.str();
}