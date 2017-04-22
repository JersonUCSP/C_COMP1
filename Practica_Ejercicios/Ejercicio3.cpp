//Par o impar hasta el -1
#include <iostream>

using namespace std;

int main()
{
    cout << "Ingresa numero" << endl;
    int a;
    cin>>a;
    if(a!=-1){
        if(a==0)
        cout<<"no es par ni impar"<<endl;
        else if(a%2==0){
            cout<<"Es un numero par"<<endl;
        }
        else{
            cout<<"Es un numero impar"<<endl;
        }
        main();
    }


    else{
        return 0;
    }
}


