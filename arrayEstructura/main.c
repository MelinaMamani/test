#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 3

typedef struct{
    int dia, mes, anio;
}eFecha;

typedef struct{
    char nombre [20];
    int legajo;
    float sueldo;
    char sexo;
    eFecha fn;
}eEmpleado;

void ordenarPorCriterios(eEmpleado [], int);
void mostrarEmpleado(eEmpleado);
void mostrarEmpleados(eEmpleado [], int);
void ordenarPorNombre(eEmpleado[], int);

int main()
{
    eEmpleado plantel [CANT] = {{"Juan", 23, 853.77, 'm',1,1,1960}, {"Ana", 37, 1050.67, 'f',2,2,1967},{"Anoc", 23, 853.77, 'm',1,1,1960}};

    mostrarEmpleados(plantel, CANT);
    ordenarPorCriterios(plantel, CANT);
    mostrarEmpleados(plantel, CANT);
    //ordenarPorNombre(plantel, CANT);

    return 0;
}

void ordenarPorCriterios(eEmpleado vec[], int tam){
    int i, j;
    eEmpleado aux;
    for(i=0; i<tam; i++){
        for(j=i+1; j<tam; j++){
            if(vec[i].sueldo<vec[j].sueldo){
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
            else{
                    if(vec[i].sueldo==vec[j].sueldo){
                        if(strcmp(vec[i].nombre,vec[j].nombre)){
                            aux=vec[i];
                            vec[i]=vec[j];
                            vec[j]=aux;
                        }
                    }
                }
        }
    }
}

void mostrarEmpleados(eEmpleado vec[], int tam){
    int i;
    for(i=0; i<tam; i++){
        mostrarEmpleado(vec[i]);
    }
}

void mostrarEmpleado(eEmpleado emp){
    char cad[30];

    printf("\n \nLegajo: %d", emp.legajo);
    printf("\nNombre: %s", emp.nombre);
    printf("\nSueldo: %.2f", emp.sueldo);
    printf("\nSexo: %c", emp.sexo);
    sprintf(cad, "%d/%d%/%d", emp.fn.dia, emp.fn.mes, emp.fn.anio);
    printf("\nFecha nac.: %s", cad);
}

void ordenarPorNombre(eEmpleado vec[], int tam){
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
