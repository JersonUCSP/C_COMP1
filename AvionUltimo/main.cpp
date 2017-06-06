#include <iostream>
#include"Avion.h"
#include"Tower.h"
#include"Avion_1.h"
#include"Avion_2.h"
using namespace std;

int main()
{
    Tower control;
    Avion_1 a1;
    Avion_1 a2;
    Avion_2 aa1;
    Avion_2 aa2;
    control.A.push_back(&a1);
    control.A.push_back(&a2);
    control.A.push_back(&aa1);
    control.A.push_back(&aa2);



    for(size_t i=0;i<control.A.size();i++)
        cout<<control.A[i]->mensaje()<<endl;

}
