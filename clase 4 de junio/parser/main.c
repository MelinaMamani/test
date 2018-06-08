#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;

    int n1, n2, n3, n4;

    int cant;

    f = fopen("datos.txt", "rb");

    if(f==NULL){
        printf("No se encontró al archivo.\n");
        exit(EXIT_FAILURE);
    }
    while(!feof(f)){
        cant = fscanf(f,"%d, %d, %d, %d \n", &n1, &n2, &n3, &n4);

        if(cant!=4){
            if(feof(f)){
                break;
            }
            else{
                printf("H%d, %s, %s, %s, %d \nubo un problema al leer un archivo.\n\n");
                exit(EXIT_FAILURE);
            }
        }

        printf("%d, %d, %d, %d \n", n1, n2 , n3, n4);

    }
    fclose(f);
    return 0;
}

