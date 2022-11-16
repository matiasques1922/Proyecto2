#include "NodoProf.h"

NodoProf::NodoProf(Profesor* ptr, NodoProf* sigui) {
	ptrP = ptr;
	sig = sigui;
}
NodoProf::~NodoProf() {
	if (ptrP != NULL)
		delete ptrP;
	if (sig != NULL)
		delete sig;
}
void NodoProf::setProfesor(Profesor* ptr) { ptrP = ptr; }
void NodoProf::setSig(NodoProf* sigui) { sig = sigui; }

Profesor* NodoProf::getProfesor() { return ptrP; }
NodoProf* NodoProf::getSig() { return sig; }