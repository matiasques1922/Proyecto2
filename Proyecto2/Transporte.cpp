#include "Transporte.h"

Transporte::Transporte(string pla, string mar):placa(pla), marca(mar) {}
Transporte:: ~Transporte(){}
string Transporte::getPlaca() { return placa; }
string Transporte::getMarca() { return marca; }
