/*7.La calificaci�n final de un estudiante es el promedio de tres notas:
la nota de pr�cticas que cuenta un 30% del total, la nota te�rica que cuenta un
60% y la nota de participaci�n que cuenta el 10% restante. Escriba un programa 
que lea las tres notas del alumno y escriba su nota final.*/

#include<iostream>

using namespace std;

int main(){

    float practica, teorica, participacion, final;

    cout<<"Digita la nota practica: "; cin>>practica;
    cout<<"Digita la nota teorica: "; cin>>teorica;
    cout<<"Digita la nota participacion: "; cin>>participacion;

    //practica *= 0.3 ---> practica = practica *0.3

    final = practica*0.3 + teorica*0.6 + participacion*0.1;

    cout<<"La nota final es: "<<final<<endl;

    return 0;
}