#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define LIMITE 200000
void lee_datos(int *array, int n);
void muestra(int []);

int main(){
    int i, j, k, p, temp;
    int limit = LIMITE - 1;
    time_t t_1, t_2;

    int vector[LIMITE];
    //muestra(vector);
    lee_datos(vector, LIMITE);
    t_1 = time(NULL);
 // Inicio Ordenamiento
    for(k = 0; k < limit; k++) {
        p = k;
        for(i = k+1; i <= limit; i++){
            if(vector[i] < vector[p]){
                p = i;
            }
        }
        if(p != k) {
            temp = vector[p];
            vector[p] = vector[k];
            vector[k] = temp;
        }
    }
 // Fin del ordenamiento
    t_2 = time(NULL);
    //muestra(vector);
    printf("\n\nEstadistica del programa: Ordenamiento Seleccion ");   
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