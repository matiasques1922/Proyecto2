//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

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

//PPropiedad* ListaProf::buscarCedP(string ced) {
//	NodoProf* pExt = ppio;
//	if (ppio == NULL)
//		return NULL;
//	while (pExt != NULL) {
//		if (pExt->getProfesorP()->getCedula() == ced)
//			return pExt->getProfesorP();
//		pExt = pExt->getSig();
//	}
//	return NULL;
//}

Profesor* ListaProf::buscarCed(string ced) {
	NodoProf* pExt = ppio;
	if (ppio == NULL)
		return NULL;
	while (pExt != NULL) {
		if (pExt->getProfesorI() != NULL) {
			if (pExt->getProfesorI()->getCedula() == ced)
				return pExt->getProfesorI();
		}
		if (pExt->getProfesorP() != NULL) {
			if (pExt->getProfesorP()->getCedula() == ced)
				return pExt->getProfesorP();
		}
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
		if (pExt->getProfesorP()->getCedula() == ced) {
			delete pExt;
			cont--;
			return true;
		}
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
		if (pExt->getProfesorI()->getCedula() == ced) {
			delete pExt;
			cont--;
			return true;
		}
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
	s << "----------------LISTA PROFESORES---------------" << endl
		<< "------------------PROPIETARIOS-----------------" << endl;
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
	s << "----------------LISTA PROFESORES---------------" << endl
		<< "------------------INTERINOS--------------------" << endl;
	while (pExt != NULL) {
		if (pExt->getProfesorI() != NULL)
			s << pExt->getProfesorI()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}

void ListaProf::mejoresCali() {
	PInterino fe[20];
	PInterino actual;
	PInterino FeMayor;
	PInterino FeMayor2;
	PInterino FeMayor3;
	int can = 0;
	int canMomento = 0;
	int canMayor = 0;
	NodoProf* pExt = ppio;

	while (pExt != NULL) {
		fe[can++] = *(pExt->getProfesorI());
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
	cout << FeMayor.toString() << endl;
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