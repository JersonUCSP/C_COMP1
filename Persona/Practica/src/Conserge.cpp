#include "Conserge.h"
#include "Birthday.h"
#include "Persona.h"
#include<iostream>
using namespace std;
Conserge::Conserge(const string myNombre, const string myApellido, const string myDni, Birthday myCumple, const string myPtoTrabajo)
    :Persona(myNombre, myApellido, myDni , myCumple), puesto(myPtoTrabajo){}
/*
Conserge::~Conserge()
{
    //dtor
}
*/
void Conserge::Mostrar()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"DNI: "<<dni<<endl;
    cout<<"Puesto de trabajo: "<<puesto<<endl;
    if(cumple.mes>06){
        cout<<"Edad: "<< 2016-cumple.anho<<endl;
    }
    else{
        cout<<"Edad: "<<2017-cumple.anho<<endl;
    }

    cout<<endl;
}

