#include "Persona.h"
#include<iostream>
using namespace std;
Persona::Persona(const string myNombre, const string myApellido, const int myEdad): nombre(myNombre), apellido(myApellido), edad(myEdad){}

void Persona::Mostrar()
{
    cout <<"Nombre : "<<nombre<<endl;
    cout <<"Apellido : "<<apellido<<endl;
    cout <<"Edad : "<<edad<<endl;
}
