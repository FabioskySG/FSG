//Crear cadena, pedir nombre al usuario y añadir el nombre a la primera cadena

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char cad[] = "Hola que tal ";
    char nombre[30];

    cout<<"Digite su nombre: ";
    cin.getline(nombre, 30,'\n');

    strcat(cad, nombre); //Concatenando cadenas

    cout<<cad<<endl;

    //No funciona bien

    return 0; 
}