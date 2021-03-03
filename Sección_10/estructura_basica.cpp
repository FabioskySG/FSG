//Estructura básica en C++

#include<iostream>

using namespace std;

/* struct Persona{
    char nombre[20];
    int edad;
}
persona1 = {"Alejandro",20}, //OJO que es comilla doble
persona2 = {"Ruperto",15};

int main(){

    cout<<"Nombre1: "<<persona1.nombre;
    cout<<"\nEdad1: "<<persona1.edad<<endl;

    cout<<"\nNombre2: "<<persona2.nombre<<endl;
    cout<<"Edad2: "<<persona2.edad<<endl;



    return 0;
} */

struct Persona{
    char nombre[20];
    int edad;
}persona1;

int main(){
    cout<<"Nombre: ";
    cin.getline(persona1.nombre, 20, '\n');

    cout<<"Edad: ";
    cin>>persona1.edad;

    cout<<"\nImprimiendo datos\n";
    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;


    return 0;
}