#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char letra;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("Ingrese una letra: ");
    fflush(stdin);
    scanf("%c", &letra);

    printf("El numero que ingreso es %d", numero);
    printf("La letra que ingreso es %c", letra);

    return 0;
}
