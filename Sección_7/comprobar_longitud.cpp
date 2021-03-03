//Pedir una cadena, verificar la longitud. Si es mayor de 10, mostrar la cadena

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char frase[50];
    cout<<"Digite una frase: ";
    cin.getline(frase, 50, '\n');

    if(strlen(frase) > 10){ //strlen devuelve un numero entero
        cout<<frase<<endl;
    }

    else cout<<"La cadena no supera los 10 caracteres"<<endl;

    return 0;
}