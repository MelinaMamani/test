#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int i;
    int leg[CANT];
    float sueldo[CANT];
    int edad[CANT];

    for(i=0; i<CANT; i++){
        leg[i]= i+1;
        printf("\nEmpleado num. %d", leg[i]);
        printf("\nIngrese sueldo: ");
        scanf("%f", &sueldo[i]);
        printf("Ingrese edad: ");
        scanf("%d", &edad[i]);
    }
        printf("\nLegajo\tEdad\tSueldo");
    for(i=0; i<CANT; i++){
        printf("\n%d\t%d\t%.2f", leg[i], edad[i], sueldo[i]);
        }

    return 0;
}
