// Escriba la expresion matemática en C++

#include<iostream>

using namespace std;

int main(){

    float a, b, c, d, resultado = 0;

    cout<<"Valor de a: "; cin>>a;
    cout<<"Valor de b: "; cin>>b;
    cout<<"Valor de c: "; cin>>c;
    cout<<"Valor de d: "; cin>>d;

    resultado = (a+b)/(c+d)+1;

    cout.precision(3);

    cout<<"El resultado es: "<<resultado<<endl;

    return 0;
}