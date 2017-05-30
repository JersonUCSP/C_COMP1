#ifndef PERSONA_H
#define PERSONA_H
#include "Birthday.h"
#include <string>
#include<iostream>
using namespace std;


class Persona
{
protected:
    string nombre;
    string apellido;
    string dni;
    Birthday a;

public:
    Persona(const string myNombre, const string myApellido, const string myDni );
        virtual const string getPresentacion()const
            {
                return nombre + "  " + apellido ;
            }

        virtual const int getEdad() const {
            a.getEdad();
        }
        virtual void Mostrar();
};


#endif // PERSONA_H
