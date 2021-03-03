//Comparar 2 cadenas e indicar si son iguales. Si no lo son, sacar la mayor alfabeticamente

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra1[30], palabra2[30];

    cout<<"Digite una palabra: ";
    cin.getline(palabra1, 30, '\n');
    cout<<"Digite otra palabra: ";
    cin.getline(palabra2, 30, '\n');

    if(strcmp(palabra1, palabra2) == 0) cout<<"Las palabras son iguales"<<endl;

    else if(strcmp(palabra1, palabra2) > 0) cout<<palabra1<<" es mayor alfabeticamente"<<endl;

    else cout<<palabra2<<" es mayor alfabeticamente"<<endl;



    return 0;
}