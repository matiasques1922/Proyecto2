//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#pragma once
#include<sstream>
#include<iostream>
using namespace std;

class Persona {
protected:
    string cedula;
    string apellido;
    string nombre;
    string numeroT;
public:
    Persona();
    Persona(string, string, string, string);
    virtual ~Persona();
    string getCedula();
    string getApellido();
    string getNombre();
    string getNumeroT();
    void setCedula(string);
    void setApellido(string);
    void setNombre(string);
    void setNumeroT(string);
    virtual string toString() = 0;
};

