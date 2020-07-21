#include<stdio.h>
#define valor 5
int sucesor(int x);								//declaracion de la funcion sucesor
int b;										//declaracion de la variable global
int sucesor(int x){					//declaracion de la funcion sucesor
	return (x+1);
}
int main(int argc, int **argv){				//declaracion de la funcion principal
	int a;
	a=valor;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	if (a==0)
		a=1000;
	b=sucesor(a);
	printf("El sucesor de %d es: %d\n ",a,b);
	return 0;
	}
		
