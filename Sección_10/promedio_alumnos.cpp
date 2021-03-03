/* Hacer estructura alumno con nombre, edad, promedio. Pedir datos para 3 y ver cual tiene mejor promedio e imprimirlo
*/
#include<iostream>

using namespace std;

struct alumno{
    char nombre[20];
    int edad;
    float promedio;
}alumnos[3];

int main(){
    float mayor = 0;
    int pos;


    for(int i = 0; i<3; i++){ //Guardamos datos de alumnos
        fflush(stdin);
        cout<<i+1<<". Nombre: "; cin.getline(alumnos[i].nombre, 20, '\n');
        cout<<i+1<<". Edad: "; cin>>alumnos[i].edad;
        cout<<i+1<<". Promedio: "; cin>>alumnos[i].promedio;

        if(alumnos[i].promedio > mayor){ //Guardamos mayor nota
            mayor = alumnos[i].promedio;
            pos = i;
        }
    }

    //Imprimiendo datos

    cout<<"\nNombre: "<<alumnos[pos].nombre<<endl;
    cout<<"Edad: "<<alumnos[pos].edad<<endl;
    cout<<"Promedio: "<<alumnos[pos].promedio<<endl;


    return 0;
}