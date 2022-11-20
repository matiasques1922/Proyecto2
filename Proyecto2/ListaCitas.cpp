//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include "ListaCitas.h"

ListaCitas::ListaCitas() {
	ppio = NULL;
	cont = 0;
}
ListaCitas:: ~ListaCitas() {}

void ListaCitas::ingresar(Cita* ptr) {
	ppio = new NodoCit(ptr, ppio);
	cont++;
}

Cita* ListaCitas::buscarCod(string cod) {
	NodoCit* pExt = ppio;
	while (pExt != NULL) {
		if (pExt->getCita()->getCodigo() == cod)
			return pExt->getCita();
		pExt = pExt->getSig();
	}
	return NULL;
}

bool ListaCitas::eliminarCita(string pla) {
	NodoCit* pExt = ppio;
	if (ppio == NULL)
		return false;
	if (cont == 1) {
		ppio = NULL;
		cont--;
		return true;
	}

	while (pExt != NULL) {
		if (pExt->getCita()->getCodigo() == pla) {
			delete pExt;
			cont--;
			return true;
		}
		if (pExt->getSig() != NULL) {
			if (pExt->getSig()->getCita()->getCodigo() == pla) {
				NodoCit* pExt1 = pExt->getSig();
				pExt->setSig(pExt1->getSig());
				delete pExt1;
				cont--;
				return true;
			}
			pExt = pExt->getSig();
		}
	}
	return false;
}

string ListaCitas::historialP(string ced) {
	stringstream s;
	NodoCit* pExt = ppio;
	s << "------------------LISTA CITAS------------------" << endl;
	while (pExt != NULL) {
		if (pExt->getCita()->getPaciente()->getCedula() == ced) {
			s << pExt->getCita()->toString() << endl;
		}
		else {
			s << "No existe un paciente con esa cedula que posea citas" << endl;
		}
		pExt = pExt->getSig();
	}
	return s.str();

}

void ListaCitas::masCitas() {
	Paciente fe[20];
	Paciente actual;
	Paciente FeMayor;
	int can = 0;
	int canMomento = 0;
	int canMayor = 0;
	NodoCit* pExt = ppio;

	while (pExt != NULL) {
		fe[can++] = *(pExt->getCita()->getPaciente());
		pExt = pExt->getSig();
	}
	for (int i = 0; i < can; i++) {
		actual = fe[i];
		for (int j = 0; j < can; j++) {
			if (actual.getCedula() == fe[j].getCedula()) {
				canMomento++;
			}
		}
		if (canMayor < canMomento) {
			canMayor = canMomento;
			FeMayor = actual;
		}
		canMomento = 0;
	}
	if (FeMayor.getCedula() == "") {
		cout << "No existe un paciente con mas citas" << endl;
	}
	else {
		cout << FeMayor.toString();
		cout << "Cedula: " << FeMayor.getCedula() << endl;
		cout << "Nombre: " << FeMayor.getNombre() << endl;
		cout << "Apellido: " << FeMayor.getApellido() << endl;
	}
}

void ListaCitas::FechaMas() {
	Fecha fe[20];
	Fecha actual;
	Fecha FeMayor;
	int can = 0;
	int canMomento = 0;
	int canMayor = 0;
	NodoCit* pExt = ppio;

	while (pExt != NULL) {
		fe[can++] = *(pExt->getCita()->getFecha());
		pExt = pExt->getSig();
	}
	for (int i = 0; i < can; i++) {
		actual = fe[i];
		for (int j = 0; j < can; j++) {
			if (actual.getDia() == fe[j].getDia() && actual.getMes() == fe[j].getMes() && actual.getAnio() == fe[j].getAnio()) {
				canMomento++;
			}
		}
		if (canMayor < canMomento) {
			canMayor = canMomento;
			FeMayor = actual;
		}
		canMomento = 0;
	}
	if (FeMayor.getDia() == 0 && FeMayor.getMes() == 0 && FeMayor.getAnio() == 0) {
		cout << "No existe una fecha mas atendida" << endl;
	}
	else
	cout << FeMayor.toString() << endl;
}

void ListaCitas::transMas() {
	int cont = 0;
	int cont2 = 0;
	int cont3 = 0;
	NodoCit* pExt = ppio;
	while (pExt != NULL) {
		if (pExt->getCita()->getPaciente()->getTipoTransporte() == 1)
			cont++;
		if (pExt->getCita()->getPaciente()->getTipoTransporte() == 2)
			cont2++;
		if (pExt->getCita()->getPaciente()->getTipoTransporte() == 3)
			cont3++;
		pExt = pExt->getSig();
	}
	if (cont > cont2 && cont > cont3) {
		cout << "El tipo de transporte mas utilizado es: Propio" << endl;
		system("pause");
	}
	if (cont2 > cont && cont2 > cont3) {
		cout << "El tipo de transporte mas utilizado es: Taxi" << endl;
		system("pause");
	}
	if (cont3 > cont && cont3 > cont2) {
		cout << "El tipo de transporte mas utilizado es: Ambulancia" << endl;
		system("pause");
	}
}


string ListaCitas::toString() {
	stringstream s;
	NodoCit* pExt = ppio;
	s << "------------------LISTA CITAS------------------" << endl;
	while (pExt != NULL) {
		s << pExt->getCita()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}