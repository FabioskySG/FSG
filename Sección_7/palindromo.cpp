//Determinar si una palabra es palíndromo

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[20];
    char palabra2[20];

    cout<<"Introduce tu palabra: ";
    cin.getline(palabra, 20, '\n');

    strcpy(palabra2, palabra);

    strsep(palabra2); //Invertimos palabra2

    if (strcmp(palabra, palabra2) == 0) cout<<palabra<<" es un palíndromo"<<endl;

    else cout<<palabra<<" no es un palíndromo"<<endl;

    return 0;
}