//cargar un arreglo con numeros que ingrese el usuarion
#include<stdio.h>
int miarreglo[5];
int i=0;
int main (){

	for (i=0; i<5; i++){
		printf("\nIngrese un numero: ");
		scanf("%d", &miarreglo[i]);
	}
	for (i=0; i<5; i++)
		printf("%d\n", miarreglo[i]);
		
	return 0;
}
