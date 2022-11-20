//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

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

