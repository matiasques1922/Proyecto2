#include "Persona.h"

Persona::Persona(string ced, string nom, string ape, string num): cedula(ced), nombre(nom), apellido(ape), numeroT(num) {}
Persona:: ~Persona(){}
string Persona::getCedula() { return cedula; }
string Persona::getNombre() { return nombre; }
string Persona::getApellido() { return apellido; }
string Persona::getNumeroT() { return numeroT; }