//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include "SALUDUNI.h"
SALUDUNI::SALUDUNI() {
	cedulaJuri = "";
	numeroTele = "";
	direccion = "";
}
SALUDUNI::SALUDUNI(string ced, string num, string dir): cedulaJuri(ced), numeroTele(num), direccion(dir) {
	nombreHospital = "HOSPITAL UNIVERSITARIO";
	listaAmb = new ListaAmb();
	listaTax = new ListaTax();
	listaProf = new ListaProf();
	listaEst = new ListaEst();
	listaMed = new ListaMed();
	listaCitas = new ListaCitas();
}
SALUDUNI:: ~SALUDUNI() {
	if (listaAmb != NULL)delete listaAmb;
	if (listaTax != NULL)delete listaTax;
	if (listaProf != NULL)delete listaProf;
	if (listaEst != NULL)delete listaEst;
	if (listaMed != NULL)delete listaMed;
	if (listaCitas != NULL)delete listaCitas;
}

ListaAmb* SALUDUNI::getAmb() { return listaAmb; }
ListaTax* SALUDUNI::getTax() { return listaTax; }
ListaProf* SALUDUNI::getProf() { return listaProf; }
ListaEst* SALUDUNI::getEst() { return listaEst; }
ListaMed* SALUDUNI::getMed() { return listaMed; }
ListaCitas* SALUDUNI::getCitas() { return listaCitas; }

Ambulancia* SALUDUNI::buscaAmbulancia(){
	string pla;
	cout << "Buscando una ambulancia..." << endl << endl;
	cout << "Ingrese la placa de la ambulancia que desea buscar: ";
	cin >> pla;
	return listaAmb->buscarPlaca(pla);
}
Taxi* SALUDUNI::buscaTaxi(){
	string pla;
	cout << "Buscando un taxi..." << endl << endl;
	cout << "Ingrese la placa del taxi que desea buscar: ";
	cin >> pla;
	return listaTax->buscarPlaca(pla);
}
//PPropiedad* SALUDUNI::buscaProfP(){
//	string ced;
//	cout << "Buscando un profesor en propiedad..." << endl << endl;
//	cout << "Ingrese la cedula del profesor que desea buscar: ";
//	cin >> ced;
//	return listaProf->buscarCed(ced);
//}
Profesor* SALUDUNI::buscaProf(){
	string ced;
	cout << "Buscando un profesor interino..." << endl << endl;
	cout << "Ingrese la cedula del profesor que desea buscar: ";
	cin >> ced;
	return listaProf->buscarCed(ced);
}
//ENacional* SALUDUNI::buscaEstN(){
//	string ced;
//	cout << "Buscando un estudiante nacional..." << endl << endl;
//	cout << "Ingrese la cedula del estudiante que desea buscar: ";
//	cin >> ced;
//	return listaEst->buscarCed(ced);
//}
Estudiante* SALUDUNI::buscaEst(){
	string ced;
	cout << "Buscando un estudiante internacional..." << endl << endl;
	cout << "Ingrese el numero de pasaporte del estudiante que desea buscar: ";
	cin >> ced;
	return listaEst->buscarCed(ced);
}
Medico* SALUDUNI::buscaMedico(){
	string ced;
	cout << "Buscando un medico..." << endl << endl;
	cout << "Ingrese la cedula del medico que desea buscar: ";
	cin >> ced;
	return listaMed->buscarCed(ced);
}

