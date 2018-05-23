#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    int* vec;
    int* aux;
    int i;

    vec = (int *) malloc(TAM* sizeof(int));

    /*if(vec==NULL){
        printf("\nNo hay espacio.");
        system("pause");
        exit(1);
    }

    for(i=0; i<TAM; i++){
        printf("Ingrese un numero: ");
        scanf("%d", vec+i);
    }

    for(i=0; i<TAM; i++){
        printf("%d-", *(vec+i));
    }

    printf("\n\n");*/

    aux = (int *) realloc(vec, (TAM+5)* sizeof(int));

    if(aux==NULL){
        printf("\nNo hay espacio en aux.");
        system("pause");
        exit(1);
    }

    else{
        vec = aux;
        for(i=0; i<(TAM+5); i++){
            printf("Ingrese un numero: ");
            scanf("%d", vec+i);
        }

        /*
        Segundo silencio
        for(i=0; i<(TAM+5); i++){
            printf("%d-", *(vec+i));
        }*/
    }

    vec = (int *) realloc(vec, TAM* sizeof(int));

    for(i=0; i<(TAM+5); i++){
            printf("%d-", *(vec+i));
    }

    free(vec);
    free(aux);
    return 0;
}
