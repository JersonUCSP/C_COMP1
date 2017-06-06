#include "Gerente.h"
#include<iostream>
using namespace std;
Gerente::Gerente( const string myNombre, const string myApellido, const string myDni, Birthday myCumple, int mySueldo)
    :Persona(myNombre,myApellido,myDni,myCumple),sueldo(mySueldo){}
/*
Gerente::~Gerente()
{
    //dtor
}
*/
void Gerente::Mostrar()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"DNI: "<<dni<<endl;
    cout<<"Sueldo: "<<sueldo<<endl;
    if(cumple.getFecha()>06){
        cout<<"Edad: "<< 2016-cumple.GetAnho()<<endl;
    }
    else{
        cout<<"Edad: "<<2017-cumple.GetAnho()<<endl;
    }
    cout<<endl;
}
