#include <stdio.h>
//#include <limits.h>
void main(void)
{
    int i;
    int suma = 0;
    float prom;
    /*int max = INT_MIN; // constante definida en limits.h
    int min = INT_MAX; // constante definida en limits.*/
    int max;
    int min;
    for(i=0; i<10;i++)
    {
    int aux;
    printf("Ingrese un numero: ");
    scanf("%d",&aux);
    if(i==0){
        max = aux;
        min = aux;
    }
    suma=suma+aux;
    if(aux>max)
    {
    max = aux;
    }
    if(aux<min)
    {
    min = aux;
    }
    }
    prom = (float)suma/i;
    printf("La suma es: %d\n",suma);
    printf("El promedio es: %.2f\n",prom);
    printf("El maximo es: %d\n",max);
    printf("El minimo es: %d\n",min);

}
