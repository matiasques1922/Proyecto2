#pragma once
#include"Paciente.h"
#include"Fecha.h"
#include"Hora.h"
#include "Medico.h"
class Cita
{
private:
	string codigoC;
	Paciente* pacPtr;
	Medico* medPtr;
	Fecha* fec;
	Hora* hor;

public:
	Cita(string, Paciente*, Medico*, Fecha*, Hora*);
	virtual ~Cita();

	void clonaPaciente(Paciente*);
	void clonaMedico(Medico*);
	void clonaFecha(Fecha*);
	void clonaHora(Hora*);
	string getCodigo();
	Paciente* getPaciente();

	string toString();
};

//Al crearse una cita, esta tendr� un c�digo de cita, adem�s se vincular� con alg�n paciente y
//un m�dico ya ingresados previamente en el programa, una hora(horas y minutos), una fecha(d�a,
//	mes, a�o), e informaci�n del transporte.La cita, se debe realizar con un m�dico que tenga una
//	especialidad que se supone, necesita la persona paciente universitaria.