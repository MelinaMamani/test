void menu(float a, float b){
        printf("\n1) Ingresar 1er operando (A= %.2f)\n", a);
        printf("2) Ingresar 2do operando (B= %.2f)\n", b);
        printf("3) Calcular la suma (A+B)\n");
        printf("4) Calcular la resta (A-B)\n");
        printf("5) Calcular la division (A/B)\n");
        printf("6) Calcular la multiplicacion (A*B)\n");
        printf("7) Calcular el factorial (A!)\n");
        printf("8) Calcular todas las operaciones\n");
        printf("9) Salir\n");
}
void suma(float a, float b){
        float resultado;
        resultado = a + b;
        printf("Suma = %.2f\n", resultado);
}
void resta(float a, float b){
        float resultado;
        resultado = a - b;
        printf("Resta = %.2f\n", resultado);
}
void division(float a, float b){
        float resultado;
        if(b==0){
                printf("No se puede divir por 0. Ingrese otro numero en la opcion 2.\n");
                }
        else{
                resultado = a / b;
                printf("Division = %.2f\n", resultado);
        }
}
void mult(float a, float b){
        float resultado;
        resultado = a * b;
        printf("Multiplicacion = %.2f\n", resultado);
}
void factorial(float n)
{
    int i;
    int numFac;
    unsigned long long factor=1;
    numFac = ceil(n);

    for(i=1;i<=numFac;i++)
    {
        factor=factor*i;
    }
    if(n<0){
            printf("No se puede factorear numeros negativos.\n");
            }
    else if(n>20){
            printf("Error. Numero demasiado alto.\n");
            }
    else{
            printf("El factorial de %d es %llu\n",numFac,factor);
            }
}
unsigned int verifica(void)
{
        char letra;
        printf("Desea continuar...S/N?\n");
        letra=toupper(getche());
        while(!((letra=='S')||(letra=='N')))
        {
        printf("\nHa ingresado opci¢n no valida...Reintente el ingreso(S/N)...\n");
        letra=toupper(getche());
        }
        return (letra=='S');
}

