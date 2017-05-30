#ifndef CONSERGE_H
#define CONSERGE_H

#include "Birthday.h"
#include "Persona.h"
using namespace std;

class Conserge:public Persona
{
        int sueldo;

    public:
        Conserge(const string myNombre, const string myApellido, const string myDni, Birthday a, const int sueldo );

        const string getPresentacion()
        {
            return nombre +"  "+ apellido + " " + sueldo ;
        }
        const string getSueldo() {return sueldo;}
        const int getEdad(){
            return a.getEdad();}
        virtual void Mostrar();
};




#endif // CONSERGE_H
