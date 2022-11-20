//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include "Profesor.h"

class PPropiedad: public Profesor{
private:

public:
	PPropiedad(string, string, string, string, string, Transporte*, string, int, string);
	virtual ~PPropiedad();
	string getTitulo();
	int getAnios();
	string getCodigo();
	string toString();
};

