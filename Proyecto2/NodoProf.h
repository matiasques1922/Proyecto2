#pragma once
#include "PPropiedad.h"
#include "PInterino.h"
class NodoProf
{
private:
	PPropiedad* ptrP;
	PInterino* ptrI;
	NodoProf* sig;

public:
	NodoProf(PPropiedad*, NodoProf*);
	NodoProf(PInterino*, NodoProf*);
	virtual ~NodoProf();
	void setProfesorP(PPropiedad*);
	void setProfesorI(PInterino*);
	void setSig(NodoProf*);

	PPropiedad* getProfesorP();
	PInterino* getProfesorI();
	NodoProf* getSig();
};

