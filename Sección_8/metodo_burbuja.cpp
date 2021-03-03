/* MÉTODO DE LA BURBUJA

Es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento del array con el siguiente, y los intercambia si estan mal colocados.
Es necesario revisar la lista varias veces hasta que no se necesiten mas intercambios, lo que significa que esta ordenada.
--Los numeros mas pequeños subirán hasta las primeras posiciones del array hasta que esté ordenado.
Ejemplo:

Si 

numeroActual > numeroSiguiente 
cambio;

Repetimos el algoritmo hasta que la lista esté ordenada. */

#include<iostream>

using namespace std;

int main(){
    int numeros[] = {4, 1, 2, 3, 5};
    int i, j, aux;

    //Algoritmo del metodo burbuja
   // for(i = 0; i<5; i++){
        for(j=0; j<5; j++){
            if(numeros[j] > numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
  //  }

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