#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

/** \brief Muestra un menú
 * y pide al usuario que ingrese
 * \param "opcion"
 * \param
 * \return devuelve opcion
 *
 */


int menu(){

    int opcion;
    printf("1) Alta\n");
    printf("2) Baja\n");
    printf("3) Modificar\n");
    printf("4) Informar\n");
    printf("5) Listar\n");
    printf("6) Salir\n");

    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);

    return opcion;
}


/** \brief Da de alta
 * a todos los proveedores
 */

void hardCode(eProveedores proveedores[]){
    eProveedores nuevoProveedor;

    nuevoProveedor.id = 1;
    strcpy(nuevoProveedor.descripcion, "Prov1");
    nuevoProveedor.isEmpty = 0;
    proveedores[0] = nuevoProveedor;


    nuevoProveedor.id = 2;
    strcpy(nuevoProveedor.descripcion, "Prov2");
    nuevoProveedor.isEmpty = 0;
    proveedores[1] = nuevoProveedor;

    proveedores[2].id = 3;
    strcpy(proveedores[2].descripcion, "Prov3");
    proveedores[2].isEmpty = 0;

    proveedores[3].id = 4;
    strcpy(proveedores[3].descripcion, "Prov4");
    proveedores[3].isEmpty = 0;

    proveedores[4].id = 5;
    strcpy(proveedores[4].descripcion, "Prov5");
    proveedores[4].isEmpty = 0;
}

//FUNCIONES DE UTILIDAD

/** \brief Inicializa a los
 * Productos con 1
 */

void inicializarProductos(eProducto vec[],int tam){
    int i;
    for(i=0;i<tam;i++){
        vec[i].isEmpty=1;
    }
}

/** \brief
 *  Busca un lugar libre en Productos
 * \param
 * \param
 * \return regresa el indice donde haya lugar
 *
 */

