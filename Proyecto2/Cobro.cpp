#include "Cobro.h"

double Cobro::realizaCobro(double km, int num) {
	double cobro = 0;

	if (km < 1 && km > 0)
		cobro = 950.00;
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
	return cobro;
}

double Cobro::realizaCobro2(double km, int num) {
	double cobro = 0;
	cobro = Cobro::realizaCobro(km, num) * 2;
	return cobro;
}
 