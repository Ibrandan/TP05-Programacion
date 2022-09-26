#include <stdio.h>

int esBisiesto(int anio);

int main(void) {

    int anio1, anio2, rango = 0, menor, mayor;

    puts("Ingrese dos años separados por un espacio");
    scanf("%d %d", &anio1 ,&anio2);
    
    if(anio1 != anio2){
        if(anio1 > anio2){
            mayor = anio1;
            menor = anio2;
        }

        else if(anio1 < anio2){
            mayor = anio2;
            menor = anio1;
        }
        puts("Los años bisiestos son:");
        for (int i = menor; i < mayor; i++)
        {
            if(esBisiesto(i) == 1) {
                rango++;
                printf("%d ", i);
            }
        }

        printf("\nLa cantidad de bisiestos entre %d y %d es: %d", anio1, anio2, rango);
    }
    else {
        puts("Los años ingresados son iguales");
    }

    return 0;
}

int esBisiesto(int anio) {
    if((anio % 4 == 0 || anio % 400 == 0)){
        return 1;
    }
    return 0;
}