#pragma once
#include"NodoCit.h"
class ListaCitas
{
private:
	NodoCit* ppio;
public:
	ListaCitas();
	virtual ~ListaCitas();

	void ingresar(Cita*);
	string toString();
};

