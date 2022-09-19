#include <stdio.h>

void determinarCalificacion(float p1,float p2,float p3);

int main(void) {

    float punto1, punto2, punto3;
    int dni;

    puts("Ingrese Dni del alumno");
    scanf("%d", &dni);

    while(dni != 0){
        puts("Ingrese los puntajes por cada punto separados por un espacio");
        scanf("%f %f %f", &punto1, &punto2, &punto3);
        determinarCalificacion(punto1, punto2, punto3);
        puts("Ingrese Dni del alumno");
        scanf("%d", &dni);
    }
    
    return 0;
}

void determinarCalificacion(float p1,float p2,float p3){
    float nota = p1 + p2 +p3;
    if ((nota >= 6) && (p1 >= (3.5 * 0.40) && p2 >= (2.5 * 0.30) && p3 >= (4 * 0.70) )) {
        puts("Aprobada/o");
        printf("Nota: %.2f \n", nota);
    }
    else {
        puts("Desaprobada/o");
        printf("Nota: %.2f \n", nota);
    }
}
