#include<iostream>
#include<math.h>
using namespace std;

float linea(string c,int a, int b);
int main(){
	cout<<"Calculemos";
	string c;
	cin>> c;
	int a,b;
	cout<<"Primer operando ";
	cin>>a;
	cout<<"Segundo operando ";
	cin>>b;
	linea(c,a,b);
	
}

float linea(string c,int a, int b){
	if(c == "+"){
		cout <<a+b;
		return 0;
	}
	else if(c == "-"){
		cout <<a-b;
		return 0;
	}
	else if(c == "*"){
		cout <<a*b;
		return 0;
	}	
	else if(c == "/"){
		cout <<a/b;
		return 0;
	}
	else if(c == "%"){
		cout <<a%b;
		return 0;
	}
	
}

