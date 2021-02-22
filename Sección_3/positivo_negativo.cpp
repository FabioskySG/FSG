//Numero negativo o positivo

#include<iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Introduce un número entero: "; cin>>numero;

    if (numero == 0) cout<<"\nEl número es 0"<<endl;


    else if (numero > 0) cout<<"\nEl número es positivo"<<endl;

    else cout<<"\nEl número es negativo"<<endl;

    return 0;
}