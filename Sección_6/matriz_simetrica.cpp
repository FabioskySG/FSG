//Determinar si una matriz es simetrica o no. Esto sucede si es cuadrad e igual a su matriz transpuesta

#include<iostream>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas;
    char bandera = 'F';

    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite el numero de columnas: "; cin>>columnas;

    //Tomamos valores de la matriz
    for(int i=0; i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    if(filas == columnas){
        for(int i=0; i<filas;i++){
             for(int j=0;j<columnas;j++){
                if(numeros[i][j]==numeros[j][i]) bandera = 'V';
            }
        }

    }

    if(bandera == 'V') cout<<"La matriz es simétrica"<<endl;

    else cout<<"La matriz no es simétrica"<<endl;



    return 0;
}