#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdlib.h>
#define cantidad 5

void cambiarEntero(int);
void cambiarVector (int []);
void cargarVectoreEnMenosUno (int []);

int main()
{
    int edad=22;
    int edades[3];
    cambiarEntero(edad);
    printf("%d\n", edad);
    cambiarVector(edades);
    printf("%d\n", edades[0]);

    return 0;
}

void cargarVectoreEnMenosUno (int listado[])
{
    int i;
    int tamanio;
    //aca se saca el tamaño
    int tamanioArray=sizeof(listado[cantidad]);
    printf("%d", tamanioArray);
    for(i=0;i<tamanio;i++)
    {
        listado[i]=-1;
    }
}

void cambiarVector (int listadoDeNumeros[])
{
    listadoDeNumeros[0]=666;
}

void cambiarEntero(int numero)
{
    numero=666;
    }
}
