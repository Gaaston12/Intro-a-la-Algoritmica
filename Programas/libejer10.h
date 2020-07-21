/*Ej. 10) Desarrolle una librería en lenguaje C que incluya las funciones que se describen y dé un ejemplo de uso.Para la resolución definir el tipo Punto con struct.10.1 Una función que reciba como parámetros de entrada un punto del plano cartesiano, las coordenadas del centro de un círculo y su radio, y con esta información devuelva verdadero si el punto está adentro del círculo y sino falso. 10.2 Una función que reciba como parámetros de entrada dos puntos del plano cartesiano, y devuelva la distancia que hay entre los dos puntos. Gaston Martin*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
struct Punto{
			float x,y;
			}c,p,a,b;

int percirc(struct Punto c,struct Punto p, float radio){
	if (sqrt(((c.x-p.x)*(c.x-p.x))+((c.y-p.y)*(c.y-p.y)))<=radio)
		return 1;
	else
		return 0;
		}
float distancia(struct Punto a, struct Punto b){
	float x;
	x=sqrt(((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y)));
return x;
}
