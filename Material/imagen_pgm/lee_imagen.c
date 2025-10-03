#include <stdio.h>

int main(){
    FILE *ent, *sal;
    char magica[5];
    char comen[100];
    int ancho, alto, grises, pixel;
    
    ent = fopen("Cartagena.pgm", "r");
    sal = fopen("Cartagena_4.pgm", "w"); 
    fgets(magica, 5, ent);
    fprintf(sal, "%s", magica);
    fgets(comen, 100, ent);
    fprintf(sal, "%s", comen);
    fscanf(ent, "%d", &ancho);
    fscanf(ent, "%d", &alto);
    fscanf(ent, "%d", &grises);   
    fprintf(sal, "%d %d\n%d\n", ancho, alto, grises); 
    for (int i = 0; i < alto; i++){
        for (int j = 0; j < ancho; j++){
            fscanf(ent, "%d", &pixel);
            pixel = pixel + 60;
            if (pixel > 255)
                pixel = 255;
            fprintf(sal, "%d\n", pixel);
        }
    }

    fclose(ent);
    fclose(sal);
    return 0;
}