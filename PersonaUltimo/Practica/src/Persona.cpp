#include "Persona.h"
#include<iostream>
using namespace std;
Persona::Persona(string myNombre,string myApellido, string myDni, Birthday myCumple)
    :nombre(myNombre),apellido(myApellido),dni(myDni),cumple(myCumple){}
/*
Person::~Persona()
{
    //dtor
}
*/

