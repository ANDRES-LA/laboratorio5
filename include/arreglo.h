#ifndef ARREGLO_H
#define ARREGLO_H

typedef struct {
    int *datos;
    int capacidad;
    int cantidad;
} Arreglo;

Arreglo *crear_arreglo(int capacidad);
void agregar_elemento(Arreglo *arr, int valor);
void eliminar_elemento(Arreglo *arr, int indice);
int obtener_elemento(Arreglo *arr, int indice);
void imprimir_arreglo(Arreglo *arr);
void liberar_arreglo(Arreglo *arr);

#endif

