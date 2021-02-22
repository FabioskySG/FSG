/* Lee dos numeros y determina el mayor */

#include<iostream>

using namespace std;

int main(){
    float n1, n2;

    cout<<"Introduce 2 números: ";
    cin>>n1>>n2;

    if(n1 == n2) cout<<"Ambos números son iguales"<<endl;

    else{

        if(n1 > n2) cout<<"El mayor es: "<<n1<<endl;

        else cout<<"El mayor es: "<<n2<<endl;
    
    }

    return 0;
}