#include "Cobro.h"

Cobro::Cobro() { total = 0; }
Cobro:: ~Cobro() {}

double Cobro::getTotal() { return total; }
void Cobro::setTotal(double tot) { total = tot; }

double Cobro::realizaCobro(double km, int num) {

	if (km < 1 && km > 0)
		total = total + 950.00;
	else {
	while (km > 5) {
		total = total + 600.00;
		km--;
	}
	while (km > 2) {
		total = total + 700.00;
		km--;
	}
	while (km >= 1) {
		total = total + 950.00;
		km--;
	}
	}
	double cobroExt;
	cobroExt = total;
	while (num > 1) {
		total = total + (cobroExt * 0.10);
		num--;
	}
	return total;
}

double Cobro::realizaCobro2(double km, int num) {
	total = Cobro::realizaCobro(km, num) * 2;
	return total;
}
 