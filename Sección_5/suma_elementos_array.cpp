//Define vector de numeros y calcula suma de sus elemetnos

#include<iostream>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5};
    int suma = 0;

    for(int i=0; i<5;i++){//Recordar que el array empieza en 0
        suma += numeros[i];    
    }

    cout<<"La suma de los elementos es: "<<suma<<endl;

    return 0;
}