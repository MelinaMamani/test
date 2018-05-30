#include <stdio.h>
#include "funciones.h"

int menu(){

    int opcion;
    printf("1- Agregar pelicula\n");
    printf("2- Borrar pelicula\n");
    printf("3- Modificar pelicula\n");
    printf("4- Generar pagina web\n");
    printf("5- Salir\n");

    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);

    return opcion;
}

eMovie* newArrayMovies(int tam){

    eMovie* array;

    if(tam > 0)
    {
        array = (eMovie*) malloc(tam * sizeof(eMovie));

        if(array != NULL)
        {
            inicializarMovies(array, tam);
        }
    }
    return array;
}

void inicializarMovies(eMovie* movies, int tam){

    if(movies != NULL && tam > 0)
    {
        for(int i=0; i<tam; i++)
        {
            (movies+i)->estado = 0;
        }
    }
}

int buscarLibre(eMovie* movies, int tam)
{
    int indice = -1;
    for(int i=0; i<tam; i++)
    {
        if((movies+i)->estado == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void guardarmovies(eMovie* movies, int tam, char* path)
{

    FILE* f;

    f = fopen(path, "wb");

    if(f != NULL)
    {
        for(int i=0; i<tam; i++)
        {
            if( (movies + i)->estado)
            {
                fwrite( (movies+i), sizeof(eMovie), 1, f);
            }
        }
        fclose(f);
    }
}

int cargarmovies(eMovie* movies, int tam, char* path)
{

    FILE* f;
    int indice;
    eMovie empleadoAuxiliar;
    int cant;
    int total = 0;

    f = fopen(path, "rb");
    if(f == NULL)
    {
        printf("No se pudo abrir el archivo\n");
        exit(1);
    }



    while(!feof(f))
    {
        indice = buscarLibre(movies, tam);
        if(indice == -1)
        {
            printf("No hay mas lugar\n");
            break;
        }
        else
        {
            cant = fread(&empleadoAuxiliar, sizeof(eMovie), 1, f);

            if(cant != 1)
            {
                if(feof(f))
                {
                    break;
                }
                else
                {
                    printf("No se pudo leer el ultimo registro\n");
                    break;
                }
            }

            *(movies+indice) = empleadoAuxiliar;
            total++;
            //indice = buscarLibre(movies, tam);

        }
    }
    fclose(f);
    return total;
}

