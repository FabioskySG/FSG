/* Estructuras en C++
Es una coleccion de 1 o mas tipos de elementos denominados campos, cada uno de los cuales
puede ser un tipo de dato diferente. Ejemplo:

struct coleccion_CD {
    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char fecha_compra[20];
}; //Este punto y coma del final es importante

Declarando variables struct:

int main(){
    struct coleccion_CD CD1, CD2, CD3;

}

ó...

struct coleccion_CD {
    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char fecha_compra[20];
}CD1,CD2,CD3; //Declaro variables y pongo punto y coma; */