#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct{
    char nombre [20];
    int legajo;
    float sueldo;
    char sexo;
}typedef eEmpleado;

int main()
{
    eEmpleado unEmpleado;
    eEmpleado otroEmpleado = {"Eunji", 1111, 1432.56, 'm'};

    /*unEmpleado.legajo= 1234;
    strcpy(unEmpleado.nombre, "Juan");
    unEmpleado.sueldo= 50000.50;
    unEmpleado.sexo = 'm';*/

    /*printf("\nIngrese el nombre: ");
    gets(unEmpleado.nombre);
    printf("Ingrese legajo: ");
    scanf("%d", &unEmpleado.legajo);
    printf("Ingrese el sueldo: ");
    scanf("%f", &unEmpleado.sueldo);
    printf("Ingrese el sexo: ");
    fflush(stdin);
    scanf("%c", &unEmpleado.sexo);*/

    mostrarEmpleado(otroEmpleado);

    return 0;
}

void mostrarEmpleado(eEmpleado emp){
    printf("Legajo: %d", emp.legajo);
    printf("\nNombre: %s", emp.nombre);
    printf("\nSueldo: %.2f", emp.sueldo);
    printf("\nSexo: %c", emp.sexo);
}
