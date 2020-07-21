//Ej. 2) Desarrollar un programa que lea un número desde el teclado e informe si es par, impar o cero. Gaston Martin
#include<stdio.h>
int num;									//variable
int cargar(int x);				//declaracion la funcion
int main(void)	
{
	printf("\nPrograma que informa si el numero ingresado es par o no\n");
	cargar(num);												//invicacion a la funcion
	if (num==0)													// comparando para que muestro que es 0
	printf("\n\t EL NUMERO ES 0");
		else if (num%2==0)
			printf("\n\t El numero es PAR");							//comparacion para ver si es par
				else 
					printf("\n\t El numero es IMPAR");				//comparacion para ver si es impar
					printf("\n");
return 0;
}
int cargar( int x){											//funcion cargar
	printf("\n\t INGRESE EL NUMERO: ");		//pido al usuario que ingrese el numero a comparar
		scanf("%d", &num);
		}
