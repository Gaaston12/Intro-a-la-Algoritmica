//programa que simula una simple calculadora con 4 funciones. hecho por Gaston Martin y MIchael Marchessano 
#include <stdio.h>	//librerias
#include <stdlib.h>
#define ERRD0 1	//codigo error divicion por 0

float Cargar(float *x, float *y)
{
	printf("Ingrese el Numero\n");
	scanf("%f",&(*x));
	printf("Ingrese el Numero\n");
	scanf("%f",&(*y));
}	//fin de la cuncion cargar

int Calcu(float x, float y, char z, float *r)
{	
	if (z=='+')
	{
		(*r)= (x)+(y);
	}
	else if(z=='-')
	{
		(*r)= (x)-(y);
	}
	else if(z=='*')
	{
		(*r)= (x)*(y);
	}
	else if(z=='/')
	{
		if((y)!=0)
		{
			(*r)= (x)/(y); 
		}
		else
		{
			return ERRD0;
		}
	return 0;
	}
}//fin de la accion calcu*/

int main(void)
{
	float a,rta,b;
	char o;
	int err;
	
	system("clear");	//limpiar la pantalla
	Cargar(&a,&b);
	printf("Ingrese el operador\n");
	scanf("%s",&o);
	printf("\t%.2f %c %.2f\n",a,o,b);
	printf("\t===========\n");
	err=Calcu(a,b,o,&rta);
	
	if (err==ERRD0)	//informa si hay error o no
	{
		printf("ERROR de divicion por 0\n");
	}
	else
	{
		printf("\t   %.2f\n",rta);
	}
	return 0;
}	//fin del programa
