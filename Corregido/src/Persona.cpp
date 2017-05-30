#include "Persona.h"
#include<iostream>
using namespace std;
Persona::Persona(const string myNombre, const string myApellido, const string myDni, Birthday a)
    :nombre(myNombre),apellido(myApellido),dni(myDni),Birthday(a);{}

void Persona::Mostrar()
{
    cout <<"Nombre : "<<nombre<<endl;
    cout <<"Apellido : "<<apellido<<endl;
    cout <<"DNI : "<<dni<<endl;
    cout<<"Edad :"<<a<<"Anios"<<endl;
}

