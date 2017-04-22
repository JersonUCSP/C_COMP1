#include<iostream>
using namespace std;
void insertion_sort (int arr[], int length){
	 	int j, temp;
		
	for (int i = 0; i < length; i++){
		j = i;
		
		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
		}

	for (int k=0;k<length;k++)
	cout<<arr[k];
}

int main(){

	cout<<"Inserte en tamanio de su cadena"<<endl;
	int a;
	cin>>a;
	int cadena[a];
	for(int i=0;i<a;i++){
		cin>>cadena[i];
	}
	insertion_sort(cadena,a);
}
