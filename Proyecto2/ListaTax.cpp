//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include "ListaTax.h"

ListaTax::ListaTax() {
	ppio = NULL;
	cont = 0;
}
ListaTax:: ~ListaTax() {}

void ListaTax::ingresar(Taxi* ptr) {
	ppio = new NodoTax(ptr, ppio);
	cont++;
}

Taxi* ListaTax::buscarPlaca(string pla) {
	NodoTax* pExt = ppio;
	while (pExt != NULL) {
		if (pExt->getTaxi()->getPlaca() == pla)
			return pExt->getTaxi();
		pExt = pExt->getSig();
	}
	return NULL;
}

bool ListaTax::eliminarTax(string ced) {
	NodoTax* pExt = ppio;
	if (ppio == NULL)
		return false;
	if (cont == 1) {
		ppio = NULL;
		cont--;
		return true;
	}

	while (pExt != NULL) {
		if (pExt->getTaxi()->getPlaca() == ced) {
			delete pExt;
			cont--;
			return true;
		}
		if (pExt->getSig() != NULL) {
			if (pExt->getSig()->getTaxi()->getPlaca() == ced) {
				NodoTax* pExt1 = pExt->getSig();
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

double ListaTax::totalRecaudado() {
	NodoTax* pExt = ppio;
	double total = 0;
	while (pExt != NULL) {
		if (pExt->getTaxi() != NULL) {
			total = total + pExt->getTaxi()->getCobro()->getTotal();
			pExt = pExt->getSig();
		}
		else {
			pExt = pExt->getSig();
		}
	}
	return total;
}

string ListaTax::toString() {
	stringstream s;
	NodoTax* pExt = ppio;
	s << "------------------LISTA TAXIS------------------" << endl;
	while (pExt != NULL) {
		s << pExt->getTaxi()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}