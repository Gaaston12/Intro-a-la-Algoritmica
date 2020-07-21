#include<stdio.h>
int main()
{ 
	int z,x,c;
	printf("Ingrese 3 numeros\n");
	printf("ingrese el 1er numero: ");
	scanf("%d",& z);
	printf("ingrese el 2do numero: ");
	scanf("%d",& x);
	printf("ingrese el 3er numero: ");
	scanf("%d",& c);
	if(z>x && z>c)
		printf("\n%d es el mayor",z);
			else if (x>z && x>c)
				printf("\n%d es el mayor",x);
					else 
						printf("\n%d es el mayor",c);
						printf("\n");
return 0;
}
