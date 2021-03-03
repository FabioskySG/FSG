//Leer entrada un vector de numeros y mostras los elemetnso con sus indices

#include<iostream>

using namespace std;

int main(){
    int numeros[100], n;

    cout<<"Digite el número de elementos deseados: "; cin>>n;

    for (int i = 0; i<n; i++){
        cout<<"Digite un número: ";
        cin>>numeros[i]; //Guardamos elemetnos
    }

//Ahora mostramos los elementos con sus indices
    for(int i=0; i<n; i++){
        cout<<"El elemento numero "<<i<<" -> "<<numeros[i]<<endl;
    }



    return 0;
}