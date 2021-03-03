//Define vector de numeros y calcula multipliaccion de sus elemetnos

#include<iostream>

using namespace std;

int main(){
    int numeros[] = {1,8,3,5,5};
    int multiplicacion = 1;

    for(int i=0; i<5;i++){//Recordar que el array empieza en 0
        multiplicacion *= numeros[i];    
    }

    cout<<"La multiplicacion de los elementos es: "<<multiplicacion<<endl;

    return 0;
}