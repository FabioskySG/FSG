/* Corredor: noimbre, edad, sexo, club, pedir datos y asginar categoria;

juvenil <= 18
señor <= 40
veterano > 40

e imprimir */

#include<iostream>
#include<string.h>

using namespace std;

struct corredor{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
}c1;

int main(){
    char categoria[20];

    cout<<"Nombre: ";
    cin.getline(c1.nombre, 20, '\n');
    cout<<"Edad: ";
    cin>>c1.edad;

    fflush(stdin); //No funciona en linux, pero es una mala praxis

    cout<<"Sexo: ";
    cin.getline(c1.sexo, 10, '\n');
    cout<<"Club: ";
    cin.getline(c1.club, 20, '\n');

    if(c1.edad <= 18){
        strcpy(categoria, "Juevenil");
    }

    else if(c1.edad <= 40){
        strcpy(categoria, "Senior");
    }

    else{
        strcpy(categoria, "Veterano");
    }

    cout<<"\n\nDatos corredor: "<<endl;
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;


    return 0;
}