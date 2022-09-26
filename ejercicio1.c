#include <stdio.h> 
#include <ctype.h>

void mostrarCancion(char cancion, char vocal);
int esVocal(char letra);

int contVocal = 0, contMayus = 0;

int main(void)
{
    char cancion, vocal;
    puts("Ingrese una vocal");
    scanf("%c", &vocal);

    puts("Ingrese la estrofa de una cancion con un punto al final");
    scanf("%c", &cancion);

    while (cancion != '.')
    {
        mostrarCancion(cancion, vocal);
        scanf("%c", &cancion);
    }
    printf("\n Cantidad de vocales: %d ", contVocal);
    printf("\n Cantidad de mayusculas: %d", contMayus);
    return 0;
}

void mostrarCancion(char cancion, char vocal){
    if (isupper(cancion) > 0)
    {
        contMayus++;
        tolower(cancion);
    }
    if (esVocal(cancion) == 1)
    {
        contVocal++;
        cancion = vocal;
    }
    printf("%c", cancion);
}

int esVocal(char letra){
    if (letra == 'a',letra == 'e',letra == 'i',letra == 'o',letra == 'u')
    {
        return 1;
    }
    return 0;
}