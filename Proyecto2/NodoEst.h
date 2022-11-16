#pragma once
#include "Estudiante.h"
class NodoEst
{
private:
	Estudiante* ptrE;
	NodoEst* sig;

public:
	NodoEst(Estudiante*, NodoEst*);
	virtual ~NodoEst();
	void setEstudiante(Estudiante*);
	void setSig(NodoEst*);

	Estudiante* getEstudiante();
	NodoEst* getSig();
};

