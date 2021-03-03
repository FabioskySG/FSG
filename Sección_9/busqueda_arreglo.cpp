//Búsqueda secuencial

//a[5] = {3,4,2,1,5}; dato = 4;

#include<iostream>

using namespace std;

int main(){
    int a[] = {3,4,2,1,5};
    int dato, i;
    char band = 'F';

    dato = 3;
    //Búsqueda secuencial
    i = 0;

    while((band == 'F') && (i<5)){
        if(a[i] == dato){
            band == 'V';
        }
        i++;
    }

    if(band == 'F'){
        cout<<"El número a buscar no existe en el arreglo"<<endl;
    }

    else if(band == 'V'){
        cout<<"El número ha sido encontrado en la posición: "<<i-1<<endl; //Ojo restamos 1 porque al salir del bucle también suma 1
    }

    return 0;
}