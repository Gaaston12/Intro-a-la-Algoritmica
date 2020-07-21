/*Ej.12) Corazón = Cáscara: Dada una Matriz de [n x m] de enteros, con n >= 3 y m >=3, determinar si la sumatoria de las celdas límites (cáscara) es igual que la sumatoria las celdas del interior (todas menos las límites). Gaston Martin*/
//bibliotecas a utilizar
#include<stdio.h>			
#include<stdlib.h>
#include<time.h>
int main()			//funcion principal
{
	srand(time(NULL));			//generador del random
	
	int i,j,suma1=0,suma2=0,f,c;		//declaracion de las variables
	int arre[50][50];								//declaracion del arreglo
	printf("\nPrograma que calcula la sumatoria de los numeros del centro y los numeros del contorno de una matriz \n");		
	printf("Ingrese la cantidad de filas: \n");						
	scanf("%d",&f);											
	printf("Ingrese la cantidad de columnas: \n");
	scanf("%d",&c);
	//ciclo para cargar la matriz con numero random
	for (i=0;i<f;i++)								
	{
		for (j=0;j<c;j++)
	{
			arre[i][j]=rand()%10+1;
			printf("|%d|",arre[i][j]);
	}
		printf("\n");
	}
	//ciclo para sumar la primer fila de la matriz
	for(i=0;i<1;i++)				
	{
		for (j=0;j<c;j++)
		{
			suma1=suma1+arre[i][j];
			}
		}
		//ciclo para sumar la ultima fila de la matriz
	for (i=f-1;i<f;i++)			
	{
		for(j=0;j<c;j++)
		{
			suma1=suma1+arre[i][j];
			}
		}
		//ciclo para sumar la primer columna de la matriz
	for(i=1;i<f-1;i++)			
	{
		for(j=0;j<1;j++)
		{
			suma1=suma1+arre[i][j];
			}
		}
		//ciclo para sumar la ultima columna de la matriz
	for(i=1;i<f-1;i++)			
	{
		for(j=c-1;j<c;j++)
		{
			suma1=suma1+arre[i][j];
			}
		}
		//ciclo para sumar el centro de la matriz
	for (i=1;i<f-1;i++)			
		{
			for(j=1;j<c-1;j++)
			{
				suma2=suma2+arre[i][j];
			}
	}
		printf("la suma de la cascara es: %d\n", suma1);	//imprimo la suma de los bordes de la matriz
	printf("la suma del corazon es: %d\n", suma2);		//imprimo la suma del centro de la matriz
	//condicion para comparar si la suma del centro de la matriz es igual a la suma del contorno de la misma
	if (suma1==suma2)						
		printf("El corazon es igual a la cascara\n");
	else
		printf("El corazon no es igual a la cascara\n");
	return 0;
}
