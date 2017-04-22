//Funcion potencia
#include <iostream>

using namespace std;

int potencia(int base,int exponente){
int resultado=1;
for(int i=1;i<=exponente;i+=1){
    resultado=resultado*base;
}
cout<<"Resultado = "<<resultado;
}

int main()
{
    int a,b;
    cout << "Ingrese la base" << endl;
    cin>>a;
    cout << "Ingrese el exponente" << endl;
    cin>>b;
    potencia(a,b);

    }

