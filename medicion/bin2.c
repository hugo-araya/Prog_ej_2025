#include <stdio.h>

int busquedaBinaria(int arr[], int inicio, int fin, int valor);

int main(void) {
    int arr[] = {2, 3, 4, 10, 40};
    int valor = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int resultado = busquedaBinaria(arr, 0, n - 1, valor);

    if (resultado == -1)
        printf("El elemento no está presente en el arreglo");
    else
        printf("El elemento está presente en el índice %d", resultado);
    return 0;
}

// Función de búsqueda binaria (recursiva)
int busquedaBinaria(int arr[], int inicio, int fin, int valor) {
    if (fin >= inicio) {
        int medio = inicio + (fin - inicio) / 2;

        // Si el elemento está en el medio
        if (arr[medio] == valor)
            return medio;

        // Si es menor que el medio, buscar en la izquierda
        if (arr[medio] > valor)
            return busquedaBinaria(arr, inicio, medio - 1, valor);

        // Si es mayor, buscar en la derecha
        return busquedaBinaria(arr, medio + 1, fin, valor);
    }

    // El elemento no está presente en el arreglo
    return -1;
}
