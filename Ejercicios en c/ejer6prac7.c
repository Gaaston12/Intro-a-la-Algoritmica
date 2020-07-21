//ejercicio 6 de la practica 7
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct Tdata
{
  int array[MAX];
  int cant;
};

int Gan(struct Tdata x);

int main()
{
  struct Tdata arr;

  printf("Las ganancias son:%d \n",Gan(arr));
  return 0;
} //fin de a la funcion principal


int Gan(struct Tdata x)
{
  int i,gan;
  gan=0;

  for (i=0;i<=x.cant;i++)
  {
    gan= gan + x.array[i];
  }
  return gan;
} //fin de la funcion ganancia
