#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    /*printf("Ingrese edad: ");
    scanf("%d", &edad);
    while(edad<0 || edad>100){
        printf("Reingrese edad: ");
        scanf("%d", &edad);
    }*/
    do{
        printf("Ingrese edad: ");
        scanf("%d", &edad);
    }while(edad<0 || edad>100);
    printf("Edad: %d", edad);
    return 0;
}
