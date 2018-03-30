#include <stdio.h>
#include <stdlib.h>

int sumar (int, int);
int main()
{
    int x, y, rta;
    x = 5;
    y = 7;
    rta = sumar(x,y);



    printf("Resultado: %d", rta);
    return 0;
}

int sumar(int a, int b){
    int resultado;
    resultado = a + b;
    return resultado;
}
