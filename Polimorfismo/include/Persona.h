#ifndef PERSONA_H
#define PERSONA_H
using namespace std;
#include<iostream>
#include<string>
#include<vector>

class Persona
{
    protected:
        string nombre;
        string apellido;
        int edad;
    public:
        Persona(const string myNombre, const string myApellido, const int myEdad);
           virtual const string getPresentacion() const
            {
                return nombre + "  " + apellido ;
            }

        virtual const int getEdad() const {
            return edad;}
        virtual void Mostrar();
};

#endif // PERSONA_H
