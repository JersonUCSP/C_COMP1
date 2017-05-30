#include <iostream>
#include "Persona.h"
#include "Gerente.h"
#include "Conserge.h"
#include<vector>

using namespace std;

int main()
{
    //vector <Persona*> personas;
    Persona persona1("Jerson","mamani","84513554");
    Gerente gerente1("Juan", "Perez","72131389",Birthday(7,12,1997),"masculino");
    Conserge conserge1("Juan", "Gonzales", "56326154", 1200);

    vector <Persona*> personas;
    personas.push_back(&persona1);
    personas.push_back(&gerente1);
    personas.push_back(&conserge2);

    for(int i=0;i<personas.size();i++)
        personas[i]->Mostrar();
}
