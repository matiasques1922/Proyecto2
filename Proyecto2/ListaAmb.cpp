#include "ListaAmb.h"

ListaAmb::ListaAmb(){
	ppio = NULL;
}
ListaAmb:: ~ListaAmb(){}

void ListaAmb::ingresar(Ambulancia* ptr){
	ppio = new NodoAmb(ptr, ppio);
}

Ambulancia* ListaAmb::buscarPlaca(string pla) {
	NodoAmb* pExt = ppio;
	while (pExt != NULL) {
		if (pExt->getAmbulancia()->getPlaca() == pla)
			return pExt->getAmbulancia();
		pExt = pExt->getSig();
	}
	return NULL;
}

string ListaAmb::toString() {
	stringstream s;
	NodoAmb* pExt = ppio;
	s << "---------------LISTA AMBULANCIAS---------------" << endl;
	while (pExt != NULL) {
		s << pExt->getAmbulancia()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}