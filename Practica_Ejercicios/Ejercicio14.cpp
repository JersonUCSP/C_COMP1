//Escriba una función recursiva para hallar la suma de los elementos de un arreglo
#include<iostream>
using namespace std;
int suma_arreglo( int cadena[], int tamanio);

int main(){
 	int n;
	int cadena[n];
 	cout<<"Ingrese el numero de valores" <<endl;
 	cin>>n;
 	for(int i=0;i<n;i++){
 		cout<<"Posicion "<<i+1 <<"  ";
 		cin>>cadena[i];
	 }
	cout<<"La suma de forma recursiva es "<<suma_arreglo (cadena,n);
	return 0;
}
int suma_arreglo( int cadena[], int tamanio){
	int suma = 0;
	if(tamanio==0){
		suma+=cadena[0];}
		
	else{
		suma=cadena[tamanio]+ suma_arreglo(cadena,tamanio-1);
	}
	return suma;
}


