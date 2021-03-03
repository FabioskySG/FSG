//Añadir o concatenar cadenas - strcat()


#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char cad1[] = "Esto es una cadena";
    char cad2[] = " de ejemplo";
    char cad3[30];

    strcpy(cad3,cad1); //cad1 se copia en cad3

    strcat(cad3, cad2); //cad3 ya es cad1 + cad2

    cout<<cad3<<endl;

    return 0;
}