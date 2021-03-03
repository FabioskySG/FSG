//Introducir un array char, almacenarla y copiarla a otro array

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char frase[20], frase2[20];

    cout<<"Digite una frase: ";
    cin.getline(frase, 20, '\n');

    strcpy(frase2, frase);

    cout<<frase2<<endl;

    return 0;
}