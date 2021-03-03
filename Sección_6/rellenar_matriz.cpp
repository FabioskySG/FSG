//Rellenar una matriz pidiendo filas y columnas

#include<iostream>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas;

    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite el numero de columnas: "; cin>>columnas;

    //Tomamos valores de la matriz
    for(int i=0; i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    //Mostramos la matriz
    for(int i=0; i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<" "<<numeros[i][j];
        }
        cout<<"\n";
    }

    return 0;
}