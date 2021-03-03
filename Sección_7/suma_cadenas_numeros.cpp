//Pedir 2 cadenas de caracteres de numeros (entero y real) y sumarlo

#include<iostream>
#include<string.h>
#include<stdlib.h> //atoi y atof


using namespace std;

int main(){
    char cad1[10];
    int valorEntero;
    char cad2[10];
    float valorFlotante;

    cout<<"Digite un valor entero: ";
    cin.getline(cad1, 10, '\n');

    cout<<"Digite un valor flotante: ";
    cin.getline(cad2, 10, '\n');
    //Transofrmamos cadenas a numeros
    valorEntero = atoi(cad1);
    valorFlotante = atof(cad2);

    cout<<"La suma es: "<<valorFlotante+valorEntero<<endl;

    return 0;
}