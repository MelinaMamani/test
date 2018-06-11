#include <stdio.h>
#include <stdlib.h>
#define TAM 100

typedef struct{
    int id;
    int anio;
    char marca[15];
    char modelo[16];
    char color[15];
    int estado;
}eAuto;

int buscarLibre(eAuto*, int);
void inicializarAutos(eAuto*, int);
eAuto* newArrayAutos(int);
void cargarAutos(eAuto*, int);

int main()
{
    eAuto* autos;
    autos = newArrayAutos(TAM);

    if(autos == NULL)
    {
        printf("No se pudo conseguir memoria\n");
        exit(1);
    }

    //cargarAutos(autos,TAM);

    return 0;
}

int buscarLibre(eAuto* autos, int tam)
{
    int indice = -1;
    int i;
    for(i=0; i<tam; i++)
    {
        if((autos+i)->estado == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void inicializarAutos(eAuto* autos, int tam)
{
    int i;
    if(autos != NULL && tam > 0)
    {
        for(i=0; i<tam; i++)
        {
            (autos+i)->estado = 0;
        }
    }
}

eAuto* newArrayAutos(int tam)
{

    eAuto* array;

    if(tam > 0)
    {
        array = (eAuto*) malloc(tam * sizeof(eAuto));

        if(array != NULL)
        {
            inicializarAutos(array, tam);
        }
    }
    return array;
}

void cargarAutos(eAuto* autos, int tam){

    FILE* f;
    int i, cant;

    f = fopen("autos.csv", "rb");

    if(f==NULL){
        printf("No se pudo abrir el archivo.\n");
    }

    printf("Id Marca   Modelo   Color    Anio\n");

    while(!feof(f)){
        for(i=0; i<tam; i++){
            (autos+i)->estado = 1;
            cant = fscanf(f,"%d ,%[^,] ,%[^,] ,%[^,] ,%d \n", &(autos+i)->id, (autos+i)->marca, (autos+i)->modelo, (autos+i)->color, &(autos+i)->anio);

            if(cant!=5){
                if(feof(f)){
                    break;
                }
                else{
                    printf("Error.\n");
                    exit(EXIT_FAILURE);
                }
            }
            printf("%d %20s %22s %15s %4d\n", (autos+i)->id, (autos+i)->marca, (autos+i)->modelo, (autos+i)->color, (autos+i)->anio);
        }
    }
    fclose(f);
}
