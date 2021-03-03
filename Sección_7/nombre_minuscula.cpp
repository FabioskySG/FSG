//Pedir nombre, si empieza por A, pasar a minusculas

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char nombre[20];

    cout<<"Digite su nombre en mayusculas: ";
    cin.getline(nombre, 20, '\n');

    if(strncmp(nombre, "A", 1) == 0){ //Comprobamos entre los 2 arrays el numero de caracteres elegidos a la derecha
        strlwr(nombre);
        cout<<nombre<<endl;
    }

    else cout<<"El nombre no empieza por A"<<endl;

    return 0;
}