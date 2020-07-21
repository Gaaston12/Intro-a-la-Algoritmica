#include<stdio.h>
#include<stdlib.h>

#define mes 31
#define mes2 28

void mostrarTemp(char *x, float y[]);


int main()
{
  float temperaturas[mes];
  system("clear");

  for(int i=0;i<mes;i++)
  {
    temperaturas[i]=i+1;
  }
  mostrarTemp("marzo",temperaturas);
  for(int i=0;i<mes;i++)
  {
    temperaturas[i]=i+1;
  }
  mostrarTemp("mayo",temperaturas);
  for(int i=0;i<mes2;i++)
  {
    temperaturas[i]=i+1;
  }
  mostrarTemp("febrero",temperaturas);
  return 0;
} //fin del programa


void mostrarTemp(char *x, float y[])
{
  for(int i=0;i<mes;i++)
  {
    if (5<y[i] && y[i]<25)
    {
      printf("En el mes %s, dia %d hizo %.2f grados\n",x,i,y[i]);
    }  //imprime las temperaturas mayores a 30
  } //fin del siclo
} //fin de la funcion
