/*Ej.13) Sopa de letras: Dada una Matriz de [n x m] caracteres y un Arreglo de l caracteres, con l <=n y l<=m, determinar si la palabra que forma el arreglo está presente en la matriz al menos una vez, de forma vertical u horizontal (cabe destacar que a diferencia de la sopa de letra original, no debe considerar que la palabra pueda estar en forma diagonal o al revés). Se debe informar entre que posiciones está la palabra, si es que está. Gaston Martin*/
#include <stdio.h>				//biblioteca a utilizar 
//declaracion de los tipos
typedef struct Tsopa{
	char mat [10][10];
	int F,C;
}sopa;

typedef struct Tpalabra{
	char arreg [10];
	int cant;
}palab;
//declaracion de las variables
int y,r,p;
int mostrar(sopa a,palab b);				//declaracion de la funcion
int horizontal(sopa m,palab n);			//declaracion de la funcion
int vertical(sopa m,palab n);				//declaracion de la funcion

int main(){						//funcion principal
	sopa s;
	palab l;
	int register i,j,k;
	char temp,temp1;
	printf("\nSopa de letras \n");
	printf("Ingrese la cantdad de filas ");					//ingreso de los datos para generar la matriz
	scanf("%i",&s.F);		
	printf("Ingrese la cantdad de columnas ");
	scanf("%i",&s.C);		
	for (i=1; i<=4; i++)														//ciclio anidado para cargar la matriz con letra desde el teclado
		for(j=1; j<=5; j++){
			printf("Ingrese una letra ");
			scanf("%s",&temp);
			s.mat[i][j]=temp;
		}
	printf("\n Ingrese la cantidad de letras que tiene la palabra ");				//ingreso de datos para generar el arreglo
	scanf("%i",&l.cant);
	for(k=1; k<=l.cant; k++){																//ciclo para cargar el arreglo
		printf("Ingrese una letra ");
		scanf("%s",&temp1);
		l.arreg[k]=temp1;

	}	
	mostrar(s,l);												//invocacion a la funcion para mostrar 
	if (horizontal(s,l))
		printf("\nLa palabra se encuentra de forma horizontal en la pocision (%i,%i) hasta (%i,%i)\n",y,r,y,p); 	
	else
		if (vertical(s,l))
			printf("\nLa palabra se encuentra de forma vertical en la pocision (%i,%i) hasta (%i,%i)\n",y,r,p,r);
		else
		printf("\nLa palabra no se encuentra\n");	
	return 0;
}

int mostrar(sopa a,palab b){										//funcion para mostrar
	int register i,j,k;

	for(i=1; i<=a.F; i++){									//ciclo anidado para mostrar la matriz en orden
		for(j=1; j<=a.C; j++){	
			printf("|%c|",a.mat[i][j]);		
		}
		printf("\n");
	}
	printf("La palabra es: ");								
	for(k=1; k<=b.cant; k++){											//ciclo para mostrar la palabra para comparar
		printf(" %c ",b.arreg[k]);
	}
	return 0;
}	

int horizontal(sopa m,palab n){											//funcion para si la palbra esta en forma horizontal 
 int register i,j,k;
	int z=1,x=1,h,l,cont=0; 
	for (i=1; i<=m.F; i+=z){															//ciclos anidados para comparar la palabra que esta en el arreglo con los componentes de la matriz
		for (j=1;j<=((m.C-n.cant)+1); j+=x){
			h=1;
			l=j;
		for(k=1; k<=h; k+=1){
			if(m.mat[i][l]==n.arreg[k]){
				cont++,h++,l++;
			}
			else
				if((l>=m.C)||(cont>=n.cant)){
					y=i,r=j,p=l-1;
					x=m.C+1;
					z=m.F+1;
				}
				else
					cont=0;
			}
		}
	}	
	return cont>=n.cant;
}

int vertical(sopa m,palab n){								//funcion para ver si la palabra se encuentra en forma veritcal
 int register i,j,k;
	int z=1,x=1,h,l,cont=0; 
	for (i=1; i<=m.F; i+=z){									//ciclos anidados para conparar verticalmente la palabra ingresada en el arreglo con lo ocmponentes de la matriz
		for (j=1;j<=m.C; j+=x){
			h=1;
			l=i;
		for(k=1; k<=h; k+=1){
			if(m.mat[l][j]==n.arreg[k]){
				cont++,h++,l++;
			}
			else
				if((l>=m.C)||(cont>=n.cant)){
					y=i;r=j,p=l-1;
					x=m.C+1;
					z=m.F+1;
				}
				else
					cont=0;
			}
		}
	}		
	return cont>=n.cant;
}
