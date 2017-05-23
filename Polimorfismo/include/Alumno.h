#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"

class Alumno:public Persona
{
    string grado;

    public:
        Alumno(const string myNombre, const string myApellido, const int myEdad, const string myGrado);


        const string getPresentacion(){
            return nombre+ " " + apellido+ " " +grado;
        }
        const string getGrado(){
            return grado;}
        const int getEdad(){return edad;}
        virtual void Mostrar();
};

#endif // ALUMNO_H
