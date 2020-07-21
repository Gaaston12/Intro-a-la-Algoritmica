//Ej. 6) Luego de ingresados los 10 valores, modificar cada valor del arreglo con su sucesor. Luego recorra nuevamente el arreglo y muestre por pantalla sus elementos. Utilizar en cada ciclo estructura iterativa for.Compilar, ejecutar y probar.  Gaston Martin
#include<stdio.h>				//biblioteca a utilizar
int arre[10];					//declaracion del arreglo
int main(){						//funcion principal
int mostrar(int arre[]);		//declaracion de la funcion para mostrar el array acctualizado
int x,i;
	printf("\nPrograma que muestra el numero sucesor del numero que tiene el arreglo\n");
	for(i=0;i<10; i++){			//ciclo for para cargar el arreglo de 10 numeros
		printf("\n\t Ingrese un numero: ");	
		scanf("%d",&x);	
		arre[i]=x;
	}
	mostrar(arre);
	return 0;}

int mostrar(int arre[]){
	int i;
	for(i=0; i<10; i++){			//ciclo for para recorer y mostrar el contenido que tiene el array actualizado
		arre[i]=arre[i]+1;
		printf("\n\t--------------------");
		printf("\n\t Numero actualizado %d\n", arre[i]);}		
	return 0;
	}
	
