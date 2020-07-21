#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"ejer.10"
struct Punto{
	float x,y;
	}a,b;
float distancia(struct Punto a, struct Punto b);
int main (void){
/*	printf("\n Ingrese el primer punto en x: ");
	scanf("%f",& a.x);
	printf("\n Ingrese el primer punto en y: ");
	scanf("%f",& a.y);
	printf("\n Ingrese el segundo punto en x: ");
	scanf("%f",& b.x);
	printf("\n Ingrese el segundo punto en y: ");
	scanf("%f",& b.y);*/
	printf("\n\t La distancia entre los puntos es: %.1f\n", distancia(a,b));
return 0;
}

float distancia(struct Punto a, struct Punto b){
	float x;
	x=sqrt(((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y)));
return x;
}
