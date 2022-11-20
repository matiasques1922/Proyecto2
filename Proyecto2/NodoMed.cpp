//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

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