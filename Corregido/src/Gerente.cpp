#include "Gerente.h"
using namespace std;
#include<iostream>
Gerente::Gerente(const string myNombre, const string myApellido, const string myDni, Birthday a, const string mySexo)
    :Persona(myNombre, myApellido, myDni ,a), sexo(mySexo){}

void Gerente::Mostrar()
{
    cout <<"Nombre : "<<nombre<<endl;
    cout <<"Apellido : "<<apellido<<endl;
    cout <<"DNI :"<<dni<<endl;
    cout <<"Edad : "<<a<<endl;
    cout <<"Sexo : "<<sexo<<endl;
}
