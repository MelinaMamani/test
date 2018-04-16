#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i;
    char letra = 'm';
    letra = toupper(letra);

    char nombre []= {"juan"};
    strupr(nombre);

    printf("%c", letra);

    printf("\n %s", nombre);

    return 0;
}
