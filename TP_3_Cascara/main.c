#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 5

int main()
{
    char seguir='s';

    eMovie* peliculas;
    peliculas = newArrayMovies(TAM);

    if(peliculas == NULL)
    {
        printf("No se pudo conseguir memoria\n");
        exit(1);
    }

    while(seguir=='s')
    {
        switch(menu())
        {
            case 1:
                printf("op 1");
                break;
            case 2:
                printf("op 2");
                break;
            case 3:
                printf("op 3");
               break;
            case 4:
                printf("op 4");
               break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
