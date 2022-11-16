#include "ListaAmb.h"

ListaAmb::ListaAmb(){
	ppio = NULL;
}
ListaAmb:: ~ListaAmb(){}

void ListaAmb::ingresar(Ambulancia* ptr){
	ppio = new NodoAmb(ptr, ppio);
}
string ListaAmb::toString() {
	stringstream s;
	NodoAmb* pExt = ppio;
	while (pExt != NULL) {
		s << pExt->getAmbulancia()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}