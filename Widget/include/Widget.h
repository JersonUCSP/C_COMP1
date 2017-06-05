#ifndef WIDGET_H
#define WIDGET_H
#include<iostream>
using namespace std;


class Widget
{
    public:
        virtual int f(){
        return 1;}
};

void do_it (Widget *w);
#endif // WIDGET_H
