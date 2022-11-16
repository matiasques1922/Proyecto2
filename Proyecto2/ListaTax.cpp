#include "ListaTax.h"

ListaTax::ListaTax() {
	ppio = NULL;
}
ListaTax:: ~ListaTax() {}

void ListaTax::ingresar(Taxi* ptr) {
	ppio = new NodoTax(ptr, ppio);
}
string ListaTax::toString() {
	stringstream s;
	NodoTax* pExt = ppio;
	while (pExt != NULL) {
		s << pExt->getTaxi()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}