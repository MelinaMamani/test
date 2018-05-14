#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[5];
    int i, a = 0;
    int* vec;

    for(i=0; i<5; i++){
        printf("Ingresar: ");
        scanf("%d", vec+i);
    }
    for(i=0; i<5; i++){
        printf("%d", *(vec+i));
    }
}
