#include <iostream>
#include "Persona.h"
#include "Gerente.h"
#include "Conserge.h"
#include "Birthday.h"
#include<vector>

using namespace std;

int main()
{
   Gerente Gerente1("Juan", "De la torre", "72131389", Birthday(15,9,1997),1500);
   Gerente Gerente2("Manuel","Velazquez","25487541", Birthday(12,12,1993),1800);
   Conserge Conserge1("Pedro","De la Haza","25625465", Birthday(20,03,1991),"Oficina 406");
   Conserge Conserge2("Francisco","Torres","26984866", Birthday(25,8,1987),"Oficina 317");
    vector <Persona*> personas;
    personas.push_back(&Gerente1);
    personas.push_back(&Gerente2);
    personas.push_back(&Conserge1);
    personas.push_back(&Conserge2);

    for(int x=0;x<personas.size();x++)
        personas[x]->Mostrar();

}

