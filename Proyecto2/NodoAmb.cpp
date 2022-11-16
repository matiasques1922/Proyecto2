#include "NodoAmb.h"

NodoAmb::NodoAmb(Ambulancia* ptr, NodoAmb* sigui) {
	ptrA = ptr;
	sig = sigui;
}
NodoAmb::~NodoAmb() {
	if (ptrA != NULL)
		delete ptrA;
	if (sig != NULL)
		delete sig;
}
void NodoAmb::setAmbulancia(Ambulancia* ptr) { ptrA = ptr; }
void NodoAmb::setSig(NodoAmb* sigui) { sig = sigui; }

Ambulancia* NodoAmb::getAmbulancia() { return ptrA; }
NodoAmb* NodoAmb::getSig() { return sig; }