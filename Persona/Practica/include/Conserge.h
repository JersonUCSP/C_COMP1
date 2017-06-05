#ifndef CONSERGE_H
#define CONSERGE_H

#include "Birthday.h"
#include "Persona.h"
using namespace std;

class Conserge: public Persona
{
protected:
        string puesto;

    public:
        Conserge( string myNombre, string myApellido, string myDni, Birthday cumple, string myPtoTrabajo );
        void Mostrar();

};
#endif // CONSERGE_H

