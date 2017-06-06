#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include <string>
#include<iostream>
using namespace std;

class Birthday
{
private:
    int anho,mes,dia;
    //virtual void edad();

public:
    Birthday(int myDia,int myMes,int myAnho);

        virtual const int getFecha(){
        return mes;}
        virtual const int GetAnho(){
        return anho;}


    //void edad();


};
#endif BIRTHDAY_H
