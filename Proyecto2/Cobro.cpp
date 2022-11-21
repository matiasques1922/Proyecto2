//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include "Cobro.h"

Cobro::Cobro() { 
	total = 0; 
	cobro = 0;
}
Cobro:: ~Cobro() {}

double Cobro::getCobromini() { return cobro; }
double Cobro::getTotal() { return total; }
void Cobro::setTotal(double tot) { total = tot; }

double Cobro::realizaCobro(double km, int num) {
	cobro = 0;
	if (km < 1 && km > 0)
		cobro = cobro + 950.00;
	else {
	while (km > 5) {
		cobro = cobro + 600.00;
		km--;
	}
	while (km > 2) {
		cobro = cobro + 700.00;
		km--;
	}
	while (km >= 1) {
		cobro = cobro + 950.00;
		km--;
	}
	}
	double cobroExt;
	cobroExt = cobro;
	while (num > 1) {
		cobro = cobro + (cobroExt * 0.10);
		num--;
	}
	total = total + cobro;
	return cobro;
}

double Cobro::realizaCobro2(double km, int num) {
	cobro = 0;
	cobro = Cobro::realizaCobro(km, num) * 2;
	total = total + cobro/2;
	return cobro;
}
 