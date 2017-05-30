#include "Conserge.h"
#include<iostream>
Conserge::Conserge(const string myNombre, const string myApellido, const string myDni, Birthday a, const int sueldo)
    :Persona(myNombre, myApellido, myDni ,a), sueldo(mySueldo)){}

void Gerente::Mostrar()
{
    cout <<"Nombre : "<<nombre<<endl;
    cout <<"Apellido : "<<apellido<<endl;
    cout <<"DNI :"<<dni<<endl;
    cout <<"Edad : "<<a<<endl;
    cout <<"Sueldo : "<<sueldo<<endl;
}
