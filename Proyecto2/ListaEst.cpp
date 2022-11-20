#include "ListaEst.h"

ListaEst::ListaEst() {
	ppio = NULL;
	cont = 0;
	cont2 = 0;
}
ListaEst:: ~ListaEst() {}

void ListaEst::ingresarN(ENacional* ptr) {
	ppio = new NodoEst(ptr, ppio);
	cont++;
}
void ListaEst::ingresarIN(EInternacional* ptr) {
	ppio = new NodoEst(ptr, ppio);
	cont++;
}

//ENacional* ListaEst::buscarCed(string ced) {
//	NodoEst* pExt = ppio;
//	while (pExt != NULL) {
//		if (pExt->getEstudianteN()->getCedula() == ced)
//			return pExt->getEstudianteN();
//		pExt = pExt->getSig();
//	}
//	return NULL;
//}

Estudiante* ListaEst::buscarCed(string ced) {
	NodoEst* pExt = ppio;
	if (ppio == NULL)
		return NULL;
	while (pExt != NULL) {
		if (pExt->getEstudianteN() != NULL) {
			if (pExt->getEstudianteN()->getCedula() == ced)
				return pExt->getEstudianteN();
		}
		if (pExt->getEstudianteIN() != NULL) {
			if (pExt->getEstudianteIN()->getCedula() == ced)
				return pExt->getEstudianteIN();
		}
		pExt = pExt->getSig();
	}
	return NULL;
}

bool ListaEst::eliminarEstN(string ced) {
	NodoEst* pExt = ppio;
	if (ppio == NULL)
		return false;
	if (cont == 1) {
		ppio = NULL;
		cont--;
		return true;
	}

	while (pExt != NULL) {
		if (pExt->getEstudianteN()->getCedula() == ced) {
			delete pExt;
			cont--;
			return true;
		}
		if (pExt->getSig() != NULL) {
			if (pExt->getSig()->getEstudianteN()->getCedula() == ced) {
				NodoEst* pExt1 = pExt->getSig();
				pExt->setSig(pExt1->getSig());
				delete pExt1;
				cont--;
				return true;
			}
			pExt = pExt->getSig();
		}
	}
	return false;
}

bool ListaEst::eliminarEstIN(string ced) {
	NodoEst* pExt = ppio;
	if (ppio == NULL)
		return false;
	if (cont2 == 1) {
		ppio = NULL;
		cont2--;
		return true;
	}

	while (pExt != NULL) {
		if (pExt->getEstudianteIN()->getCedula() == ced) {
			delete pExt;
			cont--;
			return true;
		}
		if (pExt->getSig() != NULL) {
			if (pExt->getSig()->getEstudianteIN()->getCedula() == ced) {
				NodoEst* pExt1 = pExt->getSig();
				pExt->setSig(pExt1->getSig());
				delete pExt1;
				cont2--;
				return true;
			}
			pExt = pExt->getSig();
		}
	}
	return false;
}

string ListaEst::internacional() {
	stringstream s;
	NodoEst* pExt = ppio;
	s << "---------------LISTA ESTUDIANTES---------------" << endl
	<< "----------------INTERNACIONALES----------------" << endl;
	while (pExt != NULL) {
		if (pExt->getEstudianteIN() != NULL)
			s << pExt->getEstudianteIN()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}

string ListaEst::nacional() {
	stringstream s;
	NodoEst* pExt = ppio;
	s << "---------------LISTA ESTUDIANTES---------------" << endl
		<< "-------------------NACIONALES------------------" << endl;
	while (pExt != NULL) {
		if (pExt->getEstudianteN() != NULL)
			s << pExt->getEstudianteN()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}

string ListaEst::exiliados() {
	stringstream s;
	NodoEst* pExt = ppio;
	s << "---------------LISTA ESTUDIANTES---------------" << endl
		<< "----------------INTERNACIONALES----------------" << endl;
	while (pExt != NULL) {
		if (pExt->getEstudianteIN() != NULL && pExt->getEstudianteIN()->getEstado() == 1)
			s << pExt->getEstudianteIN()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}

string ListaEst::toString() {
	stringstream s;
	NodoEst* pExt = ppio;
	
	s << "---------------LISTA ESTUDIANTES---------------" << endl;
	while (pExt != NULL) {
		if (pExt->getEstudianteIN() != NULL)
			s << pExt->getEstudianteIN()->toString() << endl;
		if (pExt->getEstudianteN() != NULL)
			s << pExt->getEstudianteN()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}