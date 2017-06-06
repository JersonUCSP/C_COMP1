#include "Tower.h"
#include<iostream>

using namespace std;

void Tower::imprimir()
{
    for(size_t i=0;i<A.size();i++)
        cout<<A[i]->mensaje();
}
