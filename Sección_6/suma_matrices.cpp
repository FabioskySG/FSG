//Suma de dos matrices cuadradas 3x3

#include<iostream>

using namespace std;

int main(){
    int numeros[3][3] = {{1,0,4},{2,3,2},{1,4,1}};
    int numeros2[3][3] = {{1,3,2},{4,1,1},{1,1,2}};

    cout<<"Mostrando matrices"<<endl;
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros2[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"La suma de las 2 matrices es: "<<endl;
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[i][j] + numeros2[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}