#include <stdio.h>

int main(void) {

    int num1, num2, operacion, resultado;

    switch (operacion)
    {
    case 1:
        resultado = suma(num1, num2);
        break;
    case 2:
        resultado = producto(num1, num2);
        break;
    case 3:
        resultado = resta(num1, num2);
        break;
    case 4:
        resultado = division(num1, num2);
        break;
    case 5:
        resultado = resto(num1, num2);
        break;
    case 6:
        resultado = producto(num1, num2);
        break;    
    
    default:
        break;
    }

    return 0;
}

int suma(int a, int b) {
    return a + b;
}

int producto(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int division(int a, int b) {
    return a - b;
}

int resto(int a, int b) {
    return a - b;
}

int potencia(int a, int b) {
    return a + b;
}
