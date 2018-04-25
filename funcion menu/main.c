#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//Menu limpia la pantalla
typedef struct{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct{
    int id;
    char descripcion[51];
    int isEmpty;
}eSector;

typedef struct{
    int legajo;
    char nombre[41];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
    int isEmpty;
    int idSector;
}eEmpleado;


int main(){
system("title ABSformularios");
char salir;
eEmpleado gente[TAM];
inicializarEmpleados(gente,TAM);

int legajo;

do{
    switch (menu()){

    case 1 :
        altaEmpleado(gente,TAM);
        break;

    /*case 2 :

        break;
    case 3 :

        break;
    case 4 :

        break;
    case 5 :

        break;*/
    case 6 :
        salir="s";
        break;
    default:
        printf("\nOpcion incorrecta\n");
        system("pause");
        system("cls");
    }

}while(salir=="s");

  return(0);
}




int menu(){
    int opcion;
    printf("1_Alta\n");
    printf("2_Baja\n");
    printf("3_Modificar\n");
    printf("4_Listar\n");
    printf("5_Ordenar\n");
    printf("6_Salir\n");
    scanf("%d",&opcion);
    return(opcion);
}

void inicializarEmpleados(eEmpleado vec[],int tam){
    int i;
    for(i=0;i<tam;i++){
        vec[i].isEmpty=1;
    }
}

int buscarLibre(eEmpleado vec[] ,int tam){
    int indice=-1;
    int i;
    for(i=0;i<tam;i++){
        if(vec[i].isEmpty==1){
            indice=i;
            break;
        }
    }
    return indice;
}

int buscarEmpleado(eEmpleado vec[],int tam,int legajo){
    int indice=-1;
    int i;
    for(i=0;i<tam;i++){
        if(vec[i].isEmpty == 0 && vec[i].legajo==legajo){
            indice=i;
            break;
        }
    }
    return indice;
}

void altaEmpleado(eEmpleado vec[],int tam){
    eEmpleado nuevoEmpleado;
    int indice;
    int esta;
    int legajo;

    system("cls");
    printf("Alta empleado\n\n");

    indice = buscarLibre(vec, tam);

    if(indice == -1)
    {
        printf("\nEl sistema esta completo. No se puede dar de alta a empleados nuevos.\n\n");
    }
    else
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if(esta != -1)
        {
            printf("\nEl legajo %d ya esta dado de alta en el sistema\n", legajo);
                   mostrarEmpleado(vec[esta]);
        }
        else{
                   nuevoEmpleado.isEmpty = 0;
                   nuevoEmpleado.legajo = legajo;

                   printf("Ingrese nombre: ");
                   fflush(stdin);
                   gets(nuevoEmpleado.nombre);

                   printf("Ingrese sexo: ");
                   fflush(stdin);
                   scanf("%c", &nuevoEmpleado.sexo);

                   printf("Ingrese sueldo: ");
                   scanf("%f", &nuevoEmpleado.sueldo);

                   printf("Ingrese fecha de ingreso d / m / a: ");
                   scanf("%d %d %d", &nuevoEmpleado.fechaIngreso.dia, &nuevoEmpleado.fechaIngreso.mes, &nuevoEmpleado.fechaIngreso.anio);

                   vec[indice] = nuevoEmpleado;

                   printf("\nAlta exitosa!!!\n\n");

           }
  }
}
