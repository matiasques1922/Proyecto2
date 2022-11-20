#pragma once
#include "SALUDUNI.h"
class Interfaz
{
public:
	static void creaHospital();
	static int menuPrincipal();
	static int subMenuCitas();
	static int subMenuMantenimiento();
	static int subsubMenuPacientes();
	static int subMenuBusquedas();
	static int subsubMenuBusquedasReportes();

	static void crearCita();
	static void todasCitas();
	static void eliminarCita();
	static void historialCitas();

	static void ingresarProfP();
	static void ingresarProfI();
	static void ingresarEstudianteN();
	static void ingresarEstudianteIN();
	static void editarProfP();
	static void editarProfI();
	static void editarEstudianteN();
	static void editarEstudianteIN();
	static void eliminarProfP();
	static void eliminarProfI();
	static void eliminarEstudianteN();
	static void eliminarEstudianteIN();

	static void ingresarMed();
	static void ingresarAmbu();
	static void ingresarTax();
	static void editarMed();
	static void editarAmbu();
	static void editarTax();
	static void eliminarMed();
	static void eliminarAmbu();
	static void eliminarTax();

	static void pacientes();
	static void medicos();
	static void transporte();
	static void busqueda();
	static void todo();
	static void total();
	static void masCitas();
	static void mayorFecha();
	static void tipoMas();
	static void ocupadas();
	static void mejores();
	static void exiliados();

	static void despedida();
	
};

