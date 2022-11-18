#include "NodoEst.h"

NodoEst::NodoEst(ENacional* ptr, NodoEst* sigui) {
	ptrN = ptr;
	sig = sigui;
}
NodoEst::NodoEst(EInternacional* ptr, NodoEst* sigui) {
	ptrIN = ptr;
	sig = sigui;
}
NodoEst::~NodoEst() {
	if (ptrN != NULL)
		delete ptrN;
	if (ptrIN != NULL)
		delete ptrIN;
	if (sig != NULL)
		delete sig;
}
void NodoEst::setEstudianteN(ENacional* ptr) { ptrN = ptr; }
void NodoEst::setEstudianteIN(EInternacional* ptr) { ptrIN = ptr; }
void NodoEst::setSig(NodoEst* sigui) { sig = sigui; }

ENacional* NodoEst::getEstudianteN() { return ptrN; }
EInternacional* NodoEst::getEstudianteIN() { return ptrIN; }
NodoEst* NodoEst::getSig() { return sig; }