//Ej. 5) Declarar un arreglo de números enteros de tamaño 10, y cargarlo con 10 números leídos desde el teclado.Utilice para ello una estructura iterativa con la sentencia while. Compilar, ejecutar y probar.Gaston Martin
#include<stdio.h>			//libreria a utilizar
int main(){
	printf("\nPrograma para cargar un arreglo\n");
	int arre[10];				//declaracion de arreglo
	int x;							//variable
	int i=0;						//iniciacion del contador para el ciclo
		while (i<10){			//inicio y condicion de alto del siclo
		printf("\n\t Ingrese un numero: ");	
		scanf("%d",&x);		
		arre[i]=x;
		printf("\t el numero es: %d\n", arre[i]);
		i=i+1;						//actualizando el contador para que no se genere un bucle
		}
		return 0;
}
