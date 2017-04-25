//invertir cadena con punteros
#include<iostream>
using namespace std;
int voltear_p(int arr[], int tam){
	int cont;
	int *p, *q;
	p = arr;
	q = arr;
	for(cont = 0; cont < tam/2; cont++, p++){
		int temp;
		temp = *p;
		*p = *(q + tam-1 -cont);
		*(q + tam-1- cont)= temp;
	}
	for(int j=0;j<tam;j++){
		cout<<arr[j];
	}
	
	}


int main(){
 	int n;
	int cadena[n];
 	cout<<"Ingrese el numero de valores" <<endl;
 	cin>>n;
 	for(int i=0;i<n;i++){
 		cout<<"Posicion "<<i <<"  ";
 		cin>>cadena[i];
	 }
	voltear_p(cadena,n);
	 	

	 }
	 

