#include "ListaAmb.h"

ListaAmb::ListaAmb(){
	ppio = NULL;
	cont = 0;
}
ListaAmb:: ~ListaAmb(){}

void ListaAmb::ingresar(Ambulancia* ptr){
	ppio = new NodoAmb(ptr, ppio);
	cont++;
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

bool ListaAmb::eliminarAmb(string pla) {
	NodoAmb* pExt = ppio;
	if (ppio == NULL)
		return false;
	if (cont == 1) {
		ppio = NULL;
		cont--;
		return true;
	}
	
	while (pExt != NULL) {
		if (pExt->getAmbulancia()->getPlaca() == pla) {
			delete pExt;
			cont--;
			return true;
		}
		if(pExt->getSig() != NULL) {
			if (pExt->getSig()->getAmbulancia()->getPlaca() == pla) {
				NodoAmb* pExt1 = pExt->getSig();
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

string ListaAmb::ocupadas() {
	stringstream s;
	NodoAmb* pExt = ppio;
	s << "---------------LISTA AMBULANCIAS---------------" << endl;
	while (pExt != NULL) {
		if(pExt->getAmbulancia() != NULL && pExt->getAmbulancia()->getOcupado() == true)
		s << pExt->getAmbulancia()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();

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