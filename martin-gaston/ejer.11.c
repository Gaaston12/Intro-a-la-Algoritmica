/*Ej. 11) Teniendo en cuenta que un rectángulo queda determinado por las coordenadas de dos vértices opuestos y un círculo queda determinado por las coordenadas de su centro y su radio. Desarrollar un programa en Lenguaje C que dados como datos de entrada las coordenadas del par de vértices opuestos del rectángulo, las coordenadas del centro del círculo y su radio , y las coordenadas de un punto problema, nos proporcione como salida, considerando la ubicación del punto problema en relación a las figuras, alguno de los textos que a continuación se transcriben. Gaston Martin*/
//bibliotecas a utilizar
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"ejer.10.h"								//libreria creada en el punto 10
int pertrect(punt pr1,punt pr2,punt p1);
int main(){
	punt v1;// punto
	punt v2,v3;// rectangulo	
	circ cv;// circulo
	printf("\nPrograma que utiliza la libreria creada en el ejer 10, que calcula si un punto pertenece a un circulo y a un rectangulo\n");
	//cargar todos los datos necesarios
	printf("\n Ingrese el vertice 1 en X: ");				//cargando el rectangulo
	scanf("%f",&v1.x);
	printf("\n Ingrese el vertice 1 en Y: ");
	scanf("%f",&v1.y);
	printf("\n Ingrese el vertice 2 en X: ");
	scanf("%f",&v2.x);
	printf("\n Ingrese el vertice 2 en Y: ");
	scanf("%f",&v2.y);
	//cargando las coordenadas del punto
	printf("\n Ingrese el punto en X: ");
	scanf("%f",&v3.x);
	printf("\n Ingrese el punto en Y: ");
	scanf("%f",&v3.y);
	//cargando los datos del circulo
	printf("\n Ingrese el centro del circulo en X: ");
	scanf("%f",&cv.centro.x);
	printf("\n Ingrese el centro del circulo en Y: ");
	scanf("%f",&cv.centro.y);
	printf("\n Ingrese el radio: ");
	scanf("%d",&cv.radio);
	
	//condicional para ver si esta adentro de las figuras o no
	if ((pertrect(v1,v2,v3)) && (pertCirc(v1,cv)))
		printf("\npunto esta adentro del rectangulo y del circulo\n");
		else 
			if ((pertrect(v1,v2,v3) && !pertCirc(v1,cv))) 
				printf("\nEl punto esta adentro del rectangulo y no al circulo\n");
			else 
				if (!pertrect(v1,v2,v3) && pertCirc(v1,cv))
					printf("\nEl punto esta adentro del circulo y no al rectangulo\n");
				else 
					printf("\nEl punto esta afuera de las figuras\n");
	return 0;
	}
	
int pertrect(punt pr1,punt pr2,punt p1){																//funcion para comprobar si esta adentro del rectangulo
	int rect;
	rect=0;														//0 representa el false	
	if ((p1.x>pr1.x) && (p1.x<pr2.x) && (p1.y>pr1.y) && (p1.y<pr2.y)) 
		rect=1;														//representa el verdadero
return rect;
}		
