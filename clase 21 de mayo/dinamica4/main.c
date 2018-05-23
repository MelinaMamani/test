#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int legajo;
    char nombre[20];
    float sueldo;
}eEmpleado;

void mostrarEmpleado(eEmpleado*);
eEmpleado* newEmpleadoParam(int, char*, float);

int main()
{
    eEmpleado* unEmpleado;

    unEmpleado = newEmpleadoParam(1234,"Juan",2332.66);

    if(unEmpleado==NULL){
        exit(1);
    }

    mostrarEmpleado(unEmpleado);

    return 0;
}

void mostrarEmpleado(eEmpleado* emp){
    printf("%d  %s  %.2f\n", emp->legajo, emp->nombre, emp->sueldo);

}

eEmpleado* newEmpleadoParam(int legajo, char* nombre, float sueldo){
    eEmpleado* p;
    p = (eEmpleado*) malloc(sizeof(eEmpleado));

    if(p != NULL){
        p->legajo = legajo;
        p->sueldo = sueldo;
        strcpy(p->nombre,nombre);
    }

    return p;//sino consigo espacio, retorno null
}
