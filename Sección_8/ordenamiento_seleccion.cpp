/* ORDENAMIENTO POR SELECCIÓN

Requiere n² operaciones para ordenar n numeros.
Buscamos el minimo elemento de la lista y lo intercambiamos por la posicion 1.
Buscamos el siguiente minimo y lo colocamos en la siguiente posicion... y Asi n veces */

#include<iostream>

using namespace std;

int main(){
    int numeros[] = {3,2,1,5,4};
    int i, j, aux, min;

    //Algoritmo de ordenamiento de seleccion
    for(i=0; i<5; i++){
        min = i;
        for(j=i+1; j<5; j++){ //Mira el resto de posiciones a la derecha
            if(numeros[j] < numeros[min]){
                min = j; //Acabariamos teniendo que min = 1 (en la primera iteracion)
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }

    cout<<"Orden ascendente: ";
    for(i=0; i<5; i++){
        cout<<numeros[i]<<" ";
    }

    cout<<"\nOrden descendente: ";
    for(i=4; i>=0; i--){
        cout<<numeros[i]<<" ";
    }

    return 0;
}