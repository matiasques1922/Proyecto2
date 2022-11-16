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