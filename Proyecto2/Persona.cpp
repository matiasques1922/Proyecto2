//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include "Persona.h"
Persona::Persona() {
	cedula = "";
	nombre = "";
	apellido = "";
	numeroT = "";
}
Persona::Persona(string ced, string nom, string ape, string num): cedula(ced), nombre(nom), apellido(ape), numeroT(num) {}
Persona:: ~Persona(){}
string Persona::getCedula() { return cedula; }
string Persona::getNombre() { return nombre; }
string Persona::getApellido() { return apellido; }
string Persona::getNumeroT() { return numeroT; }
void Persona::setCedula(string ced) { cedula = ced; }
void Persona::setApellido(string ape) { apellido = ape; }
void Persona::setNombre(string nom) { nombre = nom; }
void Persona::setNumeroT(string num) { numeroT = num; }