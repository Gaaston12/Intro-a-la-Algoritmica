/*Ej. 10) Desarrolle una librería en lenguaje C que incluya las funciones que se describen y dé un ejemplo de uso.Para la resolución definir el tipo Punto con struct.10.1 Una función que reciba como parámetros de entrada un punto del plano cartesiano, las coordenadas del centro de un círculo y su radio, y con esta información devuelva verdadero si el punto está adentro del círculo y sino falso. 10.2 Una función que reciba como parámetros de entrada dos puntos del plano cartesiano, y devuelva la distancia que hay entre los dos puntos. Gaston Martin*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
struct Punto{
			float x,y;
			}punt,a,b;
struct Circulo{
			float radio;
	struct Punto centro;
}cencirc;	
int percirc(struct Circulo c,struct Punto p);
float distancia(struct Punto a, struct Punto b);


int percirc(struct Circulo c,struct Punto p){
	if (sqrt(((c.centro.x-p.x)*(c.centro.x-p.x))+((c.centro.y-p.y)*(c.centro.y-p.y)))==c.radio)
		return 1;
	else
		return 2;
		}
float distancia(struct Punto a, struct Punto b){
	float x;
	x=sqrt(((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y)));
return x;
}
