#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define TAM 3

typedef struct{
    int id;
    char descripcion[51];
    int isEmpty;
}eProveedores;

typedef struct{
    int codigo;
    char descripcion[41];
    int cantidad;
    float importe;
    int isEmpty;
    int idProveedor;
}eProducto;

int menu();
int getInt(char[]);
float getFloat(char[]);
char getChar(char[]);
void inicializarProductos(eProducto[], int);
//void mostrarProductos(eProducto[], int, eProveedores[]);
void mostrarProducto(eProducto);
int buscarLibre(eProducto[], int);
int buscarProducto(eProducto[], int, int);
void altaProducto(eProducto[], int);
void bajaProducto(eProducto[], int);
void modificaProducto(eProducto[], int);
int submenuMod();
void informarProductos(eProducto[], int);
int submenuInfo();
void ordenarPorDesc(eProducto[], int, eProveedores[]);
//void contarEdades(eProducto[], int);
unsigned int verifica(void);
int validarEntero(int, int, int);
#endif // FUNCIONES_H_INCLUDED
