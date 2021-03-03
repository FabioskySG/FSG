//ORDENACIÓN RAPIDA - QUICKSORT - El mejor método de todos.

#include<iostream>

using namespace std;

void intercambio(float &x, float &y){
	float aux;

	aux = x;
	x = y;
	y = aux;
}

void quick_sort(float a[], int primero, int ultimo){ //Le pasamos el array y el índice del primer y el ultimo elemento
    int i, j, central;
    float pivote; //Tiene que ser del mismo tipo que los datos del array

    central = (primero + ultimo)/2;
    pivote = a[central];
    i = primero; //Normalmente sera 0
    j = ultimo; //Normalmente sera numeroElementos - 1

    do{
        while(a[i] < pivote) i++;   //Mientras sea menor avanzamos. Cuando sea mayor tendremos que intercambiar.
        while(a[j] > pivote) j--;   //Mismo razonamiento, pero con mayor.
                                    //En este punto tenemos a la izquierda un mayor y a la derecha un menor.
        if(i<=j){
            intercambio(a[i],a[j]);
            i++;
            j--;
        }

    }while(i<=j); //Sucede cuando i y j se cruzan o caen sobre el mismo indice (recordar que: i++ y j--)
    //En este punto ya tenemos a la izquierda los elementos menores y a la derecha los mayores
    if(primero < j){
        quick_sort(a, primero, j); //Ordenamos sublista izquierda
    }
    if(i < ultimo){
        quick_sort(a, i, ultimo); //Ordenamos sublista derecha
    }
}

int main(){
	float arreglo[] = {4,7,1,8,2,10,5,9,3,6};

	quick_sort(arreglo, 0, 9);

	cout<<"Arreglo ordenado - Ascendente"<<endl;
	for(int i = 0; i<10; i++){
		cout<<arreglo[i]<<"|";
	}

	cout<<"\nArreglo ordenado - Descendente"<<endl;
	for(int i = 9; i>=0; i--){
		cout<<arreglo[i]<<"|";
	}

	cout<<"\n";

    return 0;
}