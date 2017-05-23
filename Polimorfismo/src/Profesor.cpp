#include "Profesor.h"
#include<iostream>
using namespace std;
Profesor::Profesor(const string myNombre, const string myApellido, const int myEdad, const string myCurso)
            : Persona(myNombre, myApellido, myEdad), curso(myCurso){}
void Profesor::Mostrar()
{
    cout <<"Nombre : "<<nombre<<endl;
    cout <<"Apellido : "<<apellido<<endl;
    cout <<"Edad : "<<edad<<endl;
    cout <<"Curso : "<<curso<<endl;
}
