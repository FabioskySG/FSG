//ORDENAMIENTO POR INSERCIÓN
/* Manera natural de ordenar. Requiere n² operaciones para ordenar n operaciones
Comprobamos si el elemento de la izquierda ya es menor que el numero a estudiar.
Ejemplo

Si numeroIzq > numeroActual
cambio; */

#include<iostream>

using namespace std;

int main(){
    int numeros[] = {4,2,3,1,5};
    int i, pos, aux;

    //Algoritmo del Ordenamiento por Inserción
    for(i=0;i<5;i++){
        pos = i;
        aux = numeros[i];

        while((pos>0) && (numeros[pos-1] > aux)) {//NumeroIzq > numeroActual
            numeros[pos] = numeros[pos-1];
            pos--;
        } 
        numeros[pos] = aux;
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