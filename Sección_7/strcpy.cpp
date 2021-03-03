//Copia el contenido de una cadena a otra - strcpy()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char nombre[] = "Alejandro";
    char nombre2[20];

    strcpy(nombre2, nombre); //Cadena a la que van los datos, cadena de donde vienen

    cout<<nombre2<<endl;

    return 0;
}