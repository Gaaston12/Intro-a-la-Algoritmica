#include<stdlib.h>
#include<stdio.h>
int factorial(int numero);
int numero;

int main()
{
	system("color 4");
	printf("\n Ingrese el numero al factoriar: ");
	scanf("%d",&numero);
	printf("\n\t El resultado es: %d\n", factorial(numero));
}

int factorial (int numero)
	{
	int i;
	int res=1;
	for(int i=1;i<=numero;i++)
		{
		res = res*i;
		}
	return res;
	}
