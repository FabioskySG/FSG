//Expresion

#include<iostream>
#include<math.h> //Libreria matemática, sqrt y pow

using namespace std;

int main(){

float x, y, resultado;

cout<<"Valor de x: "; cin>>x;
cout<<"Valor de y: "; cin>>y;

resultado = sqrt(x)/(pow(y,2)-1);

cout<<"El resultado es: "<<resultado<<endl;



return 0;
}