int menu(){

    int opcion;

    system("cls");
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

    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

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

void bajaEmpleado(eEmpleado vec[], int tam){
    int legajo;
    int esta;
    char confirma;

    system("cls");
    printf("---Baja Empleado---\n\n");

        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if(esta == -1)
        {
            printf("\nEl legajo %d no se encuentra en el sistema\n\n", legajo);

        }
        else{

                mostrarEmpleado(vec[esta]);

        do{
            printf("\nConfirma baja? [s|n]: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');

        if(confirma == 's'){
            vec[esta].isEmpty = 1;
            printf("\nSe ha realizado la baja\n\n");
        }
        else{
            printf("\nSe ha cancelado la baja\n\n");
        }

        }
}

void modificaEmpleado(eEmpleado vec[], int tam){
    int legajo;
    int esta;
    char confirma;

    system("cls");
    printf("---Modifica Empleado---\n\n");

        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if(esta == -1)
        {
            printf("\nEl legajo %d no se encuentra en el sistema\n\n", legajo);

        }
        else{

                mostrarEmpleado(vec[esta]);
                switch(submenuMod()){

                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 7:
                    salir = 's';
                    break;
                default:
                    printf("\nOpcion no valida.\n");
                    system("pause");
                    system("cls");
                    break;
                }

        do{
            printf("\nConfirma baja? [s|n]: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');

        if(confirma == 's'){
            vec[esta].isEmpty = 1;
            printf("\nSe ha realizado la modificacion\n\n");
        }
        else{
            printf("\nSe ha cancelado la modificacion\n\n");
        }

        }
}

int submenuMod(){
    int opcion;

    printf("1) Legajo\n");
    printf("2) Nombre\n");
    printf("3) Sexo\n");
    printf("4) Sueldo\n");
    printf("5) Fecha de ingreso\n");
    printf("6) Sector")
    printf("7) Salir\n");

    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);

    return opcion;
}
