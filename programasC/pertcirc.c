#include<stdio.h>
#include<math.h>
#include<stdbool.h>
typedef struct{
	float x;
	float y;
	};TPunto
	
TPunto punt, cent;	
bool percirc(TPunto punt, TPunto cent);
int main(void){
int radio;
	printf("\n Ingrese el centro del circulo en x: ");
	scanf("%f", &TPunto.x);
	printf("\n Ingrese el centro del circulo en y: ");
	scanf("%f", &TPunto.y);
	printf("\n INgrese el radio: ");
	scanf("%d", &radio);
	if (percirc(punt, cent)=true)
		printf("\n\tEl punto esta adentro del circulo\n");
	else
		printf("\n\tEl punto no esta adentro del circulo\n");
return 0;
	}
bool percirc(TPunto punt, TPunto cent){
	if (sqrt(((cent.x-punt.x)*(cent.x-punt.x))+((cent.y-punt.y)*(cent.y-punt.y)))=radio)
		return true;
	else
		return false;
		}
