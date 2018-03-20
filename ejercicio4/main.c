#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, altura;
    int superficie, perimetro;

    printf("Ingrese la base del triangulo: ");
    scanf("%d", &base);

    printf("Ingrese la altura: ");
    fflush(stdin);
    scanf("%d", &altura);

    superficie= (base*altura)/2;
    perimetro= base*3;
    printf("La superficie del triangulo es %d y su perimetro es %d", superficie, perimetro);

    return 0;
}
