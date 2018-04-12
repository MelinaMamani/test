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

float suma(float a, float b){
        float resultado;
        resultado = a + b;
        return resultado;
}
float resta(float a, float b){
        float resultado;
        resultado = a - b;
        return resultado;
}
float division(float a, float b){
        float resultado;
        resultado = a / b;
        return resultado;
}
float mult(float a, float b){
        float resultado;
        resultado = a * b;
        return resultado;
}
float factorial(float n)
{
        int resp;
        if(n==1)
        return 1;
        resp=n* factorial(n-1);
        return (resp);
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

