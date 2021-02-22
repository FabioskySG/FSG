// Escribe la siguiente expresion matemática como expresion de C++

#include<iostream>

using namespace std;

int main(){

    float a,b, resultado = 0;

    cout<<"Digite valor de a: "; cin>>a;
    cout<<"Digite valor de b: "; cin>>b;

    resultado = (a/b) + 1;

    cout.precision(2); //Redondeo 2 números después de la coma
    cout<<"El resultado es: "<<resultado<<endl;


    return 0;
}