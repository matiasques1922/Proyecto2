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

Ambulancia* Hospital::buscaAmbulancia(){
	string pla;
	cout << "Buscando una ambulancia..." << endl << endl;
	cout << "Ingrese la placa de la ambulancia que desea buscar: ";
	cin >> pla;
	return listaAmb->buscarPlaca(pla);
}
void Hospital::buscaTaxi(){
	cout << "Buscando un taxi..." << endl << endl;
}
void Hospital::buscaProfP(){}
void Hospital::buscaProfI(){}
void Hospital::buscaEstN(){}
void Hospital::buscaEstIN(){}
void Hospital::buscaMedico(){}
void Hospital::buscaCita(){}

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
	bool idaVuelta = true;
	int numPacientes = 0;
	Cobro* cobroPtr = new Cobro();
	cout << "Ingresando un nuevo taxi..." << endl << endl;
	cout << "Ingrese la placa del taxi:  ";
	cin >> pla;
	cout << "Ingrese la marca del taxi: ";
	cin >> mar;
	listaTax->ingresar(new Taxi(pla, mar, distancia, idaVuelta, numPacientes, cobroPtr));
}
void Hospital::ingresarProfP(){
	string ced, nom, ape, num, uni, tit, cal;
	int ani;
	Transporte* trans = NULL;
	cout << "Ingresando un nuevo profesor en propiedad..." << endl << endl;
	cout << "Ingrese la cedula: ";
	cin >> ced;
	cout << "Ingrese el nombre: ";
	cin >> nom;
	cout << "Ingrese el apellido: ";
	cin >> ape;
	cout << "Ingrese el numero telefonico: ";
	cin >> num;
	cout << "Ingrese la universidad a la que pertenece: ";
	cin >> uni;
	cout << "Ingrese el titulo universitario que posee: ";
	cin >> tit;
	cout << "Ingrese la cantidad de anios que ha trabajado: ";
	cin >> ani;
	cout << "Ingrese el codigo que posee: ";
	cin >> cal;
	listaProf->ingresarP(new PPropiedad(ced, nom, ape, num, uni, trans, tit, ani, cal));
}

void Hospital::ingresarProfI() {
	string ced, nom, ape, num, uni, tit, cal;
	int ani;
	Transporte* trans = NULL;
	cout << "Ingresando un nuevo profesor interino..." << endl << endl;
	cout << "Ingrese la cedula: ";
	cin >> ced;
	cout << "Ingrese el nombre: ";
	cin >> nom;
	cout << "Ingrese el apellido: ";
	cin >> ape;
	cout << "Ingrese el numero telefonico: ";
	cin >> num;
	cout << "Ingrese la universidad a la que pertenece: ";
	cin >> uni;
	cout << "Ingrese el titulo universitario que posee: ";
	cin >> tit;
	cout << "Ingrese la cantidad de anios que ha trabajado: ";
	cin >> ani;
	cout << "Ingrese la calificacion que posee (ej: 99) : ";
	cin >> cal;
	listaProf->ingresarP(new PPropiedad(ced, nom, ape, num, uni, trans, tit, ani, cal));
}

void Hospital::ingresarEstudianteN() {
	string ced, nom, ape, num, uni, cod, ult;
	int est;
	Transporte* trans = NULL;
	cout << "Ingresando un nuevo estudiante nacional..." << endl << endl;
	cout << "Ingrese la cedula: ";
	cin >> ced;
	cout << "Ingrese el nombre: ";
	cin >> nom;
	cout << "Ingrese el apellido: ";
	cin >> ape;
	cout << "Ingrese el numero telefonico: ";
	cin >> num;
	cout << "Ingrese la universidad a la que pertenece: ";
	cin >> uni;
	cout << "Ingrese el codigo de carrera que posee: ";
	cin >> cod;
	cout << "Ingrese el ultimo nivel cursado: ";
	cin >> ult;
	cout << "Ingrese la opcion que corresponda al estado del estudiante: " << endl;
	cout << "1- activo" << endl;
	cout << "2- suspendido" << endl;
	cout << "Digite la opcion: ";
	cin >> est;
	listaEst->ingresarN(new ENacional(ced, nom, ape, num, uni, trans, cod, ult, est));
}

