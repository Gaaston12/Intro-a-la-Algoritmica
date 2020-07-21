// Ejercicio 11 de la practica numero 7. Hecho por Gaston Martin, Michael Marchesano y Nicolas Docampo
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define N 10

struct Tdata		//definicion del arreglo
{
	int cant;
	int arre[N];
};

void cargar(struct Tdata *a);	//definicion de la accion cargar
int esta(struct Tdata x, int n);	//definicion de la fuincion para ver si esta el numero o no
void copia(struct Tdata a, struct Tdata *b);	//copia los valores que no se repiten en un arreglo nuevo
void mostrar(struct Tdata b);	//definicion de la accion mostrat
void mostrar2(struct Tdata a);

int main()
{
	system("clear");	//limpia la pantalla
	struct Tdata arreglo1,arreglo2;

	cargar(&arreglo1);	//invocacion de la funcion cargar
	copia(arreglo1,&arreglo2);	//invocacion de la funcion copia
	printf("Los Numeros cargados que tiene el arreglo A son: \n");
	mostrar(arreglo1);	//invocacion de la funicon mostrar para los todos los numeros
	printf("Los numeros que no se repiten son :\n");
  mostrar2(arreglo2);	//invocacion de la funcion para mostrar los numeros sin que se repitan
  return 0;
}	//fin de la funcion principal

int esta(struct Tdata x, int n)
{
	int i;
	for (i=0; i<x.cant; i++)
	{
		if (x.arre[i]==n)
		{
			return 1; //1 si se repite
		}
	}	//fin del ciclo
	return 0; //0 si no esta repetido
}//fin de la funcion esta


void copia(struct Tdata a, struct Tdata *b)
{
	int i;
	(*b).cant=0;
	for (i=0;i<=a.cant; i++)
	{
		if(esta((*b),a.arre[i])==0)
		{
			(*b).arre[(*b).cant]=a.arre[i];
			(*b).cant++;
		}
	}
}//fin de la accion copia

void cargar(struct Tdata *a)
{
	int i = 0;
	(*a).cant=0;
	srand(time(NULL)); //Se crea el numero aleatorio
	for(i=0; i<N; i++){
		(*a).arre[i]=(rand()%10+1); //asigno aleatorio un numero
		(*a).cant++;
	}
} //fin de la accion cargar

void mostrar(struct Tdata a)
{
	for(int i=0;i<a.cant;i++)
  {
		printf(" - %d",a.arre[i]);
  }
	printf("/\n");
}//fin de accion mostrar

void mostrar2(struct Tdata a)
{
	for(int i=1;i<a.cant;i++)
  {
		printf(" - %d",a.arre[i-1]);
  }
	printf("/\n");
}//fin de accion mostrar2 para mostrar el arreglo 2 sin los numero repetidos
