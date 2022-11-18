#include "Transporte.h"

Transporte::Transporte(string pla, string mar):placa(pla), marca(mar) {}
Transporte:: ~Transporte(){}

void Transporte::setPlaca(string pla) { placa = pla; }
void Transporte::setMarca(string mar) { marca = mar; }
string Transporte::getPlaca() { return placa; }
string Transporte::getMarca() { return marca; }
