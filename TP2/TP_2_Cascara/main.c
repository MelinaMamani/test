#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 3

//Menu limpia la pantalla


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
