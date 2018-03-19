#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, altura;
    int superficie, perimetro;

    printf("Ingrese la base del triangulo: ");
    scanf("%d", &base);

    fflush(stdin);
    printf("Ingrese la altura: ");
    scanf("%d", &altura);

    superficie= (base*altura)/2;
    printf("La superficie del triangulo es %d", superficie);

    return 0;
}
