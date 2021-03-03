/* Se basa en la divicsion de la lista en particiones a ordenar. Aplica "divide y vencerás". Tiene poco codigo
es mas rapido, mas eficiente mas elegante y mas interesante y eficiente de los algoritmos de ordenación.

El algoritmo divide los n elementos de una lista en 2 partes o particiones separadas por un elemento:
-Particion izquierda
-Elemento central denominado pivote
-Particion derecha

La particion se hace de tal forma que los elementos de la izquierda son menores que los de la derecha. Despues se
ordena cada lado indepentientemente.

Algoritmo:

1. Seleccionar el elemento central de a[] como pivote.
2. Dividir los elementos en particiones: izquierda y derecha.
3. Ordenar particion izquierda usando quickSort recursivamente.
4. Ordenar particion derecha usando quickSort recursivamente.
5. La solucion es particion izquierda por el pivote y la particion derecha.

central = (primero + ultimo)/2; (valor entero, despreciamos los decimales)

pivote = a[central];

indice i -> elementos izquierda
indice j -> elementos derecha

Si uno de la derecha es mayor que el pivote, se queda. Si es menor, se cambia.
Si uno de la izquierda es mayor, se cambia. Si es menor, se queda. 
Cuando uno de los dos cumpla la condicion de cambio, se queda esperando a que uno del otro lado tambien
cumpla dicha condicion para intercambiarse.
El algoritmo termina cuando i y j apuntan al mismo elemento o cuando i está a la derecha de j. En este momento tendremos
en la parte izquierda los elementos menores que el pivote y en la derecha los mayores.
Así, ordenamos cada lado por separado facilmente, volviendo a utilizar quicksort. */