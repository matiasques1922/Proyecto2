//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include "Cita.h"
class NodoCit
{
private:
	Cita* ptrC;
	NodoCit* sig;

public:
	NodoCit(Cita*, NodoCit*);
	virtual ~NodoCit();
	void setCita(Cita*);
	void setSig(NodoCit*);

	Cita* getCita();
	NodoCit* getSig();
};

