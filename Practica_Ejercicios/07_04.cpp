//Inicializar una rreglo de n elementos, y en una funcion, me retonre la suma de los elementos 
//promedio
//invertir el arreglo
//ordenar los elementos 
//implementar una funcion para obtener el tamanio de una cadena 

#include<iostream>
using namespace std;
int suma(const int array[], const int tamanio){
	int result=0;
	for (int i=0;i<tamanio;result+=array[i++]);
		return result;
	
}

float promedio(const int array[], const int tamanio){
	return (float)suma(array,tamanio)/tamanio;
}

int invertir(int cadena[], int tamanio){
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
		cout<<cadena[j]<<" "<<endl;
	}
	
}



int ordenar (int arreglo[], int tamanio){
	int i,j,temporal;
	for(i=tamanio-1;i>0; i--){
		for(j=0; j<i;j++){
			if(arreglo[j]>arreglo[j+1]){
				temporal=arreglo[j];
				arreglo[j]=arreglo[j+1];
				arreglo[j+1]=temporal;
			}
		}
	}
	for(int j=0;j<tamanio;j++){
		cout<<arreglo[j]<<" "<<endl;
	}
	
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
	 cout<<"Suma "<<suma(cadena,n)<<endl;
	 cout<<"Promedio "<<promedio(cadena,n)<<endl;
	 cout<<"Lista invertida "<<invertir(cadena,n)<<endl;
	cout<<"Ordenada " << ordenar(cadena,n)<<endl;
	return 0;
	 }
 
 //CONTADOR DE CARACTERES 
 
 /*#include<iostream>
#include<string.h>
using namespace std;

int contador(char arreglo[],int tamanio){
	int a;
	for(int i=0;i<tamanio;i++){
		if(arreglo[i]!='/t' or arreglo[i]!='/n' or arreglo[i]!=' '){
			a+=1;
		}
	}
	return a;
}
 
int main(){
	cout<<"INgrese su cadena"<<endl;
	char cadena[15];
	cin>>cadena;
	int a=strlen(cadena);
	contador(cadena,a);
	return 0;
}
 

