#ifndef GERENTE_H
#define GERENTE_H

#include "Birthday.h"
#include "Persona.h"
using namespace std;

class Gerente:public Persona
{
        string sexo;

    public:
        Gerente(const string myNombre, const string myApellido, const string myDni, Birthday a, const string mySexo );

        const string getPresentacion()
        {
            return nombre +"  "+ apellido + " " + sexo ;
        }
        const string &getSexo() {return sexo;}
        const int getEdad(){return a.getEdad();}
        virtual void Mostrar();
};

#endif // GERENTE_H
