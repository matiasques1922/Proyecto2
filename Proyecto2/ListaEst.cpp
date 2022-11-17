#include "ListaEst.h"

ListaEst::ListaEst() {
	ppio = NULL;
}
ListaEst:: ~ListaEst() {}

void ListaEst::ingresar(Estudiante* ptr) {
	ppio = new NodoEst(ptr, ppio);
}
string ListaEst::toString() {
	stringstream s;
	NodoEst* pExt = ppio;
	s << "------------------LISTA ESTUDIANTES------------------" << endl;
	while (pExt != NULL) {
		s << pExt->getEstudiante()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}