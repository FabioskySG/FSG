//ORDENAMIENTO SHELL

#include<iostream>

using namespace std;

void intercambio(float &x, float &y){
    float aux;

    aux = x;
    x = y;
    y = aux;
}

void ordenacion_shell(float a[],int n){ //Array y numero de elementos del array
    int salto, i, j, k;
    salto = n/2;

    while(salto>0){
        for(i=salto; i<n; i++){
            j = i - salto;              //Será 0 en un inicio, pero conforme aumenta i aumenta la posicion inicial estudiada
            while(j>=0){                //Controlamos que no se den vueltas de más
                k = j + salto;          //Será la posicion con la que comparamos
                if(a[j] <= a[k]){       //El par de elementos están ordenados
                    j = -1;             //Salimos del while y a[j] y a[k] avanzan una posicion
                }
                else{                   //Par de elementos desordenados
                    intercambio(a[j],a[k]);
                    j -= salto;         //Daríamos 1 vuelta de manos para comprobar
                }
            }
        }
    }
    salto = salto/2;
}

int main(){
    float arreglo[] = {4,1,2,20,12,16,7,19,24,17,25,32};
    int i;

    ordenacion_shell(arreglo, 12);

    cout<<"Orden ascendente: ";
    for(i=0; i<5; i++){
        cout<<arreglo[i]<<" ";
    }

    cout<<"\nOrden descendente: ";
    for(i=4; i>=0; i--){
        cout<<arreglo[i]<<" ";
    }

    return 0;
}