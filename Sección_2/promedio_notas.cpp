//Programa lee notas y calcula media

#include<iostream>

using namespace std;

int main(){

    float nota1, nota2, nota3, promedio;

    cout<<"Digita primera nota: "; cin>>nota1;
    cout<<"Digita segunda nota: "; cin>>nota2;
    cout<<"Digita segunda nota: "; cin>>nota3;

    promedio = (nota1 + nota2 + nota3)/3;

    cout.precision(2);

    cout<<"El promedio de las 3 notas es: "<<promedio<<endl;

    return 0;
}