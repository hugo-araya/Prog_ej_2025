#include <stdio.h>
#define LIMITE 10

void muestra(int []);

int main(){
    int i, j, temp;
    int cont = 0, cont1 = 0;
    int vector[LIMITE] = {3, 8, 1, 5, 4, 0, 6, 9, 7, 2};
    //int vector[LIMITE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //int vector[LIMITE] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    //muestra(vector);
 // Inicio Ordenamiento
    for (i = 1; i < LIMITE; i++){
        for (j = 0 ; j < LIMITE - 1; j++){
            cont++;
            if (vector[j] > vector[j+1]) {
                cont1++;
                temp = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = temp;
            }
        }
    }
 // Fin del ordenamiento
   // muestra(vector);
    printf("Para %d elementos realiza %d comparaciones\n", LIMITE, cont);
    printf("Para %d elementos realiza %d intercambios\n", LIMITE, cont1);
    return 0;
}

void muestra(int vector[]){
    printf("\nSalida vector\n");
    for (int i = 0; i < LIMITE; i++){
        printf("%d\n", vector[i]);
    }
}