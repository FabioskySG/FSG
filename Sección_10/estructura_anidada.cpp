//Estructuras anidadas

#include<iostream>

using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2]; //Un arreglo de estructuras, en cada posicion habrá una estructura.

int main(){

    for(int i = 0; i<2; i++){

        fflush(stdin); //Vacia el buffer y permite digitar la segunda tanda de valores

        cout<<"Nombre: ";
        cin.getline(empleados[i].nombre, 20, '\n');

        cout<<"Direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');

        cout<<"Ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');

        cout<<"Provincia: ";
        cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');

        cout<<"Salario: ";
        cin>>empleados[i].salario;
        cout<<"\n";
    }

    //Imprimiendo los datos
    for(int i = 0; i<2; i++){
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Dirección: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
    }

    return 0;
}