//Millas a kilometros
#include <iostream>

using namespace std;

int main()
{
    cout <<"Ingresa numero de millas ----> ";
    float a;
    cin>>a;
    if(a>=0){
        a=a*1.60934;
        cout<<"El numero de kilometros es --> "<<a<<"\n";}
    else{
        cout<<"Inserte numero valido"<<endl;
        main();
}
}

