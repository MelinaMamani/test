int menu(){

    int opcion;

    printf("1) Alta\n");
    printf("2) Baja\n");
    printf("3) Modificar\n");
    printf("4) Listar\n");
    printf("5) Ordenar\n");
    printf("6) Salir\n");

    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);

    return opcion;
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

        esta = buscarEmpleado(vec, tam, legajo);

        if(esta != -1)
        {
            printf("\nEl legajo %d ya esta dado de alta en el sistema.\n", legajo);
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

                   printf("\nAlta exitosa! \n\n");

           }
  }

