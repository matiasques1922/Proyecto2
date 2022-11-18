#include "ListaEst.h"

ListaEst::ListaEst() {
	ppio = NULL;
}
ListaEst:: ~ListaEst() {}

void ListaEst::ingresarN(ENacional* ptr) {
	ppio = new NodoEst(ptr, ppio);
}
void ListaEst::ingresarIN(EInternacional* ptr) {
	ppio = new NodoEst(ptr, ppio);
}
string ListaEst::toString() {
	stringstream s;
	NodoEst* pExt = ppio;
	
	s << "---------------LISTA ESTUDIANTES---------------" << endl;
	while (pExt != NULL) {
		if (pExt->getEstudianteIN() != NULL)
			s << pExt->getEstudianteIN()->toString() << endl;
		if (pExt->getEstudianteN() != NULL)
			s << pExt->getEstudianteN()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}