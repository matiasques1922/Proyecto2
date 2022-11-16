#include "NodoMed.h"

NodoMed::NodoMed(Medico* ptr, NodoMed* sigui) {
	ptrM = ptr;
	sig = sigui;
}
NodoMed::~NodoMed() {
	if (ptrM != NULL)
		delete ptrM;
	if (sig != NULL)
		delete sig;
}
void NodoMed::setMedico(Medico* ptr) { ptrM = ptr; }
void NodoMed::setSig(NodoMed* sigui) { sig = sigui; }

Medico* NodoMed::getMedico() { return ptrM; }
NodoMed* NodoMed::getSig() { return sig; }