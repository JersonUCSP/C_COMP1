#include <iostream>

using namespace std;

int main()
{	float a,b,c,d;
    cout <<"valor de a --->" ;
    cin>>a;
    cout <<"valor de b --->" ;
    cin>>b;
    cout<<"Ingrese el numero de operacion --> "<<endl;
    cout<<" 1 -> Suma  2 -> Resta  3-> Multiplicacion  4->Division "<<endl;
    cin>>c;
    if (c==1){
        d=a+b;
        cout <<"suma de "<< a <<" y "<< b <<" es  " <<d<<endl;}
        
    if (c==2){
        d=a-b;
        cout <<"resta de "<< a <<" y "<< b <<" es " <<d<<endl;}
    if (c==3){
        d=a*b;
        cout <<"mult. de "<< a <<" y "<< b <<" es " <<c<<endl;}
    if (c==4){
        d=a/b;
        cout <<"division "<< a <<" y "<< b <<" es " <<d<<endl;}
        
    
    main();
    
    return 0;
}

