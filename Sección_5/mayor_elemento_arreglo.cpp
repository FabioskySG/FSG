//Lea entrada de vector y saque el valor mayor

#include<iostream>

using namespace std;

int main(){
    int numeros[100], n, mayor = 0;

    cout<<"Indique cuantos elementos tiene su array: "; cin>>n;

    for(int i = 0; i<n; i++){
        cout<<"Introduce los elementos de array: "; cin>>numeros[i];

        if(numeros[i] > mayor) mayor = numeros[i];
    }

    cout<<"El mayor elemento del array es: "<<mayor<<endl;

    return 0;
}