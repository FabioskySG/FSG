//Longitud de una cadena - strlen()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "Hola que tal";
    int longitud = 0;

    longitud = strlen(palabra);

    cout<<"La longitud de la palabra es: "<<longitud<<endl;




    return 0;
}
