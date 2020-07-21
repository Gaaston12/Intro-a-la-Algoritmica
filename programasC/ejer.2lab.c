//suma los numeros contenidos por un arreglo
#include<stdio.h>
struct miArreglo{
				int cant;
				int datos[10];
				};
				
struct miArreglo MyArray;
int i;
int sumas(struct miArreglo x);
int main(){
	for (i=0; i<5; i++){
		printf("\nIngrese un numero: ");
		scanf("%d",&MyArray.datos[i]);
		}
	printf("La suma es:%i \n",sumas(MyArray));	
return 0;
}
int sumas(struct miArreglo x){
	int resultado=0;
	for (i=0; i<5; i++){
		resultado=resultado + x.datos[i];
	}
	return resultado;
}
	