void Hospital::ingresarEstudianteIN() {
	string ced, nom, ape, num, uni, cod, ult, nac;
	int est;
	Transporte* trans = NULL;
	cout << "Ingresando un nuevo estudiante internacional..." << endl << endl;
	cout << "Ingrese la cedula: ";
	cin >> ced;
	cout << "Ingrese el nombre: ";
	cin >> nom;
	cout << "Ingrese el apellido: ";
	cin >> ape;
	cout << "Ingrese el numero telefonico: ";
	cin >> num;
	cout << "Ingrese la universidad a la que pertenece: ";
	cin >> uni;
	cout << "Ingrese el codigo de carrera que posee: ";
	cin >> cod;
	cout << "Ingrese el ultimo nivel cursado: ";
	cin >> ult;
	cout << "Ingrese la nacionalidad: ";
	cin >> nac;
	cout << "Ingrese la opcion que corresponda a la condicion del estudiante: " << endl;
	cout << "1- Exiliado" << endl;
	cout << "2- Refugiado" << endl;
	cout << "Digite la opcion: ";
	cin >> est;
	listaEst->ingresarIN(new EInternacional(ced, nom, ape, num, uni, trans, cod, ult, nac, est));
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

void Hospital::editarAmb() {
	cout << "EDICION DE AMBULANCIAS" << endl;
	Ambulancia* ambu = buscaAmbulancia();
	system("cls");
	cout << "EDICION DE AMBULANCIAS" << endl;
	if (ambu != NULL) {
		cout << "La ambulancia encontrada tiene placa: " << ambu->getPlaca() << endl << endl;
		string cod, pla, mar;
		bool oc = false;
		double kilo = 0;
		int op;
		cout << "Ingrese el nuevo codigo de la ambulancia: ";
		cin >> cod;
		listaAmb->buscarPlaca(ambu->getPlaca())->setCodigo(cod);
		cout << "Ingrese la nueva placa de la ambulancia:  ";
		cin >> pla;
		listaAmb->buscarPlaca(ambu->getPlaca())->setPlaca(pla);
		cout << "Ingrese la nueva marca de la ambulancia: ";
		cin >> mar;
		listaAmb->buscarPlaca(ambu->getPlaca())->setMarca(mar);
		cout << "Ingrese el nuevo kilometraje de la ambulancia: ";
		cin>>kilo;
		listaAmb->buscarPlaca(ambu->getPlaca())->setKM(kilo);
		cout << "Ingrese la opcion que corresponda al nuevo estado de la ambulancia: " << endl;
		cout << "1- Disponible" << endl;
		cout << "2- Ocupado" << endl;
		cout << "Digite la opcion: ";
		cin >> op;
		if (op == 1)
			listaAmb->buscarPlaca(ambu->getPlaca())->setOcupado(false);
		else
			listaAmb->buscarPlaca(ambu->getPlaca())->setOcupado(true);
	}
	else
		cout << "No existe una ambulancia con esa placa" << endl;
}
void Hospital::editarTax() {}
void Hospital::editarProfP() {}
void Hospital::editarProfI() {}
void Hospital::editarEstudianteN() {}
void Hospital::editarEstudianteIN() {}
void Hospital::editarMed() {}
void Hospital::editarCita() {}

void Hospital::eliminarAmb() {}
void Hospital::eliminarTax() {}
void Hospital::eliminarProfP() {}
void Hospital::eliminarProfI() {}
void Hospital::eliminarEstudianteN() {}
void Hospital::eliminarEstudianteIN() {}
void Hospital::eliminarMed() {}
void Hospital::eliminarCita() {}


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