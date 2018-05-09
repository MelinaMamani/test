#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main(){
system("title ABS formularios");
char salir='S';

eEmpleado gente[TAM];
eSector sectores[5];

inicializarEmpleados(gente,TAM);
hardCode(sectores);

do{
    switch (menu()){

    case 1 :
        altaEmpleado(gente,TAM);
        break;
    case 2 :
        bajaEmpleado(gente,TAM);
        break;
    case 3 :
        modificaEmpleado(gente,TAM);
        break;
    case 4 :
        system("cls");
        printf("Lista de empleados: \n");
        mostrarEmpleados(gente,TAM,sectores);
        break;
    case 5 :
        system("cls");
        printf("Lista ordenada por nombres: \n");
        ordenarPorNombre(gente,TAM,sectores);
        break;
    case 6:
        system("cls");
        printf("Grafico de edades\n");
        contarEdades(gente,TAM);
        break;
    case 7:
        if(verifica()==0)
        salir = 'N';
        break;
    default:
        printf("\nOpcion incorrecta\n");
        system("pause");
        system("cls");
    }

}while(salir=='S');

  return 0;
}
