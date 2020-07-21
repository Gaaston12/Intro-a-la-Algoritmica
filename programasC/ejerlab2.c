#include<stdio.h>
int suma(int x, int y);
int x,y;
int main()
{
	printf("\n Ingrese un valor ");
	scanf("%d",&x);
	printf("\n Ingrese otro valor ");
	scanf("%d",&y); 
	printf("\n\t El resultado de la suma es: %d ", suma(x,y));
	printf("\n");
	return 0;
	}
int suma(int x,int y)
	{
	return x+y;
	}
