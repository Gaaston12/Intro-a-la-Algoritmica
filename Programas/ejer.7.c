// Ej. 7) Declarar un arreglo de caracteres de tamaño 17, y cargarlo con los siguientes caracteres en su declaración:“ertwnoeblreicsxde”. Luego recorra el arreglo de atrás para adelante, con paso -2, y muestre por pantalla cada carácter. Desarrolle una versión utilizando la for, y posteriormente otra versión con do while. Compilar, ejecutar y probar. Gaston Martin 
#include<stdio.h>										//libreria a utilizar

char mostrar(char z[17]){						//funcion para mostrar el arreglo con un ciclo FOR
		int i;
		for(i=16;i>-1; i=i-2){
			printf("%c",z[i]);
			}
			printf("\n");
			}
char mostrar2(char x[]){						//funcion para mostrar el arreglo con un ciclo WHILE
	int i=16;
	do{
		printf("%c",x[i]);
		i=i-2;
		}while (i>=0);
		printf("\n"); }

int main(){													
	char arre[17];										//declaracion del arreglo 
		arre[0]='e';										//asignacion a cada indice del arreglo
		arre[1]='r';
		arre[2]='t';
		arre[3]='w';
		arre[4]='n';
		arre[5]='o';
		arre[6]='e';
		arre[7]='b';
		arre[8]='l';
		arre[9]='r';
		arre[10]='e';
		arre[11]='i';
		arre[12]='c';
		arre[13]='s';
		arre[14]='x';
		arre[15]='d';
		arre[16]='e';
	printf("\nPrograma que muetra la palabra exelente que esta contenida en el arreglo mediante un ciclo for y otro ciclo while\n");
	mostrar(arre);										//invocacion a la funcion para mostrar con FOR
	mostrar2(arre);										//invocacion a la funcion para mostrar con WHILE
	
	return 0;
}
