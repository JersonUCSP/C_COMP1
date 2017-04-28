//El código fuente es el siguiente:
#include <iostream>

using namespace std;

bool esPalindromo(string cadena, int tamanio){
    for(int i = 0; i < tamanio/2+1; i++)
        if(cadena[i] != cadena[tamanio-i-1]) 
            return false;
    return true;   
}
int main(){
    string cadena;
    cout << "Ingresa la cadena: ";
    getline(cin,cadena);    
    esPalindromo(cadena,cadena.length()) ? 
        cout << "\nEs palindromo \n" : cerr << "\nNo es palindromo \n";    
   
    
    return 0;    
}
