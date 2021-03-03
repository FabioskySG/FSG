//Define un vector y calcula si existe algun numero cuyo valor equivale a la suma del resto de numeros

#include<iostream>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,1};
    int suma = 0, mayor = 0;

    for(int i = 0; i<5;i++){
        suma += numeros[i];

        if(numeros[i] > mayor) mayor = numeros[i];
    }

    if (mayor == suma - mayor) //Esto significa que se cumplen los requisitos
        cout<<"El numero "<<mayor<<" equivale a la suma de los demás"<<endl;

    else
        cout<<"No existe ningun numero que sea la suma de los demás"<<endl;


    return 0;
}