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

