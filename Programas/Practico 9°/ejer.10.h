/*Ej. 10) Desarrolle una librería en lenguaje C que incluya las funciones que se describen y dé un ejemplo de uso.Para la resolución definir el tipo Punto con struct.10.1 Una función que reciba como parámetros de entrada un punto del plano cartesiano, las coordenadas del centro de un círculo y su radio, y con esta información devuelva verdadero si el punto está adentro del círculo y sino falso. 10.2 Una función que reciba como parámetros de entrada dos puntos del plano cartesiano, y devuelva la distancia que hay entre los dos puntos. Gaston Martin. Utiliada en el ejercicio 11*/
#include<stdio.h>
#include<math.h>

typedef struct Punto{
			float x,y;
}punt;	
typedef struct circulo{
	int radio;
	punt centro;
}circ,a,b;			
 int pertCirc(punt p,circ c);
 
int pertCirc(punt p,circ c){
	int res;
	if (sqrt(((c.centro.x-p.x)*(c.centro.x-p.x))+((c.centro.y-p.y)*(c.centro.y-p.y)))<=c.radio)
		res=1;
	else
		res= 0;
	return res;	
		}
float distancia(punt a, punt b){
	float x;
	x=sqrt(((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y)));
return x;
}
