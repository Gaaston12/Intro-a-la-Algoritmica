#include <math.h>
#include <stdbool.h>
typedef struct Punto{
	float x,y;
}Punt;
typedef struct Circulo{
 float radio;
	 Punt centro;
}Circ;


float DistPunto(Punt P1, Punt P2);
bool DentroCirc(Punt P, Circ C);

float DistPunto(Punt P1, Punt P2)
{
float dist;
	dist=sqrt(((P1.x-P2.x)*(P1.x-P2.x))+((P1.y-P2.y)*(P1.y-P2.y)));
return dist;
}
bool DentroCirc ( Punt P, Circ C)
{
float cat1,cat2,h;
bool resCirc;
	cat1=(C.centro.x-P.x);
	cat2=(C.centro.y-P.y);
	h=sqrt((cat1*cat1)+(cat2*cat2));
if (h<=C.radio)
 resCirc=true;
else 
 resCirc=false;
return resCirc;
}
