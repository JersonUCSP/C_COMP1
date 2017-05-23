#include <iostream>
#include "Alumno.h"
#include "Persona.h"
#include "Profesor.h"
using namespace std;

int main()
{
    Persona a0("Alberto", "Velazquez", 25);
    Profesor a1("Juan", "Alvarez",28,"CcomP");
    Alumno a2("Jose", "pacheco", 14, "Cuarto anio" );

    vector <Persona*> personas;
    personas.push_back(&a0);
    personas.push_back(&a1);
    personas.push_back(&a2);

    for(int i=0;i<personas.size();i++)
        personas[i]->Mostrar();

  /*        Persona &e = a0;
    cout << e.getPresentacion()<<"\n";
    cout << e.getEdad()<<"\n";

    Persona &i = a1;
    cout <<i.getPresentacion()<<"\n";
    cout <<i.getEdad()<<"\n";

    Persona &o =a2;
    cout <<o.getPresentacion()<<"\n";
    cout <<o.getEdad()<<"\n";

*/
}
