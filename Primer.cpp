#include<iostream>
using namespace std;
int main(){
	int c=6,d;
	int x=c++; //asigno el valor de c a x y posteriormente se suma
	cout<<x<<endl;
	x=++c; // c vale 7 y le añado el ++
	cout<<x<<endl;	
	
	d=2;
	d+=2;
	cout<<d;
	d/=2;
	cout<< d;
}
