
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

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

int menu();
void inicializarEmpleados(eEmpleado[], int);
void mostrarEmpleados(eEmpleado[], int);
void mostrarEmpleado(eEmpleado);
int buscarLibre(eEmpleado[], int);
int buscarEmpleado(eEmpleado[], int, int);
void altaEmpleado(eEmpleado[], int)
void bajaEmpleado(eEmpleado[], int);
void modificaEmpleado(eEmpleado[], int)

#endif // FUNCIONES_H_INCLUDED
