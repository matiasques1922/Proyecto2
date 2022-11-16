#include "NodoTax.h"

NodoTax::NodoTax(Taxi* ptr, NodoTax* sigui) {
	ptrT = ptr;
	sig = sigui;
}
NodoTax::~NodoTax() {
	if (ptrT != NULL)
		delete ptrT;
	if (sig != NULL)
		delete sig;
}
void NodoTax::setTaxi(Taxi* ptr) { ptrT = ptr; }
void NodoTax::setSig(NodoTax* sigui) { sig = sigui; }

Taxi* NodoTax::getTaxi() { return ptrT; }
NodoTax* NodoTax::getSig() { return sig; }