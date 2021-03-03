// Convertir 2 cadenas de minusculas a MAYUSCULAS, compararlas y ver si son iguales

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra1[20], palabra2[20];

    cout<<"Digite una palabra: ";
    cin.getline(palabra1, 20, '\n');
    cout<<"Digite otra palabra: ";
    cin.getline(palabra2, 20, '\n');

    strupr(palabra1);
    strupr(palabra2);

    if(strcmp(palabra1, palabra2) == 0) cout<<"Las palabras son iguales"<<endl;

    else cout<<"Las palabras son distintas"<<endl;



    return 0;
}