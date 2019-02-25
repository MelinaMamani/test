#include <stdio.h>
#include <stdlib.h>

 struct S_datos
{
 int dato0;
 int dato1;
 int dato2;
};

void muestra(int *x, int *y);

void main(){
/* int vector[10];
 int x = 1;
 for(x=1; x<10; x++){
 vector[x] = 23;

 printf("x %d: %d\n",x,vector[x]);
 }*/

 /*char letra1 = 'A';
char letra2 = 'B';
char * p = &letra1;
letra1 = 'C';
letra2 = *p;

 printf("letra1: %c y letra2: %c",letra1, letra2);*/

 /*char *ptrLetra++=3;
 (*ptrLetra)++=3;

 printf("%c",*ptrLetra);*/


/*struct S_datos datos={1,2,3};
int* p= (int*)&datos;*/


/*char letra1 = 'A';
char letra2 = 'B';
char * p = &letra1;
char * p1 = &letra2;
letra1 = 'C';
letra2 = 'D';
letra1 = *p;*/

//printf("letra1: %c creo que C y letra2: %c creo que D",letra1, letra2);

int* vec[10] = {2,4,5,3,6,3,4,9};
printf("%d", *(vec + (2*2)));

/*int num=50, i;
for(i=1; i<=num; i++)
{
if( !( num % i))
{
printf("%d-", i);
}
}*/

 int x, y;
 x=11;
 y=13;
muestra(&x, &y);
printf("\n-----valores dentro de main----");
printf("\nx vale %d \ny vale %d", x, y);

int num = 50, i;
for(i=1; i<=num; i++)
{
if( num % i)
{
continue;
}
printf("%d-", i);
}

int *p, *q;
int z = 4;
 p = &z;
q = p;
*q += 3;
 printf("\nVar nueva %d da 7", *p);

}

 void muestra(int *x, int *y)
{
 *x = *y;
 printf("\n-----valores dentro de la función muestra----");
 printf("\nx vale %d \ny vale %d", *x, *y);
 }
