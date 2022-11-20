//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include "ENacional.h"
#include"EInternacional.h"
class NodoEst
{
private:
	ENacional* ptrN;
	EInternacional* ptrIN;
	NodoEst* sig;

public:
	NodoEst(ENacional*, NodoEst*);
	NodoEst(EInternacional*, NodoEst*);
	virtual ~NodoEst();
	void setEstudianteN(ENacional*);
	void setEstudianteIN(EInternacional*);
	void setSig(NodoEst*);

	ENacional* getEstudianteN();
	EInternacional* getEstudianteIN();
	NodoEst* getSig();
};