void SALUDUNI::ingresarAmb(){
	string cod, pla, mar;
	bool oc = false;
	double kilo = 0;
	cout << "Ingresando una nueva ambulancia..." << endl << endl;
	cout << "Ingrese la placa de la ambulancia:  ";
	cin >> pla;
	if (listaAmb->buscarPlaca(pla) == NULL) {
		cout << "Ingrese el codigo de la ambulancia: ";
		cin >> cod;
		cout << "Ingrese la marca de la ambulancia: ";
		cin >> mar;
		listaAmb->ingresar(new Ambulancia(pla, mar, cod, oc, kilo));
	}
	else {
		cout << "Ya existe una ambulancia con esta placa" << endl;
		system("pause");
	}
}
void SALUDUNI::ingresarTax(){
	string pla, mar;
	double distancia = 0;
	bool idaVuelta = true;
	int numPacientes = 0;
	Cobro* cobroPtr = new Cobro();
	cout << "Ingresando un nuevo taxi..." << endl << endl;
	cout << "Ingrese la placa del taxi:  ";
	cin >> pla;
	if (listaTax->buscarPlaca(pla) == NULL) {
		cout << "Ingrese la marca del taxi: ";
		cin >> mar;
		listaTax->ingresar(new Taxi(pla, mar, distancia, idaVuelta, numPacientes, cobroPtr));
	}
	else {
		cout << "Ya existe un taxi con esta placa" << endl;
		system("pause");
	}
}
void SALUDUNI::ingresarProfP(){
	string ced, nom, ape, num, uni, tit, cal;
	int ani;
	Transporte* trans = NULL;
	cout << "Ingresando un nuevo profesor en propiedad..." << endl << endl;
	cout << "Ingrese la cedula: ";
	cin >> ced;
	if (listaEst->buscarCed(ced) == NULL && listaProf->buscarCed(ced) == NULL && listaMed->buscarCed(ced) == NULL) {
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
	else {
		cout << "Ya existe un profesor con esta cedula" << endl;
		system("pause");
	}
}

void SALUDUNI::ingresarProfI() {
	string ced, nom, ape, num, uni, tit, cal;
	int ani;
	Transporte* trans = NULL;
	cout << "Ingresando un nuevo profesor interino..." << endl << endl;
	cout << "Ingrese la cedula: ";
	cin >> ced;
	if (listaEst->buscarCed(ced) == NULL && listaProf->buscarCed(ced) == NULL && listaMed->buscarCed(ced) == NULL) {
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
		listaProf->ingresarI(new PInterino(ced, nom, ape, num, uni, trans, tit, ani, cal));
	}
	else {
		cout << "Ya existe un profesor con esta cedula" << endl;
		system("pause");
	}
}

void SALUDUNI::ingresarEstudianteN() {
	string ced, nom, ape, num, uni, cod, ult;
	int est;
	Transporte* trans = NULL;
	cout << "Ingresando un nuevo estudiante nacional..." << endl << endl;
	cout << "Ingrese la cedula: ";
	cin >> ced;
	if (listaEst->buscarCed(ced) == NULL && listaProf->buscarCed(ced) == NULL && listaMed->buscarCed(ced) == NULL) {
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
	else {
		cout << "Ya existe un estudiante con esta cedula" << endl;
		system("pause");
	}
}

void SALUDUNI::ingresarEstudianteIN() {
	string ced, nom, ape, num, uni, cod, ult, nac;
	int est;
	Transporte* trans = NULL;
	cout << "Ingresando un nuevo estudiante internacional..." << endl << endl;
	cout << "Ingrese el numero de pasaporte: ";
	cin >> ced;
	if (listaEst->buscarCed(ced) == NULL && listaProf->buscarCed(ced) == NULL && listaMed->buscarCed(ced) == NULL) {
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
		listaEst->ingresarIN(new EInternacional(ced, nom, ape, num, uni, trans, cod, ult, est, nac));
	}
	else {
		cout << "Ya existe un estudiante con este numero de pasaporte" << endl;
		system("pause");
	}
}

void SALUDUNI::ingresarMed(){
	string ced, nom, ape, num, esp;
	cout << "Ingresando un nuevo medico..." << endl << endl;
	cout << "Ingrese la cedula: ";
	cin >> ced;
	if (listaMed->buscarCed(ced) == NULL && listaEst->buscarCed(ced) == NULL && listaProf->buscarCed(ced) == NULL){
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
	else {
		cout << "Ya existe un medico con esta cedula" << endl;
		system("pause");
	}
}


void SALUDUNI::editarAmb() {
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
		cout << "Ingrese la nueva placa de la ambulancia:  ";
		cin >> pla;
		if (listaAmb->buscarPlaca(pla) == NULL) {
		listaAmb->buscarPlaca(ambu->getPlaca())->setPlaca(pla);
		cout << "Ingrese el nuevo codigo de la ambulancia: ";
		cin >> cod;
		listaAmb->buscarPlaca(ambu->getPlaca())->setCodigo(cod);
		cout << "Ingrese la nueva marca de la ambulancia: ";
		cin >> mar;
		listaAmb->buscarPlaca(ambu->getPlaca())->setMarca(mar);
		cout << "Ingrese el nuevo kilometraje de la ambulancia: ";
		cin >> kilo;
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
		else {
			cout << "Ya existe una ambulancia con esta placa" << endl;
			system("pause");
		}
	}
	else{
		cout << "No existe una ambulancia con esa placa" << endl;
	system("pause");
}
}
void SALUDUNI::editarTax() {
	cout << "EDICION DE TAXIS" << endl;
	Taxi* taxi = buscaTaxi();
	system("cls");
	cout << "EDICION DE TAXIS" << endl;
	if (taxi != NULL) {
		cout << "El taxi encontrado tiene placa: " << taxi->getPlaca() << endl << endl;
		string pla, mar;
		double distancia = 0;
		bool idaVuelta = true;
		int numPacientes = 0;
		double total;
		cout << "Ingrese la nueva placa del taxi:  ";
		cin >> pla;
		if (listaTax->buscarPlaca(pla) == NULL) {
			listaTax->buscarPlaca(taxi->getPlaca())->setPlaca(pla);
			cout << "Ingrese la nueva marca del taxi: ";
			cin >> mar;
			listaTax->buscarPlaca(taxi->getPlaca())->setMarca(mar);
			cout << "Ingrese la nueva distancia recorrida del taxi: ";
			cin >> distancia;
			listaTax->buscarPlaca(taxi->getPlaca())->setDistancia(distancia);
			cout << "Ingrese la nueva cantidad de pacientes que posee el taxi: ";
			cin >> numPacientes;
			listaTax->buscarPlaca(taxi->getPlaca())->setNumPacientes(numPacientes);
			cout << "Ingrese el nuevo total de dinero generado por el taxi: ";
			cin >> total;
			listaTax->buscarPlaca(taxi->getPlaca())->getCobro()->setTotal(total);
		}
		else {
			cout << "Ya existe un taxi con esa placa" << endl;
			system("pause");
		}

	}
	else{
		cout << "No existe un taxi con esa placa" << endl;
	system("pause");
}
}
void SALUDUNI::editarProfP() {
	cout << "EDICION DE PROFESORES EN PROPIEDAD" << endl;
	Profesor* prof = buscaProf();
	system("cls");
	cout << "EDICION DE PROFESORES EN PROPIEDAD" << endl;
	if (prof != NULL) {
		cout << "El profesor encontrado tiene cedula: " << prof->getCedula() << endl << endl;
		string ced, nom, ape, num, uni, tit, cal;
		int ani;
		cout << "Ingrese la nueva cedula: ";
		cin >> ced;
		if (listaEst->buscarCed(ced) == NULL && listaProf->buscarCed(ced) == NULL && listaMed->buscarCed(ced) == NULL) {
			listaProf->buscarCed(prof->getCedula())->setCedula(ced);
			cout << "Ingrese el nuevo nombre: ";
			cin >> nom;
			listaProf->buscarCed(prof->getCedula())->setNombre(nom);
			cout << "Ingrese el nuevo apellido: ";
			cin >> ape;
			listaProf->buscarCed(prof->getCedula())->setApellido(ape);
			cout << "Ingrese el nuevo numero telefonico: ";
			cin >> num;
			listaProf->buscarCed(prof->getCedula())->setNumeroT(num);
			cout << "Ingrese la nueva universidad a la que pertenece: ";
			cin >> uni;
			listaProf->buscarCed(prof->getCedula())->setUniversidad(uni);
			cout << "Ingrese el nuevo titulo universitario que posee: ";
			cin >> tit;
			listaProf->buscarCed(prof->getCedula())->setTitulo(tit);
			cout << "Ingrese la nueva cantidad de anios que ha trabajado: ";
			cin >> ani;
			listaProf->buscarCed(prof->getCedula())->setAniosLab(ani);
			cout << "Ingrese el nuevo codigo que posee: ";
			cin >> cal;
			listaProf->buscarCed(prof->getCedula())->setCodigo(cal);
		}
		else {
			cout << "Ya existe un profesor con esta cedula" << endl;
			system("pause");
		}
	}
	else {
		cout << "No existe un profesor con esa cedula" << endl;
		system("pause");
	}
}
void SALUDUNI::editarProfI() {
	cout << "EDICION DE PROFESORES INTERINOS" << endl;
	Profesor* prof = buscaProf();
	system("cls");
	cout << "EDICION DE PROFESORES INTERINOS" << endl;
	if (prof != NULL) {
		cout << "El profesor encontrado tiene cedula: " << prof->getCedula() << endl << endl;
		string ced, nom, ape, num, uni, tit, cal;
		int ani;
		cout << "Ingrese la nueva cedula: ";
		cin >> ced;
		if (listaEst->buscarCed(ced) == NULL && listaProf->buscarCed(ced) == NULL && listaMed->buscarCed(ced) == NULL) {
			listaProf->buscarCed(prof->getCedula())->setCedula(ced);
			cout << "Ingrese el nuevo nombre: ";
			cin >> nom;
			listaProf->buscarCed(prof->getCedula())->setNombre(nom);
			cout << "Ingrese el nuevo apellido: ";
			cin >> ape;
			listaProf->buscarCed(prof->getCedula())->setApellido(ape);
			cout << "Ingrese el nuevo numero telefonico: ";
			cin >> num;
			listaProf->buscarCed(prof->getCedula())->setNumeroT(num);
			cout << "Ingrese la nueva universidad a la que pertenece: ";
			cin >> uni;
			listaProf->buscarCed(prof->getCedula())->setUniversidad(uni);
			cout << "Ingrese el nuevo titulo universitario que posee: ";
			cin >> tit;
			listaProf->buscarCed(prof->getCedula())->setTitulo(tit);
			cout << "Ingrese la nueva cantidad de anios que ha trabajado: ";
			cin >> ani;
			listaProf->buscarCed(prof->getCedula())->setAniosLab(ani);
			cout << "Ingrese el nuevo codigo que posee: ";
			cin >> cal;
			listaProf->buscarCed(prof->getCedula())->setCodigo(cal);
		}
		else {
			cout << "Ya existe un profesor con esta cedula" << endl;
			system("pause");
		}
	}
	else{
		cout << "No existe un profesor con esa cedula" << endl;
		system("pause");
}
}
void SALUDUNI::editarEstudianteN() {
	cout << "EDICION DE ESTUDIANTES NACIONALES" << endl;
	Estudiante* est = buscaEst();
	system("cls");
	cout << "EDICION DE ESTUDIANTES NACIONALES" << endl;
	if (est != NULL) {
		cout << "El estudiante encontrado tiene cedula: " << est->getCedula() << endl << endl;
		string ced, nom, ape, num, uni, cod, ult;
		int estu;
		cout << "Ingrese la nueva cedula: ";
		cin >> ced;
		if (listaEst->buscarCed(ced) == NULL && listaProf->buscarCed(ced) == NULL && listaMed->buscarCed(ced) == NULL) {
			listaEst->buscarCed(est->getCedula())->setCedula(ced);
			cout << "Ingrese el nuevo nombre: ";
			cin >> nom;
			listaEst->buscarCed(est->getCedula())->setNombre(nom);
			cout << "Ingrese el nuevo apellido: ";
			cin >> ape;
			listaEst->buscarCed(est->getCedula())->setApellido(ape);
			cout << "Ingrese el nuevo numero telefonico: ";
			cin >> num;
			listaEst->buscarCed(est->getCedula())->setNumeroT(num);
			cout << "Ingrese la nueva universidad a la que pertenece: ";
			cin >> uni;
			listaEst->buscarCed(est->getCedula())->setUniversidad(uni);
			cout << "Ingrese el nuevo codigo de carrera que posee: ";
			cin >> cod;
			listaEst->buscarCed(est->getCedula())->setCodigo(cod);
			cout << "Ingrese el nuevo ultimo nivel cursado: ";
			cin >> ult;
			listaEst->buscarCed(est->getCedula())->setUltimo(ult);
			cout << "Ingrese la opcion que corresponda al nuevo estado del estudiante: " << endl;
			cout << "1- activo" << endl;
			cout << "2- suspendido" << endl;
			cout << "Digite la opcion: ";
			cin >> estu;
			if (estu == 1)
				listaEst->buscarCed(est->getCedula())->setEstado(1);
			else
				listaEst->buscarCed(est->getCedula())->setEstado(2);
		}
		else {
			cout << "Ya existe un estudiante con esta cedula" << endl;
			system("pause");
		}
	}
	else{
		cout << "No existe un estudiante con esa cedula" << endl;
	system("pause");
}
}
void SALUDUNI::editarEstudianteIN() {
	cout << "EDICION DE ESTUDIANTES INTERNACIONALES" << endl;
	Estudiante* est = buscaEst();
	system("cls");
	cout << "EDICION DE ESTUDIANTES INTERNACIONALES" << endl;
	if (est != NULL) {
		cout << "El estudiante encontrado tiene numero de pasaporte: " << est->getCedula() << endl << endl;
		string ced, nom, ape, num, uni, cod, ult;
		int estu;
		Transporte* trans = NULL;
		cout << "Ingrese el nuevo numero de pasaporte: ";
		cin >> ced;
		if (listaEst->buscarCed(ced) == NULL && listaProf->buscarCed(ced) == NULL && listaMed->buscarCed(ced) == NULL) {
			listaEst->buscarCed(est->getCedula())->setCedula(ced);
			cout << "Ingrese el nuevo nombre: ";
			cin >> nom;
			listaEst->buscarCed(est->getCedula())->setNombre(nom);
			cout << "Ingrese el nuevo apellido: ";
			cin >> ape;
			listaEst->buscarCed(est->getCedula())->setApellido(ape);
			cout << "Ingrese el nuevo numero telefonico: ";
			cin >> num;
			listaEst->buscarCed(est->getCedula())->setNumeroT(num);
			cout << "Ingrese la nueva universidad a la que pertenece: ";
			cin >> uni;
			listaEst->buscarCed(est->getCedula())->setUniversidad(uni);
			cout << "Ingrese el nuevo codigo de carrera que posee: ";
			cin >> cod;
			listaEst->buscarCed(est->getCedula())->setCodigo(cod);
			cout << "Ingrese el nuevo ultimo nivel cursado: ";
			cin >> ult;
			listaEst->buscarCed(est->getCedula())->setUltimo(ult);
			cout << "Ingrese la opcion que corresponda a la nueva condicion del estudiante: " << endl;
			cout << "1- exiliado" << endl;
			cout << "2- refugiado" << endl;
			cout << "Digite la opcion: ";
			cin >> estu;
			if (estu == 1)
				listaEst->buscarCed(est->getCedula())->setEstado(1);
			else
				listaEst->buscarCed(est->getCedula())->setEstado(2);
		}
		else {
			cout << "Ya existe un estudiante con esta cedula" << endl;
			system("pause");
		}
	}
	else {
		cout << "No existe un estudiante con ese numero de pasaporte" << endl;
		system("pause");
	}
}
void SALUDUNI::editarMed() {
	cout << "EDICION DE MEDICOS" << endl;
	Medico* med = buscaMedico();
	system("cls");
	cout << "EDICION DE MEDICOS" << endl;
	if (med != NULL) {
		cout << "El medico encontrado tiene cedula: " << med->getCedula() << endl << endl;
		string ced, nom, ape, num, esp;
		cout << "Ingrese la nueva cedula: ";
		cin >> ced;
		if (listaEst->buscarCed(ced) == NULL && listaProf->buscarCed(ced) == NULL && listaMed->buscarCed(ced) == NULL) {
			listaMed->buscarCed(med->getCedula())->setCedula(ced);
			cout << "Ingrese el nuevo nombre: ";
			cin >> nom;
			listaMed->buscarCed(med->getCedula())->setNombre(nom);
			cout << "Ingrese el nuevo apellido: ";
			cin >> ape;
			listaMed->buscarCed(med->getCedula())->setApellido(ape);
			cout << "Ingrese el nuevo numero de telefono: ";
			cin >> num;
			listaMed->buscarCed(med->getCedula())->setNumeroT(num);
			cout << "Ingrese la nueva especialidad: ";
			cin >> esp;
			listaMed->buscarCed(med->getCedula())->setEspecialidad(esp);
		}
		else {
			cout << "Ya existe un medico con esta cedula" << endl;
			system("pause");
		}
	}
	else {
		cout << "No existe un medico con esa cedula" << endl;
		system("pause");
	}
}

void SALUDUNI::eliminarAmb() {
	string pla;
	cout << "Ingrese la placa de la ambulancia que desea eliminar: ";
	cin >> pla;
	if (listaAmb->eliminarAmb(pla)) {
		cout << "Se elimino correctamente" << endl;
		system("pause");
	}
	else {
		cout << "No se encontro la ambulancia a eliminar" << endl;
		system("pause");
	}
}
void SALUDUNI::eliminarTax() {
	string pla;
	cout << "Ingrese la placa del taxi que desea eliminar: ";
	cin >> pla;
	if (listaTax->eliminarTax(pla)) {
		cout << "Se elimino correctamente" << endl;
		system("pause");
	}
	else {
		cout << "No se encontro el taxi a eliminar" << endl;
		system("pause");
	}
}
void SALUDUNI::eliminarProfP() {
	string ced;
	cout << "Ingrese la cedula del profesor que desea eliminar: ";
	cin >> ced;
	if (listaProf->eliminarProfP(ced)) {
		cout << "Se elimino correctamente" << endl;
		system("pause");
	}
	else {
		cout << "No se encontro el profesor a eliminar" << endl;
		system("pause");
	}
}
void SALUDUNI::eliminarProfI() {
	string ced;
	cout << "Ingrese la cedula del profesor que desea eliminar: ";
	cin >> ced;
	if (listaProf->eliminarProfI(ced)) {
		cout << "Se elimino correctamente" << endl;
		system("pause");
	}
	else {
		cout << "No se encontro el profesor a eliminar" << endl;
		system("pause");
	}
}
void SALUDUNI::eliminarEstudianteN() {
	string ced;
	cout << "Ingrese la cedula del estudiante que desea eliminar: ";
	cin >> ced;
	if (listaEst->eliminarEstN(ced)) {
		cout << "Se elimino correctamente" << endl;
		system("pause");
	}
	else {
		cout << "No se encontro el estudiante a eliminar" << endl;
		system("pause");
	}
}
void SALUDUNI::eliminarEstudianteIN() {
	string ced;
	cout << "Ingrese el numero de pasaporte del estudiante que desea eliminar: ";
	cin >> ced;
	if (listaEst->eliminarEstIN(ced)) {
		cout << "Se elimino correctamente" << endl;
		system("pause");
	}
	else {
		cout << "No se encontro el estudiante a eliminar" << endl;
		system("pause");
	}
}
void SALUDUNI::eliminarMed() {
	string ced;
	cout << "Ingrese la cedula del medico que desea eliminar: ";
	cin >> ced;
	if (listaMed->eliminarMed(ced)) {
		cout << "Se elimino correctamente" << endl;
		system("pause");
	}
	else {
		cout << "No se encontro el medico a eliminar" << endl;
		system("pause");
	}
}

void SALUDUNI::crearCita() {
	/*Paciente* pac = new EInternacional()*/
	string ced, esp, cod, pla;
	int dia, mes, anio, hora, min, numP;
	double dis;
	int op4 = 0;
	int op3 = 0;
	int op2 = 0;
	int op = 0;
	int opc = 0;
	Cita* cita;
	Medico* med = NULL;
	Paciente* pac = NULL;
	Fecha* fec = NULL;
	Hora* hor = NULL;
	Transporte* trans = NULL;
	cout << "Creando una nueva cita..." << endl;
	cout << "Ingrese el codigo de la cita: " << endl;
	cin >> cod;
	if (listaCitas->buscarCod(cod) == NULL) {
		while (op != 1 && op != 2 && op != 3 && op != 4) {
			system("cls");
			cout << "TIPOS DE PACIENTES " << endl;
			cout << "1- Profesor en propiedad" << endl;
			cout << "2- Profesor interino" << endl;
			cout << "3- Estudiante nacional" << endl;
			cout << "4- Estudiante internacional" << endl << endl;
			cout << "Ingrese la opcion que contiene el tipo de paciente con el que se creara la cita:";
			cin >> op;
		}
		if (op == 1) {
			system("cls");
			cout << listaProf->propiedad() << endl;
			cout << "Basandose en la base de datos..." << endl;
			cout << "Ingrese la cedula del profesor con el que se creara la cita: ";
			cin >> ced;
			pac = listaProf->buscarCed(ced);
		}
		if (op == 2) {
			system("cls");
			cout << listaProf->interino() << endl;
			cout << "Basandose en la base de datos..." << endl;
			cout << "Ingrese la cedula del profesor con el que se creara la cita: ";
			cin >> ced;
			pac = listaProf->buscarCed(ced);
		}
		if (op == 3) {
			system("cls");
			cout << listaEst->nacional() << endl;
			cout << "Basandose en la base de datos..." << endl;
			cout << "Ingrese la cedula del estudiante con el que se creara la cita: ";
			cin >> ced;
			pac = listaEst->buscarCed(ced);
		}
		if (op == 4) {
			system("cls");
			cout << listaEst->internacional() << endl;
			cout << "Basandose en la base de datos..." << endl;
			cout << "Ingrese el numero de pasaporte del estudiante con el que se creara la cita: ";
			cin >> ced;
			pac = listaEst->buscarCed(ced);

		}
		if (pac != NULL) {
			system("cls");
			cout << listaMed->toString() << endl;
			cout << "Basandose en la base de datos..." << endl;
			cout << "Ingrese la especialidad del medico con el que se creara la cita: ";
			cin >> esp;
			med = listaMed->buscarEsp(esp);
			if (listaMed->buscarEsp(esp) != NULL) {
				system("cls");
				cout << "Ingrese el dia en el que sera la cita: ";
				cin >> dia;
				cout << "Ingrese el mes en el que sera la cita: ";
				cin >> mes;
				cout << "Ingrese el anio en el que sera la cita: ";
				cin >> anio;
				fec = new Fecha(dia, mes, anio);
				cout << "Ingrese la hora a la que sera la cita: ";
				cin >> hora;
				cout << "Termine de ingresar la hora ingresando los minutos si la hora es (" << hora << ":XX) :";
				cin >> min;
				hor = new Hora(hora, min);
				while (opc != 1 && opc != 2 && opc != 3) {
					system("cls");
					cout << "TIPOS DE TRANSPORTE" << endl;
					cout << "1- Propio" << endl;
					cout << "2- Taxi" << endl;
					cout << "3- Ambulancia" << endl << endl;
					cout << "Ingrese la opcion que refiere al tipo de transporte que requiere el paciente: ";
					cin >> opc;
				}
				if (opc == 1) {
					system("cls");
					cout << "Se selecciono transporte propio" << endl;
					pac->setTipoTransporte(1);
					pac->setTransporte(trans);
					cita = new Cita(cod, pac, med, fec, hor);
					listaCitas->ingresar(cita);
					cout << "Cita Ingresada con Exito" << endl;
					system("pause");
				}
				if (opc == 2) {
					system("cls");
					pac->setTipoTransporte(2);
					cout << listaTax->toString() << endl;
					cout << "Basandose en la base de datos..." << endl;
					cout << "Ingrese la placa del taxi que usara el paciente: ";
					cin >> pla;
					trans = listaTax->buscarPlaca(pla);
					if (trans != NULL) {
						cout << "Ingrese el numero de pasajeros que tendra el taxi: ";
						cin >> numP;
						listaTax->buscarPlaca(pla)->setNumPacientes(numP);
						cout << "Ingrese la distancia de la ruta a recorrer por el taxi (solo ida o vuelta): ";
						cin >> dis;
						listaTax->buscarPlaca(pla)->setDistancia(dis);
						while (op2 != 1 && op2 != 2) {
							system("cls");
							cout << "OPCIONES" << endl;
							cout << "1- Ida o Vuelta" << endl;
							cout << "2- Ida y Vuelta" << endl << endl;
							cout << "Ingrese la opcion que corresponde al tipo de viaje que se realizara: ";
							cin >> op2;
						}
						if (op2 == 1) {
							listaTax->buscarPlaca(pla)->setIdaVuelta(false);
							listaTax->buscarPlaca(pla)->getCobro()->realizaCobro(dis, numP);
							cout << "El cobro total del viaje sera: " << listaTax->buscarPlaca(pla)->getCobro()->getTotal() << " colones" << endl;
							cout << "Y el viaje sera solo de ida o vuelta" << endl;
							system("pause");
						}
						if (op2 == 2) {
							listaTax->buscarPlaca(pla)->setIdaVuelta(true);
							listaTax->buscarPlaca(pla)->getCobro()->realizaCobro2(dis, numP);
							cout << "El cobro total del viaje sera: " << listaTax->buscarPlaca(pla)->getCobro()->getTotal() << " colones" << endl;
							cout << "Y el viaje sera de ida y vuelta" << endl;
							system("pause");
						}
						system("cls");
						trans = listaTax->buscarPlaca(pla);
						pac->setTransporte(trans);
						cita = new Cita(cod, pac, med, fec, hor);
						listaCitas->ingresar(cita);
						cout << "Cita Ingresada con Exito" << endl;
						system("pause");
					}
					else {
						cout << "No existe un taxi con esa placa" << endl;
						system("pause");
					}
				}
				if (opc == 3) {
					system("cls");
					pac->setTipoTransporte(3);
					cout << listaAmb->toString() << endl;
					cout << "Basandose en la base de datos..." << endl;
					cout << "Ingrese la placa de la ambulancia que usara el paciente: ";
					cin >> pla;
					trans = listaAmb->buscarPlaca(pla);
					if (trans != NULL && listaAmb->buscarPlaca(pla)->getOcupado() == false) {
						cout << "Ingrese la distancia de la ruta a recorrer por la ambulancia (solo ida o vuelta): ";
						cin >> dis;
						listaAmb->buscarPlaca(pla)->setKM(dis);
						listaAmb->buscarPlaca(pla)->setOcupado(true);
						cout << "El estado de la ambulancia ahora es: Ocupado" << endl;
						system("pause");
					
						while (op4 != 1 && op4 != 2) {
							system("cls");
							cout << "OPCIONES" << endl;
							cout << "1- Ida o Vuelta" << endl;
							cout << "2- Ida y Vuelta" << endl;
							cout << "Ingrese la opcion que corresponde al tipo de viaje que se realizara: ";
							cin >> op4;
						}
						if (op4 == 1) {
							listaAmb->buscarPlaca(pla)->setIdaVuelta(false);
							cout << "El viaje sera de: Solo ida o vuelta" << endl;
							system("pause");
						}
						if (op4 == 2) {
							listaAmb->buscarPlaca(pla)->setIdaVuelta(true);
							cout << "El viaje sera de: Ida y vuelta" << endl;
							system("pause");
						}
						system("cls");
						trans = listaAmb->buscarPlaca(pla);
						pac->setTransporte(trans);
						cita = new Cita(cod, pac, med, fec, hor);
						listaCitas->ingresar(cita);
						cout << "Cita Ingresada con Exito" << endl;
						system("pause");
					}
					else {
						if (listaAmb->buscarPlaca(pla)->getOcupado() == true){
							cout << "La ambulancia especificada se encuentra ocupada" << endl;
						system("pause");
					}
						else {
							cout << "No existe una ambulancia con esa placa" << endl;
							system("pause");
						}
					}
				}
			}
			else {
				cout << "No se encontro un medico con esa especialidad" << endl;
				system("pause");
			}
		} else{
			cout << "No existe un paciente que cumpla con esos datos" << endl;
			system("pause");
		}
	}
	else {
		cout << "Ya existe una cita con ese codigo" << endl;
		system("pause");
	}
}

void SALUDUNI::historialCitas() {
	string ced;
	cout << "Ingrese la cedula/numero de pasaporte, del paciente del cual desea obtener su historial de citas: ";
	cin >> ced;
	cout << listaCitas->historialP(ced) << endl;
	system("pause");
}

void SALUDUNI::eliminarCita() {
	string cod;
	cout << "Ingrese el codigo de la cita que desea cancelar: ";
	cin >> cod;
	if (listaCitas->eliminarCita(cod)) {
		cout << "Se elimino correctamente" << endl;
		system("pause");
	}
	else {
		cout << "No se encontro la cita a cancelar" << endl;
		system("pause");
	}
}

string SALUDUNI::todasCitas() {
	stringstream s;
	s << listaCitas->toString() << endl;
	return s.str();
}

Cita* SALUDUNI::buscaCita() {
	string cod;
	cout << "Buscando una cita..." << endl << endl;
	cout << "Ingrese el codigo de la cita que desea buscar: ";
	cin >> cod;
	return NULL;
}

string SALUDUNI::pacientes() {
	stringstream s;
	s << listaEst->nacional() << endl
		<< listaEst->internacional() << endl
		<< listaProf->propiedad() << endl
		<< listaProf->interino() << endl;
	return s.str();
}

string SALUDUNI::medicos() {
	stringstream s;
	s << listaMed->toString() << endl;
	return s.str();
}

string SALUDUNI::transporte() {
	stringstream s;
	s << listaTax->toString() << endl
		<< listaAmb->toString() << endl;
	return s.str();
}

void SALUDUNI::busquedaEspecifica() {
	int op = 0;
	int op2 = 0;
	int op3 = 0;
	while (op != 1 && op != 2 && op != 3) {
		system("cls");
		cout << "BUSQUEDA ESPECIFICA" << endl;
		cout << "1- Pacientes" << endl;
		cout << "2- Medicos" << endl;
		cout << "3- Transporte" << endl << endl;
		cout << "Ingrese la opcion que corresponde a el termino que desea buscar: ";
		cin >> op;
	}
	if (op == 1) {
		while (op2 != 4 && op2 != 3 && op2 != 2 && op2 != 1) {
			system("cls");
			cout << "TIPOS DE PACIENTES" << endl;
			cout << "1- Profesor en propiedad" << endl;
			cout << "2- Profesor interino" << endl;
			cout << "3- Estudiante nacional" << endl;
			cout << "4- Estudiante internacional" << endl << endl;
			cout << "Ingrese la opcion que corresponde al tipo de paciente a buscar: ";
			cin >> op2;
		}
		if (op2 == 1) {
			system("cls");
			Profesor* prof = buscaProf();
			if (prof != NULL) {
				cout << prof->toString() << endl;
				system("pause");
			}
			else {
				cout << "No se encontro un profesor con esa cedula" << endl;
				system("pause");
			}
		}
		if (op2 == 2) {
			system("cls");
			Profesor* prof = buscaProf();
			if (prof != NULL) {
				cout << prof->toString() << endl;
				system("pause");
			}
			else {
				cout << "No se encontro un profesor con esa cedula" << endl;
				system("pause");
			}
		}
		if (op2 == 3) {
			system("cls");
			Estudiante* est = buscaEst();
			if (est != NULL) {
				cout << est->toString() << endl;
				system("pause");
			}
			else {
				cout << "No se encontro un estudiante con esa cedula" << endl;
				system("pause");
			}
		}
		if (op2 == 4) {
			system("cls");
			Estudiante* est = buscaEst();
			if (est != NULL) {
				cout << est->toString() << endl;
				system("pause");
			}
			else {
				cout << "No se encontro un estudiante con ese numero de pasaporte" << endl;
				system("pause");
			}
		}
	}
	if (op == 2) {
		system("cls");
		Medico* med = buscaMedico();
		if (med != NULL) {
			cout << med->toString() << endl;
			system("pause");
		}
		else {
			cout << "No se encontro un medico con esa cedula" << endl;
			system("pause");
		}
	}
	if (op == 3) {
		while (op3 != 1 && op3 != 2) {
			system("cls");
			cout << "TIPOS DE TRANSPORTE" << endl;
			cout << "1- Taxi" << endl;
			cout << "2- Ambulancia" << endl << endl;
			cout << "Ingrese la opcion que corresponde al tipo de transporte a buscar: ";
			cin >> op3;
		}
		if (op3 == 1) {
			system("cls");
			Taxi* tax = buscaTaxi();
			if (tax != NULL) {
				cout << tax->toString() << endl;
				system("pause");
			}
			else {
				cout << "No se encontro un taxi con esa placa" << endl;
				system("pause");
			}
		}
		if (op3 == 2) {
			system("cls");
			Ambulancia* amb = buscaAmbulancia();
			if (amb != NULL) {
				cout << amb->toString() << endl;
				system("pause");
			}
			else {
				cout << "No se encontro una ambulancia con esa placa" << endl;
				system("pause");
			}
		}
	}

}

void SALUDUNI::reporteTotal() {
	cout << "REPORTE TOTAL DE DINERO RECAUDADO POR TAXIS" << endl << endl;
	cout << "El total recaudado por taxis es de: " << listaTax->totalRecaudado() << " colones" << endl;
	system("pause");
}
void SALUDUNI::reporteMasCitas() {
	cout << "REPORTE PERSONA CON MAS CITAS EN EL HOSPITAL" << endl << endl;
	listaCitas->masCitas();
	system("pause");
}
void SALUDUNI::reporteFecha() {
	cout << "REPORTE FECHA CON MAS ASISTENCIAS" << endl << endl;
	listaCitas->FechaMas();
	system("pause");
}
void SALUDUNI::reporteTipoMas() {
	cout << "REPORTE TIPO DE TRANSPORTE MAS UTILIZADO" << endl << endl;
	listaCitas->transMas();
	system("pause");
}
void SALUDUNI::reporteAmbuOcupadas() {
	cout << "REPORTE AMBULANCIAS OCUPADAS" << endl << endl;
	cout << listaAmb->ocupadas() << endl;
	system("pause");
}
void SALUDUNI::reporteInterinosMejorC() {
	cout << "REPORTE PROFESORES INTERINOS MEJOR CALIFICADOS" << endl << endl;
	listaProf->mejoresCali();
	system("pause");
}
void SALUDUNI::reporteEstExiliados() {
	cout << "REPORTE ESTUDIANTES EXILIADOS" << endl << endl;
	cout << listaEst->exiliados() << endl;
	system("pause");
}


string SALUDUNI::toString() {
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