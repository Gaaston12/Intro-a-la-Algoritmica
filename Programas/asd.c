#include <stdio.h>

typedef struct TsopaL{
	char mat [10][10];
	int cantF,cantC;
}sopa;

typedef struct Tpalabra{
	char arreg [10];
	int cant;
}palab;

int mostrar(sopa a,palab b);
int horizontal(sopa m,palab n);

int main(){
	sopa s;
	palab l;
	int register i,j,k;
	char temp,temp1;
	printf("Ingrese la cantdad de filas ");
	scanf("%i",&s.cantF);		
	printf("Ingrese la cantdad de columnas ");
	scanf("%i",&s.cantC);	
	for (i=1; i<=4; i++)
		for(j=1; j<=5; j++){
			printf("Ingrese una letra ");
			scanf("%s",&temp);
			s.mat[i][j]=temp;
		}
	printf("\n Ingrese la cantidad de letras que tiene la palabra ");
	scanf("%i",&l.cant);
	for(k=1; k<=l.cant; k++){
		printf("Ingrese una letra ");
		scanf("%s",&temp1);
		l.arreg[k]=temp1;

	}	
	mostrar(s,l);
	if (horizontal(s,l)){
		printf("\nLa palabra se encuentra\n");
		printf("\n(%d,%d)\n",s.mat[i][j]);}
	else
		printf("\nLa palabra no se encuentra\n");	
	return 0;
}

int mostrar(sopa a,palab b){
	int register i,j,k;

	for(i=1; i<=a.cantF; i++){
		for(j=1; j<=a.cantC; j++){
			printf("|%c|",a.mat[i][j]);		
		}
		printf("\n");
	}
	printf("La palabra es: ");
	for(k=1; k<=b.cant; k++){
		printf(" %c ",b.arreg[k]);
	}
	return 0;
}	

int horizontal(sopa m,palab n){
 int register i,j,k;
	int z=1,x=1,y,h,l,cont=0; 
	for (i=1; i<=m.cantF; i+=z){
		for (j=1;j<=((m.cantC-n.cant)+1); j+=x){
			y=1;
			h=1;
			l=j;
		for(k=1; k<=h; k+=y){
			if(m.mat[i][l]==n.arreg[k]){
				cont++,h++,l++;
			}
			else 
				if((l>=m.cantC)||(cont>=n.cant)){
					y=n.cant+1;
					x=m.cantC+1;
					z=m.cantF+1;
					}
				else{
					cont=0;
					y=n.cant;	
				}
			}
		}
	}
	return cont>=n.cant;
}
