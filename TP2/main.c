#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#include "funciones.h"

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

    case 2 :
        bajaEmpleado(gente,TAM);
        break;
    case 3 :
        printf("Modificar");
        break;
    case 4 :
        printf("Listar");
        break;
    case 5 :
        printf("Ordenar");
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
