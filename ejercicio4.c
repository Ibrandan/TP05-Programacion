#include <stdio.h>

int esBisiesto(int anio);

int main(void) {

    int anio1, anio2, rango;

    puts("Ingrese dos años separados por un espacio");
    scanf("%d %d", &anio1 ,&anio2);

    if(anio1 > anio2){}

    else if(anio1 < anio2){}

    else{}


    for (int i = 0; i < count; i++)
    {
        if(esBisiesto == 1) {
            printf("%d", i);
        }
    }
    

    printf("La cantidad de bisiestos entre %d y %d es: %d", anio1, anio2, rango);


    return 0;
}

int esBisiesto(int anio) {
    if(anio % 4 == 0 && !(anio % 100 == 0) ){
        return 1;
    }
    return 0;
}