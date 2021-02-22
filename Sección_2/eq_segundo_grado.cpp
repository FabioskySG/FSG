//Calcule ecuacion de segundo grado

#include<iostream>
#include<math.h> //Libreria matemática, sqrt y pow

using namespace std;

int main(){

float a,b,c,resultado1 = 0, resultado2 = 0;

cout<<"Valor de a: "; cin>>a;
cout<<"Valor de b: "; cin>>b;
cout<<"Valor de c: "; cin>>c;

resultado1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
resultado2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

cout<<"El primer resultado es: "<<resultado1<<endl;
cout<<"El segundo resultado es: "<<resultado2<<endl;

return 0;
}