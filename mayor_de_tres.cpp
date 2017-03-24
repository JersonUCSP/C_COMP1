#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "Inserte numeros!" << endl;
    cin>>a;
    cin>>b;
    cin>>c;

    if (a>b){
        if(a>c)
            cout<<"el mayor es "<<a;}

    if (b>a){
        if (b>c)
            cout<<"el mayor es "<<b;
    }
    else
        cout<<"el mayor es "<<c;
    return 0;
}
