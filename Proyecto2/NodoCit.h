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

