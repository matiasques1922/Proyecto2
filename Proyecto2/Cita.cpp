#include "Cita.h"

Cita::Cita(string cod, Paciente* pac, Medico* med, Fecha* fe, Hora* ho):codigoC(cod){
	clonaPaciente(pac);
	clonaMedico(med);
	clonaFecha(fe);
	clonaHora(ho);
}
Cita:: ~Cita(){
	if (pacPtr != NULL)
		delete pacPtr;
	if (medPtr != NULL)
		delete medPtr;
	if (fec != NULL)
		delete fec;
	if (hor != NULL)
		delete hor;
}

void Cita::clonaPaciente(Paciente* pac){
	string cedula, nombre, apellido, numeroT, universidad;
	Transporte* trans;
	int tipo;
	cedula = pac->getCedula();
	nombre = pac->getNombre();
	apellido = pac->getApellido();
	numeroT = pac->getNumeroT();
	universidad = pac->getUniversidad();
	trans = pac->getTransporte();
	tipo = pac->getTipoTransporte();
	pacPtr = new Paciente(cedula, nombre, apellido, numeroT, universidad, trans);
	pacPtr->setTipoTransporte(tipo);
}
void Cita::clonaMedico(Medico* med){
	string cedula, nombre, apellido, numeroT, especialidad;
	cedula = med->getCedula();
	nombre = med->getNombre();
	apellido = med->getApellido();
	numeroT = med->getNumeroT();
	especialidad = med->getEspecialidad();
	
	medPtr = new Medico(cedula, nombre, apellido, numeroT, especialidad);
}
void Cita::clonaFecha(Fecha* fe){
	int dia, mes, anio;
	dia = fe->getDia();
	mes = fe->getMes();
	anio = fe->getAnio();

	fec = new Fecha(dia, mes, anio);
}
void Cita::clonaHora(Hora* ho){
	int hora, min;
	hora = ho->getHora();
	min = ho->getMinutos();

	hor = new Hora(hora, min);
}

Fecha* Cita::getFecha() { return fec; }
Paciente* Cita::getPaciente() { return pacPtr; }
string Cita::getCodigo() { return codigoC; }

string Cita::toString() {
	stringstream s;
	s << "----------CITA-----------" << endl;
	s << "CODIGO DE CITA: " << codigoC << endl;
	if (pacPtr != NULL) { 
		s << pacPtr->toString()
			<< "Cedula: " << pacPtr->getCedula() << endl
			<< "Nombre: " << pacPtr->getNombre() << endl
			<< "Apellido: " << pacPtr->getApellido() << endl;
	}
	if (medPtr != NULL) { s << medPtr->toString() << endl; }
	if (fec != NULL) { s << fec->toString() << endl; }
	if (hor != NULL) { s << hor->toString() << endl; }
	return s.str();
}

//Al crearse una cita, esta tendrá un código de cita, además se vinculará con algún paciente y
//un médico ya ingresados previamente en el programa, una hora(horas y minutos), una fecha(día,
//	mes, año), e información del transporte.La cita, se debe realizar con un médico que tenga una
//	especialidad que se supone, necesita la persona paciente universitaria.