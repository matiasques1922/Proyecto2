#include "NodoEst.h"

NodoEst::NodoEst(Estudiante* ptr, NodoEst* sigui) {
	ptrE = ptr;
	sig = sigui;
}
NodoEst::~NodoEst() {
	if (ptrE != NULL)
		delete ptrE;
	if (sig != NULL)
		delete sig;
}
void NodoEst::setEstudiante(Estudiante* ptr) { ptrE = ptr; }
void NodoEst::setSig(NodoEst* sigui) { sig = sigui; }

Estudiante* NodoEst::getEstudiante() { return ptrE; }
NodoEst* NodoEst::getSig() { return sig; }