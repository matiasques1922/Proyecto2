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
			pExt = pExt->getSig();
		}
		else {
			s << "No existe un paciente con esa cedula que posea citas" << endl;
		}
	}
	return s.str();

}

void ListaCitas::masCitas() {
	NodoCit* pExt = ppio;
	Fecha* vec[40];
	while (pExt != NULL) {

		pExt = pExt->getSig();
	}
}

void ListaCitas::FechaMas() {
	NodoCit* pExt = ppio;
	while (pExt != NULL) {
		
		pExt = pExt->getSig();
	}
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