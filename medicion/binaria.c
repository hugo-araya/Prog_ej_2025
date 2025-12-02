#include <stdio.h>
#define MAXIMO 10

int main(){
    int a[MAXIMO] = {1,2,3,4,5,6,7,8,9,10};
    int ini, fin, medio, buscado = 6, encontrado = 0;
    ini = 0;
    fin = MAXIMO - 1;
    medio = (ini + fin) / 2;
    while (ini != fin){
        if (a[medio] == buscado){
            encontrado = 1;
        }
        if (buscado < a[medio]){
            fin = medio - 1; 
        }
        else{
            ini = medio + 1;
        }
        medio = (ini + fin) / 2;
    }
    if (encontrado){
        printf("Encontrado\n");
    }
    else{
        printf("No encontrado\n");
    }
    return 0;
}