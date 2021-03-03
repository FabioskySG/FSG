//Transformar una cadena a numeros - atoi() y atof() EN LIBRERIA STDLIB

#include<iostream>
#include<string.h>
#include<stdlib.h>


using namespace std;

int main(){
    char cad[] = "123";
    int numero;
    char cadf[] = "123.456";
    float numerof;

    numero = atoi(cad);
    numerof = atof(cadf);

    cout<<numero<<endl;
    cout<<numerof<<endl;

    return 0;
}

