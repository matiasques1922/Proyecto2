//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include"Medico.h"
using namespace std;
class NodoMed
{
private: 
	Medico* ptrM;
	NodoMed* sig;

public:
	NodoMed(Medico*, NodoMed*);
	virtual ~NodoMed();
	void setMedico(Medico*);
	void setSig(NodoMed*);

	Medico* getMedico();
	NodoMed* getSig();

};

