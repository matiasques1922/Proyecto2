#include "NodoProf.h"

NodoProf::NodoProf(PPropiedad* ptr, NodoProf* sigui) {
	ptrP = ptr;
	sig = sigui;
}
NodoProf::NodoProf(PInterino* ptr, NodoProf* sigui) {
	ptrI = ptr;
	sig = sigui;
}
NodoProf::~NodoProf() {
	if (ptrP != NULL)
		delete ptrP;
	if (ptrI != NULL)
		delete ptrI;
	if (sig != NULL)
		delete sig;
}
void NodoProf::setProfesorP(PPropiedad* ptr) { ptrP = ptr; }
void NodoProf::setProfesorI(PInterino* ptr) { ptrI = ptr; }
void NodoProf::setSig(NodoProf* sigui) { sig = sigui; }

PPropiedad* NodoProf::getProfesorP() { return ptrP; }
PInterino* NodoProf::getProfesorI() { return ptrI; }
NodoProf* NodoProf::getSig() { return sig; }