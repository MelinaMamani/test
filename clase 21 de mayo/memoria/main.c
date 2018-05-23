#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* pNum;
    pNum = (int *) malloc(sizeof(int));

    if(pNum==NULL){
        printf("No se ha conseguido espacio.\n");
        system("pause");
        exit(1); //se termina el programa porque no hay memoria
    }

    printf("Ingrese un numero: ");
    scanf("%d", pNum);

    printf("\nNum: %d",*pNum);

    free(pNum); //Libera espacio en memoria
    return 0;
}
