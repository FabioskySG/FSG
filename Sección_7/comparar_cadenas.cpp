//Comparar cadenas - strcmp()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra1[] = "becerro";
    char palabra2[] = "avion";

   // if(strcmp(palabra1, palabra2) == 0) cout<<"Ambas cadenas son iguales"<<endl; //Devuelve un 0 si son iguales

    if(strcmp(palabra1,palabra2) > 0) cout<<palabra1<<" está despues alfabeticamente de "<<palabra2<<" (b despues de a)"<<endl;

    return 0;
}