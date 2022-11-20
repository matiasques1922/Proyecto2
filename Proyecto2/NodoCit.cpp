//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include "NodoCit.h"

NodoCit::NodoCit(Cita* ptr, NodoCit* sigui) {
	ptrC = ptr;
	sig = sigui;
}
NodoCit::~NodoCit() {
	if (ptrC != NULL)
		delete ptrC;
	if (sig != NULL)
		delete sig;
}
void NodoCit::setCita(Cita* ptr) { ptrC = ptr; }
void NodoCit::setSig(NodoCit* sigui) { sig = sigui; }

Cita* NodoCit::getCita() { return ptrC; }
NodoCit* NodoCit::getSig() { return sig; }