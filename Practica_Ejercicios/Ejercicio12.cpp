//Escriba una función reversa que tome como argumentos un arreglo de enteros y su longitud, dicha función debe revertir todo el contenido del arreglo original. La función no retorna ningún valor.
#include<iostream>
using namespace std;
void reversa(int cadena[], int tamanio){
	int temp;
	int k;
	k=tamanio-1;
	for(int i=0;i<tamanio/2;i++){
		temp=cadena[i];
		cadena[i]=cadena[k];
		cadena[k]=temp;
		k--;
		}
	for(int j=0;j<tamanio;j++){
		cout<<cadena[j];
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
	reversa(cadena,n);
	 	

	 }
