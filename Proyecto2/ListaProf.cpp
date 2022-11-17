#include "ListaProf.h"

ListaProf::ListaProf() {
	ppio = NULL;
}
ListaProf:: ~ListaProf() {}

void ListaProf::ingresar(Profesor* ptr) {
	ppio = new NodoProf(ptr, ppio);
}
string ListaProf::toString() {
	stringstream s;
	NodoProf* pExt = ppio;
	s << "------------------LISTA PROFESORES------------------" << endl;
	while (pExt != NULL) {
		s << pExt->getProfesor()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}