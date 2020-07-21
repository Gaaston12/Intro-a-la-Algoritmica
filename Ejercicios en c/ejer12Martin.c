//Programa que calcula promedios, nota maxima y nota minima de un estudiante elegido hecho por Gaston Martin 41.522.639
#include<stdio.h>   //librerias
#define N 50

struct Alumno   //tipo para guardar datos del alumno
{
    char nom[N];
    char ape[N];
    float n1, n2, n3, n4;
};

float Max(struct Alumno x)  //funcion que calcula la nota maxima
{
    if (x.n1>x.n2 && x.n1>x.n3 && x.n1>x.n4)
    {
        return x.n1;
    }
    else if (x.n2>x.n1 && x.n2>x.n3 && x.n2>x.n4)
    {
        return x.n2;
    }
    else if (x.n3>x.n1 && x.n3>x.n2 && x.n3>x.n4)
    {
        return x.n3;
    }
    else if (x.n4>x.n1 && x.n4>x.n2 && x.n4>x.n3)
    {
        return x.n4;
    }
}

float Min(struct Alumno x)  //funcion que calcula la nora minima
{
    if (x.n1<x.n2 && x.n1<x.n3 && x.n1<x.n4)
    {
        return x.n1;
    }
    else if (x.n2<x.n1 && x.n2<x.n3 && x.n2<x.n4)
    {
        return x.n2;
    }
    else if (x.n3<x.n1 && x.n3<x.n2 && x.n3<x.n4)
    {
        return x.n3;
    }
    else if (x.n4<x.n1 && x.n4<x.n2 && x.n4<x.n3)
    {
        return x.n4;
    }
}   //fin de la funcion MIn

float Prom(struct Alumno x) //funcion que calcula el promedio 
{
    return ((x.n1+x.n2+x.n3+x.n4)/4);
}   //fin de la funcion prom

int main(void)  //funcion principal 
{
    struct Alumno a;
    int i=0;
    for (i=0;i<3;i=i+1)  //ciclo para hacerlo resp cantidad de veces
    {
        printf("Ingrese el nombre del alumno\n");
        scanf("%s",a.nom);
        printf("Ingrese el aprllido del alumno\n");
        scanf("%s",a.ape);
        do 
        {
			printf("Ingrese la nota 1\n");
			scanf("%f",&a.n1);
		} while (a.n1<0 || a.n1>10);	//fin de repetir para asignar una nota adecuada
		do
		{
			printf("Ingrese la nota 2\n");
			scanf("%f",&a.n2);
		} while (a.n2<0 || a.n2>10);
		do
		{
			printf("Ingrese la nota 3\n");
			scanf("%f",&a.n3);
		} while (a.n3<0 || a.n3>10);
		do
		{
			printf("Ingrese la nota 4\n");
			scanf("%f",&a.n4);
		} while (a.n4<0 || a.n4>10);
        printf("\t---------------------------------------\n");   
        printf("\tNombre y apellido: %s %s\n",a.nom,a.ape);
        printf("\tnota 1: %.2f\n",a.n1);
        printf("\tnota 2: %.2f\n",a.n2);
        printf("\tnota 3: %.2f\n",a.n3);
        printf("\tnota 4: %.2f\n",a.n4);
        printf("\t---------------------------------------\n");
        printf("\tla nota mas alta del alumno es: %.2f\n",Max(a));  //invocacion de la funcion dela nota mas alta
        printf("\tla nota mas baja del alumno es: %.2f\n",Min(a));  //invocacion de la funcion de la nota mas baja
        printf("\tel promedio del alumno es: %.2f\n",Prom(a));  //invocacion de la funcion del promedio
        printf("\t---------------------------------------\n");   
    }   //fin del ciclo
    return 0;   
}   // fin del programa
