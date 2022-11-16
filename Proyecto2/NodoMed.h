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

