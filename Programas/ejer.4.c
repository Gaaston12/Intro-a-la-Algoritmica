//Ej. 4) Desarrollar un programa que lea tres números desde el teclado e informe si “están ordenados” (puede ser de menor a mayor o de mayor a menor) y sino que” no están ordenados”. Gaston Martin
#include<stdio.h>			//librerias para usar
int z,x,c;											//variables
int cargar(int z, int x, int c);	//funcion para cargar los datos
int orden(int z,int x, int c);	//funcion para ver el orden o si estan desordenados
int main(){
	printf("\nPrograma que te informa si los numero estan ordenados y de que manera\n");
	printf("\n Ingrese al 1er numero: ");
	scanf("%d", &z);
	printf("\n Ingrese al 2do numero: ");
	scanf("%d", &x);
	printf("\n Ingrese al 3er numero: ");
	scanf("%d", &c);
	orden(z,x,c);			//invocacion a la funcion qur compara
	return 0;
}

int orden(int z, int x, int c){								//funcion para comparar los datos cargados
	if (z>x && z>c && x>c)
		printf("\n\t Los numeros estas Ordenados de Mayor a Menor\n");
		else 
			if (c>x && c>z && x>z)
				printf("\n\t Los numeros estan Ordenados de Menor a Mayor\n");
			else 
				printf("\n\t Los numeros estan desordenados\n");
				}
