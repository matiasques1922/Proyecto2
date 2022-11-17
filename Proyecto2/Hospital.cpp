#include "Hospital.h"

Hospital::Hospital(string hos): nombreHospital(hos) {
	listaAmb = new ListaAmb();
	listaTax = new ListaTax();
	listaProf = new ListaProf();
	listaEst = new ListaEst();
	listaMed = new ListaMed();
	listaCitas = new ListaCitas();
}
Hospital:: ~Hospital() {
	if (listaAmb != NULL)delete listaAmb;
	if (listaTax != NULL)delete listaTax;
	if (listaProf != NULL)delete listaProf;
	if (listaEst != NULL)delete listaEst;
	if (listaMed != NULL)delete listaMed;
	if (listaCitas != NULL)delete listaCitas;

}

ListaAmb* Hospital::getAmb() { return listaAmb; }
ListaTax* Hospital::getTax() { return listaTax; }
ListaProf* Hospital::getProf() { return listaProf; }
ListaEst* Hospital::getEst() { return listaEst; }
ListaMed* Hospital::getMed() { return listaMed; }
ListaCitas* Hospital::getCitas() { return listaCitas; }

void Hospital::ingresarAmb(){
	string cod, pla, mar;
	bool oc = false;
	double kilo = 0;
	cout << "Ingresando una nueva ambulancia..." << endl << endl;
	cout << "Ingrese el codigo de la ambulancia: ";
	cin >> cod;
	cout << "Ingrese la placa de la ambulancia:  ";
	cin >> pla;
	cout << "Ingrese la marca de la ambulancia: ";
	cin >> mar;
	listaAmb->ingresar(new Ambulancia(pla, mar, cod, oc, kilo));
}
void Hospital::ingresarTax(){
	string pla, mar;
	double distancia = 0;
	bool idaVuelta;
	int numPacientes = 0;
	Cobro* cobroPtr;
	cout << "Ingresando un nuevo taxi..." << endl << endl;
	cout << "Ingrese la placa del taxi:  ";
	cin >> pla;
	cout << "Ingrese la marca del taxi: ";
	cin >> mar;
	listaTax->ingresar(new Taxi(pla, mar, distancia, idaVuelta, numPacientes, cobroPtr));
}
void Hospital::ingresarProf(){

}
void Hospital::ingresarEst(){

}
void Hospital::ingresarMed(){
	string ced, nom, ape, num, esp;
	cout << "Ingresando un nuevo medico..." << endl << endl;
	cout << "Ingrese la cedula: ";
	cin >> ced;
	cout << "Ingrese el nombre: ";
	cin >> nom;
	cout << "Ingrese el apellido: ";
	cin >> ape;
	cout << "Ingrese el numero de telefono: ";
	cin >> num;
	cout << "Ingrese la especialidad: ";
	cin >> esp;
	listaMed->ingresar(new Medico(ced, nom, ape, num, esp));
}
void Hospital::crearCita(){

}

string Hospital::toString() {
	stringstream s;
	if (listaCitas != NULL)
		s << listaCitas->toString() << endl;
	if (listaMed != NULL)
		s << listaMed->toString() << endl;
	if (listaEst != NULL)
		s << listaEst->toString() << endl;
	if (listaProf != NULL)
		s << listaProf->toString() << endl;
	if (listaTax != NULL)
		s << listaTax->toString() << endl;
	if (listaAmb != NULL)
		s << listaAmb->toString() << endl;
	return s.str();
}