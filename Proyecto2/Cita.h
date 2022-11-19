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

//Al crearse una cita, esta tendrá un código de cita, además se vinculará con algún paciente y
//un médico ya ingresados previamente en el programa, una hora(horas y minutos), una fecha(día,
//	mes, año), e información del transporte.La cita, se debe realizar con un médico que tenga una
//	especialidad que se supone, necesita la persona paciente universitaria.