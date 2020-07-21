//Ej. 8) Desarrolle un programa que pueda recibir desde el teclado el valor real de la base y un exponente entero y con esos datos calcule e informe la potencia (de la base leida elevada al exponente leído). Incluya en el programa una función potencia (base, exponente) que realice el cálculo. Gaston Marin
#include<stdio.h>						//biblioteca a usar
int main(){
int b;														//declaracion de la variable que va a ser el numero base
int ex;															//declaracion de la variable que va a ser el exponente
int potencia(int b, int ex);			//declaracion de la funcion que calcula la pontencia de u numero
	printf("\nPrograma que calcula la potencia de un numero x\n");
	printf("\n Ingrese un Numero BASE: ");
	scanf("%i",&b);
	printf("\n Ingrese un Numero EXPONENTE: ");
	scanf("%d",&ex);
	printf("\n\t %i elevado a %d es: %d\n",b,ex,potencia(b,ex));
}	
int potencia(int b, int ex){				//funcion para calcular la potencia
	int  producto, i;
	producto=1;
	for(i=0;i<ex; i++){										//ciclo para calcular la potencia
		producto = producto*b;}
	return producto;
		}
	
