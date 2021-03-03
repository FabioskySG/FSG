//Leer matriz 3x3 y crear la transpuesta (cambiar columna i por fila i...)

#include<iostream>

using namespace std;

int main(){
    int numeros[3][3];

    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    cout<<"Matriz original\n";
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"Matriz transpuesta\n";
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[j][i]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}