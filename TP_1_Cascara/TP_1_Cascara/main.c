#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='S';
    int opcion=0;
    float num1;
    float num2;
    float rta;
    int rtaFac;

    while(seguir=='S')
    {
        menu();
        printf("\nIngrese una opcion: ");
        scanf("%d",&opcion);

        system("cls");

        switch(opcion)
        {
            case 1:
                printf("Ingrese un numero: \n");
                scanf("%f", &num1);
                break;
            case 2:
                printf("Ingrese otro numero: \n");
                scanf("%f", &num2);
                break;
            case 3:
                rta = suma(num1,num2);
                printf("Suma = %.1f\n", rta);
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
                   printf("Division = %.2f\n", rta);
                }
                break;
            case 6:
                rta = mult(num1,num2);
                printf("Multiplicacion = %d\n", rta);
                break;
            case 7:
                if(num1>0){
                    rtaFac = factorial(num1);
                    printf("El factorial de %.1f es %d\n",num1,rtaFac);
                }
                else{
                    printf("No se puede factorear numeros negativos.\n");
                }
                break;
            case 8:
                break;
            case 9:
                if(verifica()==0)
                    seguir = 'N';
                break;
            default:
                printf("Opcion no valida.\n");
                break;
            }

    }
    return 0;
}
