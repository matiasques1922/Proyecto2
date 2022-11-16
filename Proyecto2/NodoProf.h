#pragma once
#include "Profesor.h"
class NodoProf
{
private:
	Profesor* ptrP;
	NodoProf* sig;

public:
	NodoProf(Profesor*, NodoProf*);
	virtual ~NodoProf();
	void setProfesor(Profesor*);
	void setSig(NodoProf*);

	Profesor* getProfesor();
	NodoProf* getSig();
};

