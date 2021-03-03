//Define vector y muestreo en orden inverso

#include<iostream>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5};

    for(int i=4; i>=0; i--){
        cout<<numeros[i]<<endl;
    }

    return 0;
}