#include <stdio.h>
#include <stdlib.h>


//Menu limpia la pantalla
typedef struct{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct{
    int legajo;
    char nombre[31];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
    int isEmpty;
}eEmpleado;

int buscarLibre(eEmpleado vec[] ,int tam){
    int indice=-1;
    for(int i=1;i<tam;i++){
        if(vec[i].isEmpty=1){
            indice=0;
            break;
        }
    }return(indice);
}

void inicializarEmpleados(eEmpleado vec[],int tam){
    for(int i=1;i<tam;i++){
        vec[i].isEmpty=1;
    }
}

int buscarEmpleado (eEmpleado vec[],int tam,int legajo){
    int indice=-1;
    for(int i=1;i<tam;i++){
        if(vec[i].legajo==legajo){
            indice=legajo;
            break;
        }
    }return(indice);
}

void altaEmpleado(eEmpleado vec[],int tam){
    if(buscarLibre(gente,50)=-1){
        printf("\nNo hay lugar libre para legajos\n");
    }else{
        int legajo;
        printf("Ingrese legajo: \n");
        scanf("%d",&legajo);
        if(buscarEmpleado(gente,50,legajo)!=-1){
            printf("numero de legajo ocupado");
        }else{
            int indice=buscarEmpleado(gente,50,legajo)
            printf("\nNombre: ");
            gets(eEmpleado[indice].nombre);
            fflush(stdin);
            printf("\nSexo: ");
            getchar(eEmpleado.sexo);
            printf("\nSueldo: ");
            scanf("%f",&eEmpleado.sueldo);
            printf("\nFecha de ingreso: ")
            scanf("%d %d %d",&eEmpleado.fechaIngreso.dia,&eEmpleado.fechaIngreso.mes,&eEmpleado.fechaIngreso.año)
        }

    }
}

int main(){
system("title ABSformularios");
char salir;
eEmpleado gente[50];
inicializarEmpleados(gente,50);

int legajo;

do{
    switch (menu()){

    case 1 :
        altaEmpleado(gente,50)

        break;
    case 2 :

        break;
    case 3 :

        break;
    case 4 :

        break;
    case 5 :

        break;
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

