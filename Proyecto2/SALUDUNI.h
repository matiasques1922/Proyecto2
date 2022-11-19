#pragma once
#include "ListaAmb.h"
#include "ListaCitas.h"
#include "ListaMed.h"
#include "ListaTax.h"
#include "ListaProf.h"
#include "ListaEst.h"
class SALUDUNI
{
private:
	//contenedor medicos, profesores, estudiantes, ambulancias, taxis, citas
	string nombreHospital;
	string cedulaJuri;
	string direccion;
	string numeroTele;
	ListaAmb* listaAmb;
	ListaTax* listaTax;
	ListaProf* listaProf;
	ListaEst* listaEst;
	ListaMed* listaMed;
	ListaCitas* listaCitas;

public:
	SALUDUNI(string, string, string);
	virtual ~SALUDUNI();

	ListaAmb* getAmb();
	ListaTax* getTax();
	ListaProf* getProf();
	ListaEst* getEst();
	ListaMed* getMed();
	ListaCitas* getCitas();

	Ambulancia* buscaAmbulancia();
	Taxi* buscaTaxi();
	PPropiedad* buscaProfP();
	PInterino* buscaProfI();
	ENacional* buscaEstN();
	EInternacional* buscaEstIN();
	Medico* buscaMedico();
	Cita* buscaCita();
	

	void ingresarAmb();
	void ingresarTax();
	void ingresarProfP();
	void ingresarProfI();
	void ingresarEstudianteN();
	void ingresarEstudianteIN();
	void ingresarMed();
	void crearCita();

	void editarAmb();
	void editarTax();
	void editarProfP();
	void editarProfI();
	void editarEstudianteN();
	void editarEstudianteIN();
	void editarMed();
	void historialCitas();

	void eliminarAmb();
	void eliminarTax();
	void eliminarProfP();
	void eliminarProfI();
	void eliminarEstudianteN();
	void eliminarEstudianteIN();
	void eliminarMed();
	void eliminarCita();

	string todasCitas();
	string pacientes();
	string medicos();
	string transporte();
	void busquedaEspecifica();

	void reporteTotal();
	void reporteMasCitas();
	void reporteFecha();
	void reporteTipoMas();
	void reporteAmbuOcupadas();
	void reporteInterinosMejorC();
	void reporteEstExiliados();

	

	string toString();

};

//La clase principal encargada de todo el hospital debería llamarse : “SALUDUNI” Para
//esta clase interesa : la cédula - jurídica del hospital, el teléfono del hospital, la
//dirección física del hospital y el nombre del hospital, es decir : “HOSPITALUNIVERSITARIO”

