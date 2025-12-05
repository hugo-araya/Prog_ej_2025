#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define LIMITE 200000
void lee_datos(int *array, int n);
void muestra(int []);

int main(){
    int i, j, temp;
    time_t t_1, t_2;

    int vector[LIMITE];
    //muestra(vector);
    lee_datos(vector, LIMITE);
    t_1 = time(NULL);
 // Inicio Ordenamiento
    for (i = 1; i < LIMITE; i++) {
        temp = vector[i];
        j = i - 1;
        while ( (vector[j] > temp) && (j >= 0) ) {
            vector[j + 1] = vector[j];
            j--;
        }
        vector[j + 1] = temp;
    }
 // Fin del ordenamiento
    t_2 = time(NULL);
    //muestra(vector);
    printf("\n\nEstadistica del programa: Ordenamiento Insercion ");   
    printf("\n\nCantidad de datos = %d",LIMITE);
    printf("\nTiempo 1 = %ld",t_1);
    printf("\nTiempo 2 = %ld",t_2);
    printf("\n\nTiempo Total = %lf\n\n",difftime(t_2, t_1));
    return 0;
}

void muestra(int vector[]){
    printf("\nSalida vector\n");
    for (int i = 0; i < LIMITE; i++){
        printf("%d\n", vector[i]);
    }
}

void lee_datos(int *array, int n){
    FILE *ent;
    int i;
    int dato;
    ent = fopen("datos_aleatorios.txt","r");
    for (i = 0; i < n; i++){
        fscanf(ent, "%d", &dato);
        array[i] = dato;
    }
    fclose(ent);
}