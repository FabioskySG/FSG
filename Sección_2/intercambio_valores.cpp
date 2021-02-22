//Escribe programa que interacmbie valores de 2 variables

#include<iostream>

using namespace std;

int main(){

    int x, y, aux;

    cout<<"Digita valor de x: "; cin>>x;
    cout<<"Digita valor de y: "; cin>>y;

    aux = x;
    x = y;
    y = aux;

    //Los ploteamos

    return 0;
}

