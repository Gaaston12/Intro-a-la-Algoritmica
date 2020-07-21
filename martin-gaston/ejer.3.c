//Ej. 3) Desarrollar un programa que lea tres números distintos desde el teclado e informe cuál es el menor, cuál es el del medio y cuál es el mayor. Gaston Martin
#include<stdio.h>
int main(){																		//funcion principal
int a,b,c;																				//variables 
void mayor(int a, int b, int c);								//funcion para ver cual es el mayor, medio y el menor
	printf("\nPrograma que informa que numero es el mayor, cual el del medio y cual el menor\n");
	printf("\n Ingrese el PRIMER numero: ");
	scanf("%d",&a);
	printf("\n Ingrese el SEGUNDO numero: ");
	scanf("%d",&b);
	printf("\n Ingrese el TERCER numero: ");
	scanf("%d",&c);
	mayor(a,b,c);
	return 0;
	}
void mayor(int a, int b, int c){							//funcion 
	if ((a>b) && (a>c))																								//condiciones para ver cual es el mayor cual menor y cual el del medio
		printf("\n\t El numero ingresado (%d) es el mayor\n",a);
	else 
		if((b>a) && (b>c))
				printf("\n\t El numero ingresado (%d) es el mayor\n",b);
		else 
			if ((c>a) && (c>b))
					printf("\n\t El numero ingresado (%d) es el mayor\n",c);
	
	if((a>b) && (a<c))
		printf("\n\t El numero ingresado (%d) es el medio\n",a);
	else 
		if((b>a) && (b<c))
			printf("\n\t El numero ingresado (%d) es el medio\n",b);
		else 
			if((c>a) && (c<b))
				printf("\n\t El numero ingresado (%d) es el medio\n",c);	
	
	
	if((a<b) && (a<c))
		printf("\n\t El numero ingresado (%d) es el menor\n",a);
	else 
		if((b<a) && (b<c))
			printf("\n\t El numero ingresado (%d) es el menor\n",b);
		else 
			if((c<a) && (c<b))
				printf("\n\t El numero ingresado (%d) es el menor\n",c);
				
	}

