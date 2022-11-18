#include "ListaProf.h"

ListaProf::ListaProf() {
	ppio = NULL;
}
ListaProf:: ~ListaProf() {}

void ListaProf::ingresarP(PPropiedad* ptr) {
	ppio = new NodoProf(ptr, ppio);
}

void ListaProf::ingresarI(PInterino* ptr) {
	ppio = new NodoProf(ptr, ppio);
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