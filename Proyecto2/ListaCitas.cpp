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