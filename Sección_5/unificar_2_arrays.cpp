/*Define 2 vectores de caracteres y almacene el contenido en un nuevo vector*/

#include<iostream>

using namespace std;

int main(){
    char letras1[] = {'a','b','c','d','e'};
    char letras2[] = {'f','g','h','i','j'};
    char letras3[10];

    //Copio los elementos de letras1 a letras3

    for(int i = 0; i<5;i++){
        letras3[i] = letras1[i];
    }
    //Copio los elementos de letras2 a letras3
    for(int i = 5; i<10;i++){
        letras3[i] = letras2[i-5];
    }
    
    //Ploteo todos los elementos
    for(int i = 0; i<10;i++){
        cout<<letras3[i]<<endl;
    }


    return 0;
}