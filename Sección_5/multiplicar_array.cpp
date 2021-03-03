//Multiplica por 2 los elementos de un array introducido

#include<iostream>

using namespace std;

int main(){
    int numeros[5];

    for(int i = 0; i<5; i++){
        cout<<"Introduce los elementos del array: "; cin>>numeros[i];
    }

    for(int i = 0; i<5; i++){
        cout<<2*numeros[i]<<" ";
    }


    return 0;
}