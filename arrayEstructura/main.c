#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nombre [20];
    int legajo;
    float sueldo;
    char sexo;
}eEmpleado;

void mostrarEmpleado(eEmpleado);
void mostrarEmpleados(eEmpleado [], int);
void ordenarEmpleados(eEmpleado[], int);

int main()
{
    eEmpleado plantel [3] = {{"Juan", 1111, 1432.56, 'm'}, {"Ana", 2222, 12422.56, 'f'},{"Luis", 3333, 13432.56, 'm'}};
    int numeros[]= {23,12,45};

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

    mostrarEmpleados(plantel, 3);
    ordenarEmpleados(plantel, 3);
    mostrarEmpleados(plantel, 3);

    return 0;
}
void mostrarEmpleados(eEmpleado vec[], int tam){
    int i;
    for(i=0; i<tam; i++){
        mostrarEmpleado(vec[i]);
    }
}

void mostrarEmpleado(eEmpleado emp){
    printf("\n \n Legajo: %d", emp.legajo);
    printf("\nNombre: %s", emp.nombre);
    printf("\nSueldo: %.2f", emp.sueldo);
    printf("\nSexo: %c", emp.sexo);
}

void ordenarEmpleados(eEmpleado vec[], int tam){
    eEmpleado aux;
    int i, j;

        for(i=0; i<tam;i++){
            for(j = i+1; j<tam; j++){
                if(strcmp(vec[i].nombre, vec[j].nombre)>0){
                    aux = vec[i];
                    vec[i] = vec[j];
                    vec[j] = aux;
                }
            }
        }
}
