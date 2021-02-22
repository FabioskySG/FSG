/* Hacer un menu con 3 opciones:

Cubo de un numero
Numero par o impar
Salir */

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int opcion;
    float numero, cubo;
    int num;

    cout<<"\t.:MENU:."<<endl;
    cout<<"1. Cubo de un número"<<endl;
    cout<<"2. Número par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opción: ";
    cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"\nDigite un número: ";
            cin>>numero;
            cubo = pow(numero,3);
            cout<<"El cubo del número es: "<<cubo<<endl;
            break;
        
        case 2:
            cout<<"\nDigite un número entero: ";
            cin>>num;  //Debe ser un número entero
            if(num%2 == 0) cout<<"El número es par"<<endl;
            else cout<<"El número es impar"<<endl;
            break;
        
        case 3: break;
    }

    return 0;
}