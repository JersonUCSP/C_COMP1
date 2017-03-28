#include<iostream>
using namespace std;
int main(){
	int a,b,c,z;
	cout<<"Ingrese numeros"<<endl;
	cout<<"Valor primer numero"<<endl;
	cin>>a;
	cout<<"Valor segundo numero"<<endl;
	cin>>b;
	z=(a>b)?a:b;
	cout<<"El valor mayor es "<<z<<endl;
	cout<<"¿Desea hacer otra comparacion?"<<endl;
	cout<<"SI(1)       NO(2)"<<endl;
	cin>>c;
	if(c==1){
		main();
	}
}
