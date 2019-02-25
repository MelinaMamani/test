#include <stdio.h>
#include <stdlib.h>
int tusho = 100;
int main()
{
    int num = 8;

    {
       int num = 10;
        tusho = 800;
       printf("num local: %d\n", num);
    }
    tusho = 90;
    printf("num main: %d \n",num);
    printf("tusho: %d \n", tusho);


    char color[] = "rojo";
	char grosor[] = "grueso";

	char descripcion[1024];

    strcpy(descripcion, "Lapiz color ");
	strncat(descripcion, color, 1024);
	strncat(descripcion, " de trazo ", 1024);
	strncat(descripcion, grosor, 1024);

	printf("desc: %s", descripcion);

    return 0;
}

