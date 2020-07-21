//programa que te dice si un arreglo es capicua
#include<stdio.h>
#include<stdlib.h>
#define max 100

int Capicua(char x[]);

int main()
{
  char cap[max] = {'2','0','0','2'};

  if(Capicua(cap)==1)
  {
    printf("Es Capicua\n");
  }
  else
  {
    printf("No Es Capicua\n");
  }
  return 0;
} //fin de la accion principal

int Capicua(char x[max])
{
  int band = 1, i = 0;
  do
  {
    if((x[i]) != x[4-i+1])
    {
      return 0;
    }
    else
    {
      band=1;
    }
    i=i+1;
  }while(i<=2);
}   //fin de la funcion capicua
