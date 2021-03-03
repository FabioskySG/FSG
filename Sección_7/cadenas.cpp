//Cadenas de caracteres - Es un array de caracteres

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "Alejandro";
    char palabra2[] = {'A','l','e','j','a','n','d','r','o'};
    char nombre[30];

    cout<<"Digite su nombre: ";
    cin.getline(nombre, 20, '\n'); //Variable, numero de espacios disponibles, cuanto queremos que termine

    cout<<nombre<<endl;

    cout<<palabra<<endl;
    cout<<palabra2<<endl;


    return 0;
}

