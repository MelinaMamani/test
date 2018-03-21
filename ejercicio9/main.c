#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[41];
    char localidad[41];

    printf("Ingrese nombre: ");
    scanf("%s", nombre);

    printf("Ingrese localidad: ");
    scanf("%s", localidad);

    printf("Usted se llama %s y vive en %s.", nombre, localidad);
    return 0;
}
