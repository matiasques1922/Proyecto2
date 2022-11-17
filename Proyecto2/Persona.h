#include"Hora.h"

class Persona {
protected:
    string cedula;
    string apellido;
    string nombre;
    string numeroT;
public:
    Persona(string, string, string, string);
    virtual ~Persona();
    string getCedula();
    string getApellido();
    string getNombre();
    string getNumeroT();
    virtual string toString() = 0;
};
