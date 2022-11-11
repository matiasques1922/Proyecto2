#include "Ambulancia.h"

Ambulancia::Ambulancia(string pla, string mar, string cod, bool ocu, double km):Transporte(pla, mar),codigo(cod), ocupado(ocu), kmRecorridos(km) {}
Ambulancia:: ~Ambulancia(){}
string Ambulancia::getCodigo() { return codigo; }
bool Ambulancia::getOcupado() { return ocupado; }
double Ambulancia::getKM() { return kmRecorridos; }

void Ambulancia::setOcupado(bool ocu) { ocupado = ocu; }
void Ambulancia::setKM(double km) { kmRecorridos = km; }

string Ambulancia::toString(){
	stringstream s;
	s << "---------AMBULANCIA-----------" << endl
		<< "Placa: " << placa << endl
		<< "Codigo: " << codigo << endl
		<< "Marca: " << marca << endl;
	if (ocupado == true)
		s << "Estado: Ocupada" << endl;
	else
		s << "Estado: Disponible" << endl;
	s << "Kilometros Recorridos: " << kmRecorridos << endl;
	return s.str();
}
//ida y vuelta