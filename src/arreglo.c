#include <stdio.h>
#include <stdlib.h>
#include "arreglo.h"

Arreglo *crear_arreglo(int capacidad) {
    Arreglo *arr = (Arreglo *)malloc(sizeof(Arreglo));
    arr->datos = (int *)malloc(capacidad * sizeof(int));
    arr->capacidad = capacidad;
    arr->cantidad = 0;
    return arr;
}

void agregar_elemento(Arreglo *arr, int valor) {
    if (arr->cantidad < arr->capacidad) {
        arr->datos[arr->cantidad++] = valor;
    } else {
        printf("No se puede agregar más elementos, capacidad llena.\n");
    }
}

void eliminar_elemento(Arreglo *arr, int indice) {
    if (indice < 0 || indice >= arr->cantidad) return;
    for (int i = indice; i < arr->cantidad - 1; i++) {
        arr->datos[i] = arr->datos[i + 1];
    }
    arr->cantidad--;
}

int obtener_elemento(Arreglo *arr, int indice) {
    if (indice >= 0 && indice < arr->cantidad) {
        return arr->datos[indice];
    }
    return -1; // Valor por defecto si hay error
}

void imprimir_arreglo(Arreglo *arr) {
    printf("Arreglo: ");
    for (int i = 0; i < arr->cantidad; i++) {
        printf("%d ", arr->datos[i]);
    }
    printf("\n");
}

void liberar_arreglo(Arreglo *arr) {
    free(arr->datos);
    free(arr);
}

