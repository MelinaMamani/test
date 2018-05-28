#include <stdio.h>
#include <stdlib.h>
#define TAM 5
typedef struct{
    int legajo;
    char nombre[20];
    float sueldo;
    int estado;
}eEmpleado;

eEmpleado* newEmpleado();
eEmpleado* newEmpleadoParam(int, char*, float);
void mostrarEmpleado(eEmpleado*);

//Para vectores
void mostrarEmpleados(eEmpleado*, int);
eEmpleado* newArrayEmpleados(int);
void inicializarEmpleados(eEmpleado*, int);

int main()
{
    eEmpleado* unEmpleado;
    unEmpleado = newEmpleado();
    unEmpleado = newEmpleadoParam(23123, "JuanBB", 2313.55);
    mostrarEmpleado(unEmpleado);

    return 0;
}

eEmpleado* newEmpleado (){
    eEmpleado* nuevoEmpleado;
    nuevoEmpleado = (eEmpleado*) malloc(sizeof(eEmpleado));

    if(nuevoEmpleado != NULL){
        nuevoEmpleado->legajo = 0;
        strcpy(nuevoEmpleado->nombre,"");
        nuevoEmpleado->sueldo = 0;
        nuevoEmpleado->estado = 0;
    }
    return nuevoEmpleado;
}

eEmpleado* newEmpleadoParam(int legajo, char* nombre, float sueldo){
    eEmpleado* nuevoEmpleado;
    nuevoEmpleado = newEmpleado();

    if(nuevoEmpleado != NULL){
        nuevoEmpleado->legajo = legajo;
        strcpy(nuevoEmpleado->nombre,nombre);
        nuevoEmpleado->sueldo = sueldo;
        nuevoEmpleado->estado = 1;
    }
    return nuevoEmpleado;
}

void mostrarEmpleado(eEmpleado* empleado){
    if(empleado != NULL)
    printf("Empleado: %d %s %.2f", empleado->legajo, empleado->nombre, empleado->sueldo);
}

//Para vectores
void mostrarEmpleados(eEmpleado* empleado, int tam){
    int i;
    if(empleado != NULL && tam > 0){
        for(i = 0; i<tam; i++){
            if((empleado + i)->estado){
                printf("Empleado/s: %d %s %.2f", empleado->legajo, empleado->nombre, empleado->sueldo);
            }
        }
    }
    else{
        printf("No se pueden mostrar empleados");
    }
}

eEmpleado* newArrayEmpleados(int tam){
    eEmpleado* array;

    if(tam>0)

}

void inicializarEmpleados(eEmpleado* empleado, int tam){
    nuevoEmpleado = (eEmpleado*) malloc(sizeof(eEmpleado));

    if(nuevoEmpleado != NULL){
        nuevoEmpleado->legajo = 0;
        strcpy(nuevoEmpleado->nombre,"");
        nuevoEmpleado->sueldo = 0;
        nuevoEmpleado->estado = 0;
    }
    return nuevoEmpleado;

}
