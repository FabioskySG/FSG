/* La sentencia if

    if(condicion){
        Instrucciones1;
    }
    else{
        Instrucciones2;
    }
*/

#include<iostream>

using namespace std;

int main(){
    int numero, dato = 5; //Operador de asignación

    cout<<"Digita un número: ";
    cin>>numero;

    if(numero >= dato){     
        cout<<"El número es mayor o igual que 5"<<endl;
    }

    else{
        cout<<"El número es menor que 5"<<endl;
    }

    return 0;
}