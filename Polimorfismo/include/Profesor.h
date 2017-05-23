#ifndef PROFESOR_H
#define PROFESOR_H
#include"Persona.h"

class Profesor:public Persona{
    string curso;

    public:
        Profesor(const string myNombre, const string myApellido, const int myEdad, const string myCurso);

        const string getPresentacion()
        {
            return nombre +"  "+ apellido + " " + curso ;
        }
        const string &getCurso() {return curso;}
        const int getEdad(){return edad;}
        virtual void Mostrar();
};

#endif // PROFESOR_H
