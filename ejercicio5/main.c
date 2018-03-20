#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int acumulador=0;
    int numeros=0;
    int promedio;

    for(int i=0; i<5; i++){
        printf("Ingrese un numero \n");
        scanf("%d", &num);
        acumulador+= num;
        numeros++;
    }

    promedio= acumulador/numeros;

    printf("El promedio es %d y la suma %d", promedio, acumulador);

    return 0;
}
