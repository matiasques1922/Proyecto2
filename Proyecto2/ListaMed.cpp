#include "ListaMed.h"

ListaMed::ListaMed() {
	ppio = NULL;
	cont = 0;
}
ListaMed:: ~ListaMed() {}

void ListaMed::ingresar(Medico* ptr) {
	ppio = new NodoMed(ptr, ppio);
	cont++;
}

Medico* ListaMed::buscarCed(string ced) {
	NodoMed* pExt = ppio;
	while (pExt != NULL) {
		if (pExt->getMedico()->getCedula() == ced)
			return pExt->getMedico();
		pExt = pExt->getSig();
	}
	return NULL;
}

Medico* ListaMed::buscarEsp(string esp) {
	NodoMed* pExt = ppio;
	while (pExt != NULL) {
		if (pExt->getMedico()->getEspecialidad() == esp)
			return pExt->getMedico();
		pExt = pExt->getSig();
	}
	return NULL;
}

bool ListaMed::eliminarMed(string ced) {
	NodoMed* pExt = ppio;
	if (ppio == NULL)
		return false;
	if (cont == 1) {
		ppio = NULL;
		cont--;
		return true;
	}

	while (pExt != NULL) {
		if (pExt->getMedico()->getCedula() == ced) {
			delete pExt;
			cont--;
			return true;
		}
		if (pExt->getSig() != NULL) {
			if (pExt->getSig()->getMedico()->getCedula() == ced) {
				NodoMed* pExt1 = pExt->getSig();
				pExt->setSig(pExt1->getSig());
				delete pExt1;
				cont--;
				return true;
			}
		}
		pExt = pExt->getSig();
	}
	return false;
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