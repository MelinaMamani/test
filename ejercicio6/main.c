#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    int flag = 0;
    /*printf("Ingrese edad: ");
    scanf("%d", &edad);
    while(edad<0 || edad>100){
        printf("Reingrese edad: ");
        scanf("%d", &edad);
    }*/
    do{
        if(flag==0){
            printf("Ingrese edad: ");
            flag = 1;
        }
        else{
            printf("Reingresa la edad: ");
        }
        scanf("%d", &edad);
    }while(edad<0 || edad>100);
    printf("Edad: %d", edad);
    return 0;
}