int buscarLibre(eProducto vec[] ,int tam){
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

/** \brief Muestra un Producto
 *  segun el indice
 *
 */

void mostrarProducto(eProducto prod){
    printf("%4d     %s      %d        $%10.2f   Num. Prov.: %d\n", prod.codigo, prod.descripcion, prod.cantidad, prod.importe, prod.idProveedor);
}

/** \brief
 *  Busca un Producto segun el codigo ingresado
 * \param
 * \param
 * \return regresa el indice donde esta el Producto
 *
 */
int buscarProducto(eProducto vec[],int tam,int codigo){
    int indice=-1;
    int i;
    for(i=0;i<tam;i++){
        if(vec[i].isEmpty == 0 && vec[i].codigo==codigo){
            indice=i;
            break;
        }
    }
    return indice;
}


void altaProducto(eProducto vec[],int tam){
    eProducto nuevoProducto;
    int indice;
    int esta;
    int codigo;
    char confirma;

    system("cls");
    printf("Alta de Producto\n\n");

    codigo = getInt("Ingrese el codigo: ");

    indice = buscarLibre(vec, tam);

    if(indice == -1)
    {
        printf("\nEl sistema esta completo. No se puede dar de alta a Productos nuevos.\n\n");
    }
    else

        esta = buscarProducto(vec, tam, codigo);

        if(esta != -1)
        {
            printf("\nEl codigo %d ya esta dado de alta en el sistema.\n", codigo);
                   mostrarProducto(vec[esta]);
        }
        else{
                   nuevoProducto.isEmpty = 0;
                   nuevoProducto.codigo = codigo;

                   printf("Ingrese descripcion: ");
                   fflush(stdin);
                   gets(nuevoProducto.descripcion);

                   while(strlen(nuevoProducto.descripcion)>41){
                           printf("Reingrese descripcion: ");
                           fflush(stdin);
                           gets(nuevoProducto.descripcion);
                   }

                   nuevoProducto.cantidad = getInt("Ingrese su cantidad: ");

                    while(nuevoProducto.cantidad<0){
                        nuevoProducto.cantidad = getInt("Reingrese su cantidad: ");
                    }

                   nuevoProducto.importe = getFloat("Ingrese el importe: ");

                   while(nuevoProducto.importe<=0){
                        nuevoProducto.importe = getFloat("Reingrese importe: ");
                   }

                   printf("\n1) Proveedor 1");
                   printf("\n2) Proveedor 2");
                   printf("\n3) Proveedor 3");
                   printf("\n4) Proveedor 4");
                   printf("\n5) Proveedor 5");
                   nuevoProducto.idProveedor = getInt("\nIngrese un proveedor: ");
                   nuevoProducto.idProveedor = validarEntero(nuevoProducto.idProveedor, 0, 6);

                   vec[indice] = nuevoProducto;

                   do{
                        printf("\nConfirma el alta de Producto? s/n: ");
                        fflush(stdin);
                        scanf("%c", &confirma);
                        confirma = tolower(confirma);
                    }while(confirma != 's' && confirma != 'n');

                    if(confirma == 's'){
                        system("cls");
                        printf("\nAlta realizada.\n\n");
                    }
                    else{
                        system("cls");
                        printf("\nAlta no realizada.\n\n");
                    }
           }
  }

void bajaProducto(eProducto vec[], int tam){
    int codigo;
    int esta;
    char confirma;

    system("cls");
    printf("Baja del Producto\n\n");

        codigo = getInt("Ingrese el codigo: ");

        esta = buscarProducto(vec, tam, codigo);

        if(esta == -1)
        {
            printf("\nEl codigo %d no se encuentra en el sistema\n\n", codigo);

        }
        else{
            mostrarProducto(vec[esta]);

        do{
            printf("\nConfirma baja? s/n: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');

        if(confirma == 's'){
            vec[esta].isEmpty = 1;
            printf("\nBaja realizada.\n\n");
        }
        else{
            printf("\nBaja cancelada.\n\n");
        }

        }
}

void modificaProducto(eProducto vec[], int tam){
    int codigo;
    int esta;
    char confirma;
    eProducto modProducto;

    system("cls");
    printf("Modificar Producto\n\n");

        codigo = getInt("Ingrese el codigo: ");

        esta = buscarProducto(vec, tam, codigo);

        if(esta == -1)
        {
            printf("\nEl codigo %d no se encuentra en el sistema\n\n", codigo);

        }
        else{

                mostrarProducto(vec[esta]);

              switch(submenuMod()){

                case 1:
                    printf("Ingrese nuevo descripcion: ");
                    fflush(stdin);
                    gets(modProducto.descripcion);

                    while(strlen(modProducto.descripcion)>41){
                           printf("Reingrese descripcion: ");
                           fflush(stdin);
                           gets(modProducto.descripcion);
                    }

                    strcpy(vec[esta].descripcion, modProducto.descripcion);
                    break;
                case 2:
                    modProducto.cantidad = getInt("Ingrese nueva cantidad: ");
                    while(modProducto.cantidad<0){
                        modProducto.cantidad = getInt("Reingrese nueva cantidad: ");
                    }

                    vec[esta].cantidad = modProducto.cantidad;
                    break;
               case 3:
                    modProducto.importe = getFloat("Ingrese nuevo importe: ");
                    while(modProducto.importe<=0){
                        modProducto.importe = getFloat("Reingrese nuevo importe: ");
                    }
                    vec[esta].importe = modProducto.importe;
                    break;
                default:
                    printf("\nOpcion no valida.\n");
                    system("pause");
                    system("cls");
                    break;
                }
        do{
            printf("\nConfirma modificacion? s/n: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');

        if(confirma == 's'){
            printf("\nModificacion realizada.\n\n");
        }
        else{
            printf("\nModificacion cancelada.\n\n");
        }

        }
}

int submenuMod(){
    int opcion;
    system("cls");
    printf("Menu modificar Producto: \n");
    printf("1) Descripcion\n");
    printf("2) Cantidad\n");
    printf("3) Importe\n");

    opcion = getInt("Seleccione una opcion: ");

    return opcion;
}

void informarProductos(eProducto vec[], int tam){
    int i, sup=0, noSup=0, d=0, cantMenor=0, cantMayor=0;
    float suma=0, prom;

    system("cls");
    printf("Informar productos\n");

    for(i=0; i<tam; i++){

        if(vec[i].isEmpty == 0){

            suma = vec[i].importe + suma;

            if(vec[i].cantidad<=10){
                cantMenor++;
            }

            else if(vec[i].cantidad>10){
                cantMayor++;
            }
            d++;
        }
    }
    prom= suma/d;

    for(i=0; i<tam; i++){

        if(vec[i].isEmpty == 0){

            if(vec[i].importe>prom){
               sup++;
            }
            else if(vec[i].importe<prom){
                noSup++;
            }
        }
    }

    switch(submenuInfo()){
    case 1:
        printf("Total %.2f y promedio %.2f\n", suma, prom);
        printf("Cantidad de productos que superan el promedio %d\n", sup);
        break;
    case 2:
        printf("Total %.2f y promedio %.2f\n", suma, prom);
        printf("Cantidad de productos que no superan el promedio %d\n", noSup);
        break;
    case 3:
        printf("Productos con stock menor igual a 10: %d\n", cantMenor);
        break;
    case 4:
        printf("Productos con stock mayor a 10: %d\n", cantMayor);
        break;
    default:
        printf("\nOpcion no valida.\n");
        system("pause");
        system("cls");
        break;
    }

    printf("\n");
}

int submenuInfo(){
    int opcion;
    system("cls");
    printf("Menu informar Producto: \n");
    printf("1) Total y prom. de los productos, cuantos superan el promedio\n");
    printf("2) Total y prom. de los productos, cuantos no superan el promedio\n");
    printf("3) Productos con stock menor igual a 10\n");
    printf("4) Productos con stock mayor a 10\n");

    opcion = getInt("Seleccione una opcion: ");

    return opcion;
}

void ordenarPorDesc(eProducto vec[], int tam, eProveedores prod[]){
    int i, j;
    eProducto auxiliar;

    system("cls");
    printf("Lista ordenada por descripcions: \n");

    for(i=0; i< tam; i++){
        for(j=i+1; j<tam; j++){
                if(stricmp(vec[i].descripcion,vec[j].descripcion)>0){
                    auxiliar = vec[i];
                    vec[i] = vec[j];
                    vec[j] = auxiliar;
                }
            }
    }
    printf("\nDescripcion\tCodigo\tCantidad\tImporte\tProveedor\n");
    for(i=0; i<tam; i++)
    {
        if(vec[i].isEmpty == 0)
        {
            for(j=0; j<5; j++){
                if(vec[i].idProveedor==prod[j].id){
                    printf("%s\t%2d\t%d\t$%4.2f\t%s\n", vec[i].descripcion, vec[i].codigo, vec[i].cantidad, vec[i].importe, prod[j].descripcion);
                }
            }
        }
    }
}

/*void contarcantidades(eProducto vec[], int tam){
    int a = 0, b = 0, c = 0, mayor, i, flag=0;

    for(i=0; i<tam; i++){
        if(vec[i].isEmpty==0){
           if(vec[i].cantidad>0 && vec[i].cantidad<=18){
                    a++;
                }
            else if(vec[i].cantidad>18 && vec[i].cantidad<35){
                    b++;
                }
            else if(vec[i].cantidad>35){
                    c++;
                }
           }
        }

    if(a >= b && a >= c){
        mayor = a;
    }else{
        if(b >= a && b >= c)
        {
            mayor = b;
        }
        else{
        mayor = c;
        }
    }

    system("cls");
    printf("Grafico de cantidades\n\n");

    for(i=mayor; i>0; i--){
        if(i<= a){
            printf("*");
        }
        if(i<= b){
            flag=1;
            printf("\t*");
        }
        if(i<= c){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }
        printf("\n");
    }
    printf("<18\t19-35\t>35\n\n");

}*/

//INPUTS Y VALIDACIONES

/**
* \brief Verifica el ingreso de caracteres. Chequea para que
solo sean admitidas las letras S o N.
* Se ingresa void y devuelve un entero sin signo
0 si se ingreso la N
1 si se ingreso la S
*/
unsigned int verifica(void)
{
        char letra;
        printf("\nDesea continuar? (S/N)\n");
        letra=toupper(getche());
        while(!((letra=='S')||(letra=='N')))
        {
        printf("\nHa ingresado opci¢n no valida... Reintente el ingreso(S/N)...\n");
        letra=toupper(getche());
        }
        return (letra=='S');
}

int getInt(char mensaje[]){
    int aux;
    printf("%s", mensaje);
    scanf("%d", &aux);
    return aux;
}

float getFloat(char mensaje[]){
    float aux;
    printf("%s", mensaje);
    scanf("%f", &aux);
    return aux;
}

char getChar(char mensaje[]){
    char aux;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%c", &aux);
    return aux;
}
int validarEntero(int num, int limMin, int limMax){
    while(num<=limMin || num>=limMax){
        num = getInt("Error. Reingrese el dato: ");
    }
    return num;
}
