//Pedir numero de filas y columnas y rellenar con numeros aleatorios. Copiar en otra matriz y mostrarla

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas, dato, numeros2[100][100];

    cout<<"Introduce el numero de filas: "; cin>>filas;
    cout<<"Introduce el numero de columnas: "; cin>>columnas;

    srand(time(NULL));

    //Rellenando con numeros aleatorios
    for(int i=0; i<filas;i++){
        for(int j=0;j<columnas;j++){
            dato = 1 + rand()%(100); //numeros aleatorios entre 1 y 100
            numeros[i][j] = dato;
        }
    }

    for(int i=0; i<filas;i++){
        for(int j=0;j<columnas;j++){
            numeros2[i][j] = numeros[i][j];
        }
    }

    for(int i=0; i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<numeros2[i][j]<<" ";
        }
        cout<<"\n";
    }


}