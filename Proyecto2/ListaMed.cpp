#include "ListaMed.h"

ListaMed::ListaMed() {
	ppio = NULL;
}
ListaMed:: ~ListaMed() {}

void ListaMed::ingresar(Medico* ptr) {
	ppio = new NodoMed(ptr, ppio);
}
string ListaMed::toString() {
	stringstream s;
	NodoMed* pExt = ppio;
	
	s << "-----------------LISTA MEDICOS-----------------" << endl;
	while (pExt != NULL) {
		s << pExt->getMedico()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}