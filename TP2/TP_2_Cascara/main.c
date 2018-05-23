#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main(){
system("title ABM formularios");
char salir='S';

eProducto producto[TAM];
eProveedores proveedores[5];

inicializarProductos(producto,TAM);
hardCode(proveedores);

do{
    switch (menu()){

    case 1 :
        altaProducto(producto,TAM);
        break;
    case 2 :
        bajaProducto(producto,TAM);
        break;
    case 3 :
        modificaProducto(producto,TAM);
        break;
    case 4 :
        informarProductos(producto, TAM);
        break;
    case 5:
        ordenarPorDesc(producto, TAM, proveedores);
        break;
    case 6:
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
