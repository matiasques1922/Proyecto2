#include "ListaProf.h"

ListaProf::ListaProf() {
	ppio = NULL;
	cont = 0;
	cont2 = 0;
}
ListaProf:: ~ListaProf() {}

void ListaProf::ingresarP(PPropiedad* ptr) {
	ppio = new NodoProf(ptr, ppio);
	cont++;
}

void ListaProf::ingresarI(PInterino* ptr) {
	ppio = new NodoProf(ptr, ppio);
	cont2++;
}

PPropiedad* ListaProf::buscarCedP(string ced) {
	NodoProf* pExt = ppio;
	while (pExt != NULL) {
		if (pExt->getProfesorP()->getCedula() == ced)
			return pExt->getProfesorP();
		pExt = pExt->getSig();
	}
	return NULL;
}

PInterino* ListaProf::buscarCedI(string ced) {
	NodoProf* pExt = ppio;
	while (pExt != NULL) {
		if (pExt->getProfesorI()->getCedula() == ced)
			return pExt->getProfesorI();
		pExt = pExt->getSig();
	}
	return NULL;
}

bool ListaProf::eliminarProfP(string ced) {
	NodoProf* pExt = ppio;
	if (ppio == NULL)
		return false;
	if (cont == 1) {
		ppio = NULL;
		cont--;
		return true;
	}

	while (pExt != NULL) {
		if (pExt->getSig() != NULL) {
			if (pExt->getSig()->getProfesorP()->getCedula() == ced) {
				NodoProf* pExt1 = pExt->getSig();
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

bool ListaProf::eliminarProfI(string ced) {
	NodoProf* pExt = ppio;
	if (ppio == NULL)
		return false;
	if (cont2 == 1) {
		ppio = NULL;
		cont2--;
		return true;
	}

	while (pExt != NULL) {
		if (pExt->getSig() != NULL) {
			if (pExt->getSig()->getProfesorI()->getCedula() == ced) {
				NodoProf* pExt1 = pExt->getSig();
				pExt->setSig(pExt1->getSig());
				delete pExt1;
				cont2--;
				return true;
			}
			pExt = pExt->getSig();
		}
	}
	return false;
}

string ListaProf::propiedad() {
	stringstream s;
	NodoProf* pExt = ppio;
	s << "----------------LISTA PROFESORES---------------" << endl;
	while (pExt != NULL) {
		if (pExt->getProfesorP() != NULL)
			s << pExt->getProfesorP()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}

string ListaProf::interino() {
	stringstream s;
	NodoProf* pExt = ppio;
	s << "----------------LISTA PROFESORES---------------" << endl;
	while (pExt != NULL) {
		if (pExt->getProfesorI() != NULL)
			s << pExt->getProfesorI()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}

string ListaProf::toString() {
	stringstream s;
	NodoProf* pExt = ppio;
	s << "----------------LISTA PROFESORES---------------" << endl;
	while (pExt != NULL) {
		if(pExt->getProfesorI() != NULL)
		s << pExt->getProfesorI()->toString() << endl;
		if (pExt->getProfesorP() != NULL)
		s << pExt->getProfesorP()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}