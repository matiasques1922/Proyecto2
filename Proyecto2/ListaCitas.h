#pragma once
#include"NodoCit.h"
class ListaCitas
{
private:
	NodoCit* ppio;
public:
	ListaCit();
	virtual ~ListaCit();

	void ingresar(Cita*);
	string toString();
};

