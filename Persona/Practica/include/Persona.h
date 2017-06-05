#ifndef PERSONA_H
#define PERSONA_H
#include "Birthday.h"
#include <string>
#include<iostream>
using namespace std;

class Birthday
{
public:
    int anho,mes,dia;
public:
    Birthday();
    Birthday(int myDia,int myMes,int myAnho);
    //void edad();
    void edad();

};



class Persona
{
protected:
    string nombre;
    string apellido;
    string dni;
    Birthday cumple;

public:
    Persona(const string myNombre, const string myApellido, const string myDni, Birthday myCumple );
        //virtual void edad()=0;
        virtual void Mostrar()=0;
};


#endif // PERSONA_H
