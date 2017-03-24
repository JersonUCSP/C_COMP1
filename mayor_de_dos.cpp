#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Ingrese dos numeros" << endl;
    cin>>a;
    cin>>b;
    if(a<b)
        cout<<"Numero mayor es "<<b;
    if(a>b)
        cout<<"Numero mayor es "<<a;
    if(a==b)
        cout<<"son iguales"<<endl;
    return 0;
}
