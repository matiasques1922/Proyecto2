#include "ListaCitas.h"

ListaCitas::ListaCitas() {
	ppio = NULL;
}
ListaCitas:: ~ListaCitas() {}

void ListaCitas::ingresar(Cita* ptr) {
	ppio = new NodoCit(ptr, ppio);
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