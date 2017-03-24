#include <iostream>
using namespace std;

int main(){

cout<<"Ingrese las variables"<<endl;
int x,y;
cout<<"Valor de x"<<endl;
cin>>x;

cout<<"Valor de y"<<endl;
cin>> y;
x=x+y;
y=x-y;
x=x-y;
cout<<"Valor de x " << x << endl;
cout<<"Valor de y " << y << endl;
}
