//Tabla Farenheit a Celsius

#include <iostream>

using namespace std;

int main()
{
    float a;
    cout <<"Tabla de conversion de Farenheit a Celsius"<<endl;
    cout<<"Farenheit\tCelsius"<<endl;
    for(float i=0;i<=300;i+=20){
        a=((i-32)*5)/9;
        cout<<i<<"\t\t"<<a<<endl;
    }
}

