#include <iostream>

using namespace std;

int main()
{
    char nombre[15];
    float numero, valor, altura;
    cout << "Inserta tu nombre" << endl;
    cin>>nombre;
    cout << "Bienvenido " << nombre <<endl;
    cout << "Que deseas obtener"<< endl;
    cout << "1. Area del circulo        2. Area del cuadrado        3. Area del rectangulo"<<endl;
    cin>>numero;
     if (numero==1){
        cout <<"Ingresa el radio " <<endl;
        cin>>valor;
        valor=valor*valor;
        valor=valor*3.14;
        cout<<"El area del circulo es"<<valor<<endl;}

    if (numero==2){
        cout <<"Ingresa uno de los lados " <<endl;
        cin>>valor;
        valor=valor*valor;
        cout<<"El area del cuadrado es "<<valor<<endl;}

    if (numero==3){
        cout <<"Ingresa la base " <<endl;
        cin>>valor;
        cout <<"Ingresa la altura " <<endl;
        cin>>altura;
        cout<<"El area del rectangulo es "<<valor*altura<<endl;}
    main();

    return 0;
}
