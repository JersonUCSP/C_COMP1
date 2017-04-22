#include <iostream>

using namespace std;

int main()
{
    cout << "Por favor, ingrese un numero" << endl;
    int a;
    cin>>a;
    if(a>=-1 && a<=9){
        switch(a)
        {
        case -1:
            return 0;
            break;
        case 0:
            cout<<"Cero\n";
            main();
            break;
        case 1:
            cout<<"Uno\n";
            main();
            break;
        case 2:
            cout<<"Dos\n";
            main();
            break;
        case 3:
            cout<<"Tres\n";
            main();
            break;
        case 4:
            cout<<"Cuatro\n";
            main();
            break;
        case 5:
            cout<<"Cinco\n";
            main();
            break;
        case 6:
            cout<<"Seis\n";
            main();
            break;
        case 7:
            cout<<"Siete\n";
            main();
            break;
        case 8:
            cout<<"Ocho\n";
            main();
            break;
        case 9:
            cout<<"Nueve\n";
            main();
            break;
        }
    }

    else{
            cout<<"Numero no permitido, Ingresa uno dentro del rango"<<endl;
        main();}
    }


