#include<iostream>
using namespace std;
void intercambiar(int &i, int &j){
    int z;
    z = i;
    i = j;
    j = z;
    cout<<"Valor de x : "<<i<<endl;
    cout<<"Valor de y : "<<j<<endl;
}

int main(){
	int x,y;
	cout<<"Ingresa el valor de x -->"<<endl;
	cin>>x;
	cout<<"Ingresa el valor de y -->"<<endl;
	cin>>y;
	intercambiar(x,y);
	
	
	
}
