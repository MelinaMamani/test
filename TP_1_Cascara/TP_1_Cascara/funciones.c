void menu(){
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
}

int suma(int a, int b){
        int resultado;
        resultado = a + b;
        return resultado;
}
int resta(int a, int b){
        int resultado;
        resultado = a - b;
        return resultado;
}
int division(int a, int b){
        int resultado;
        resultado = a / b;
        return resultado;
}
