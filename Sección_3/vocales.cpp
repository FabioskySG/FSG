//Vocal mayuscula, minusculo o no vocal

#include<iostream>

using namespace std;

int main(){
    char letra;

    cout<<"Digite un caracter: ";
    cin>>letra;

    switch(letra){
        case 'a': //OJO a la comilla simple
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minúscula"<<endl; break; //Es suficiente con ponerlo en 1 porque se va a imprimir para los 5 casos
        case 'A': 
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"Es una vocal mayúscula"<<endl; break;
        default : cout<<"NO es una vocal"<<endl; break;
    }


    return 0;
}