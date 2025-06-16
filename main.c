#include <stdio.h>
#include "include/arreglo.h"

int main() {
    Arreglo *arr = crear_arreglo(5);

    agregar_elemento(arr, 10);
    agregar_elemento(arr, 20);
    agregar_elemento(arr, 30);
    imprimir_arreglo(arr);

    eliminar_elemento(arr, 1);
    imprimir_arreglo(arr);

    printf("Elemento en índice 1: %d\n", obtener_elemento(arr, 1));

    liberar_arreglo(arr);
    return 0;
}
printf("Fin del programa.\n");

