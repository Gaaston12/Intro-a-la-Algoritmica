#include<stdio.h>
int main(void){
	int arre[10];
	int i=0;
	int x=0;
	while (i<10){
		printf("\n\t Ingrese un numero %d: ", i+1);
		scanf("%d", &arre[i]);
		x += arre[i];
		i=i+1;
		printf("\n");
		}
		return 0;
		}
		
