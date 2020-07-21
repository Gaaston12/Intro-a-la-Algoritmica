//Programa que calcula la secuencia Fibonacci, hecho por Gaston Martin y Michael Marchessano  c2
#include<stdio.h>
#include<stdlib.h>


void Fibo(int x) //funcion que calcula la secuencia fibbonacci
{
  int a,b,c,i;
  a=0;
  b=1;

  if (x==0)
  {
      printf("0\n");
  } //la secuencia de 0 es 0
  else if (x==1)
  {
    printf("0\n");
  } //la secuencia de 1 es 0
  else if (x==2)
  {
    printf("0\n");
    printf("1\n");
  } //la secuencia de 2 es 0,1
  else
  {
    printf("0\n");
    printf("1\n");
    for(i=3;i<=x;i++)
    {
      c=a+b;
      a=b;
      b=c;
      printf("%d\n",c);
    }
  } //para numeros mayores a 2 la secuencia la suma del numero anterior con el numero actual
}//fin de la funcion fibo

int main(void)  //fucion principal
{
  int n;
  system("clear");
  printf("INgrese la cantidad de elemetos que quiere mostrar de la secuencia fibonacci\n");
  scanf("%d",&n); //ingreso de la cantidad de valores que se quiere ver de la secuencia fibonacci
  printf("------------\n");
  printf("La serie de fibonacci del numero %d es:\n",n);
  Fibo(n);  //invocacion a la funcion
  return 0;
} //fin de la funcion principal
