#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='S';
    int opcion=0;
    int num1;
    int num2;
    int r;
    int rta;
    long rtaFac;

    while(seguir=='S')
    {
        menu();
        scanf("%d",&opcion);

        system("cls");
        switch(opcion)
        {
            case 1:
                printf("Ingrese un numero: \n");
                scanf("%d", &num1);
                break;
            case 2:
                printf("Ingrese otro numero: \n");
                scanf("%d", &num2);
                break;
            case 3:
                rta = suma(num1,num2);
                printf("Suma = %d\n", rta);
                break;
            case 4:
                rta = resta(num1,num2);
                printf("Resta = %d\n", rta);
                break;
            case 5:
                if(num2==0){
                    printf("No se puede divir por 0. Ingrese otro numero.\n");
                }
                else{
                   rta = division(num1,num2);
                   printf("Division = %d\n", rta);
                }
                break;
            case 6:
                rta = mult(num1,num2);
                printf("Multiplicacion = %d\n", rta);
                break;
            case 7:
                rtaFac = factorial(num1);
                printf("El factorial de %d es %ld\n",num1,rtaFac);
                break;
            case 8:
                break;
            case 9:
                if(verifica()==0)
                    seguir = 'N';
                break;

            }
    }
    return 0;
}