#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float distancia(float x1, float y1, float x2, float y2);
int main (void){
	float x1, y1, x2, y2, dist;
	printf("\n Ingrese el primer punto en x: ");
	scanf("%f",& x1);
	printf("\n Ingrese el primer punto en y: ");
	scanf("%f",& y1);
	printf("\n Ingrese el segundo punto en x: ");
	scanf("%f",& x2);
	printf("\n Ingrese el segundo punto en y: ");
	scanf("%f",& y2);
	printf("\n\t La distancia entre los puntos es: %.1f\n", distancia(x1,y1,x2,y2));
return 0;
}

float distancia(float x1,float y1, float x2, float y2){
	float x;
	x=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
return x;
}
