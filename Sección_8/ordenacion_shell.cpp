/* ORDENACION SHELL
La ordenacion Shell debe su nombre a su inventor Donal L. Shell. Se suele denominar ordenacion por insercion con 
incrementos decrecientes. Es una mejora de la insercion directa.

En el algoritmo de insercion se compara cada elemento con los de su izquierde. El algoritmo shell modifica los saltos contiguos
por saltos de mayor tamaño y con ello consigue una ordenacion más rapida. Generalmente se toma como salto inicial
el valor n/2 (siendo n el numero de elementos). Luego en cada iteracion se reduce el salto a la mitad hasta que
el salto es de tamaño 1.

Los pasos a seguir para una lista de n elementos son:

1. Dividir la lista en n/2 grupos de 2, considerando un incremento o salto entre los elementos de n/2.
2. Se clasifica cada grupo por separado comparando las parejas de elementos y si no estan ordenados se intercambian.
3. Se divide ahora la lista entre n/4 con un salto tambien de n/4 y se clasifica cada grupo por separado.
4. Asi sucesivamente se sigue dividiento entre 2 y clasificando cada grupo por separado.
5. El algoritmo termina cuando el salto es de tamaño 1.

salto = n/2;

Si (a[j] <= a[k]) Entonces
    arreglo ordenado;
Sino
    intercambio;
Cuando para un mismo salto, esten ordenados todos los elementos, disminuimos el salto entre 2. Repetios el proceso. */