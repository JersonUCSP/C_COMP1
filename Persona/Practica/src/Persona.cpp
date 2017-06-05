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

Birthday::Birthday(){}

Birthday::Birthday(int myDia, int myMes, int myAnho):
    dia(myDia), mes(myMes), anho(myAnho){}
/*
    Birthday:edad()
    {
        cout<<"Su edad es: "<<2017-anho<<"años"<<endl;
    }
*/

