#include "Profesor.h"

class PPropiedad: public Profesor{
private:
	string titulo;
	int anioslab;
	string codigo;

public:
	PPropiedad(string, string, string, string, string, string, int, string);
	virtual ~PPropiedad();
	string getTitulo();
	int getAnios();
	string getCodigo();
	string toString();
};

