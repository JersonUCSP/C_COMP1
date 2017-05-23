#include "Alumno.h"
#include<iostream>
using namespace std;

Alumno::Alumno(const string myNombre, const string myApellido, const int myEdad, const string myGrado)
        :Persona(myNombre, myApellido, myEdad), grado(myGrado){}

void Alumno::Mostrar()
{
    cout <<"Nombre : "<<nombre<<endl;
    cout <<"Apellido : "<<apellido<<endl;
    cout <<"Edad : "<<edad<<endl;
    cout <<"Grado : "<<grado<<endl;

}
