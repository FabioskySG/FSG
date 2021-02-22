//Lee 2 catetos y calcula y saca la hipotenusa

#include<iostream>
#include<math.h> //Libreria matemática, sqrt y pow

using namespace std;

int main(){

    float cateto1, cateto2, hipotenusa;

    cout<<"Introduce primer cateto: "; cin>>cateto1;
    cout<<"Introduce segundo cateto: "; cin>>cateto2;

    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));// pow(valor, exponente)

    cout.precision(2);
    cout<<"La hipotenusa es: "<<hipotenusa<<endl;



    return 0;
}