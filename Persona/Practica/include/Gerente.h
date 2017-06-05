#ifndef GERENTE_H
#define GERENTE_H
#include "Persona.h"
using namespace std;

class Gerente:public Persona
{
    protected:
        int sueldo;
    public:
        Gerente(string myNombre,string myApellido,string myDni, Birthday myCumple, int mySueldo );
        void Mostrar();


};

#endif // GERENTE_H
