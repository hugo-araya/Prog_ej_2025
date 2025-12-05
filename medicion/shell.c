#include <stdio.h>
#define LIMITE 10

void muestra(int []);

int main(){
    int k, p, i, j, v, temp;
    int cont = 0, cont1 = 0;
    int limit = LIMITE - 1;
    int vector[LIMITE] = {3, 8, 1, 5, 4, 0, 6, 9, 7, 2};
    //int vector[LIMITE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //int vector[LIMITE] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    //muestra(vector);
 // Inicio Ordenamiento
    k = LIMITE / 2;
    while (k >= 1){
        for (i = k; i < LIMITE; i++){
            v = vector[i];
            j = i - k;
            while (j >= 0 && vector[j] > v){
                vector[j + k] = vector[j];
                j = j - k;
            }
            vector[j + k] = v;
        }
        k = k/2;
    }
 // Fin del ordenamiento
    muestra(vector);
    //printf("Para %d elementos realiza %d comparaciones\n", LIMITE, cont);
    //printf("Para %d elementos realiza %d desplazamientos\n", LIMITE, cont1);
    return 0;
}

void muestra(int vector[]){
    printf("\nSalida vector\n");
    for (int i = 0; i < LIMITE; i++){
        printf("%d\n", vector[i]);
    }
}