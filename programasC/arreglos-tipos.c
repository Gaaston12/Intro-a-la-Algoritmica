//Ej. 9) Desarrollar un programa que reciba como datos de entrada un punto del plano cartesiano, los coeficientes a y b de una recta cuando está expresada en la forma explícita (ax + b = y) y con esos datos calcule si el punto pertenece a la recta o no. Si pertenece devuelve verdadero y sino devuelve falso.  Gaston Martin
#include<stdio.h>				//bibliote a utilizar
#include<stdbool.h>			//biblioteca a utlizar
struct recta{
				float x;
				float y;
				} ; rec
float x,y,a,b;						//declaracion de las variables
 bool recta(rec.x, rec.y, float x, float y);			//declaracion de la funcion 
int main(){
	printf("\n Ingrese la coordenada de la recta en X\n");
	scanf("%f",&rec.x);
	printf("\n Ingrese la coordenada de la recta en Y\n");
	scanf("%f",&rec.y);
	printf("\n Ingrese la coordenada del punto en X\n");
	scanf("%f",&x);
	printf("\n Ingrese la coordenada del punto en Y\n");
	scanf("%f",&y);
	if (recta(x,y,a,b)== true)													//condicion para ver si punto pertenece o no a la recta
		printf("\n\t EL PUNTO (%.1f,%.1f) PERTENECE A LA RECTA\n", x,y);
		else if (recta(x,y,a,b)== false)
			printf("\n\t EL PUNTO (%.1f;%.1f) NO PERTENECE A LA RECTA\n", x,y);
return 0;
}
	bool recta(float x, float y, float a, float b){	//funcion para calcular si el punto pertenece o no a larecta 
		if (y == (a) * (x + b)) 
			return true;
			else
				return false;
	}
