#include <stdio.h>
int main()
{
int x;
printf("\n\t Programa que calcula si un numero es par o no");
printf("\n\nIngrese un numero: ");
scanf("%d",&x);

if (x==0)
printf("\n\t INGRESE UN NUMERO DESTINTO A 0");

else if (x%2==0)
	printf("\nEL numero es par");
	else
		printf("\nEl numero es impar");
printf("\n");
return 0;
}

