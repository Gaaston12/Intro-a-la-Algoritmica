#include<stdio.h>
#define max 50;

int esVocal(char x)
{
  if(x=='a'|| x=='e'|| x=='i'|| x=='o'|| x=='u'|| x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
  {
    return 1;
  }
  else
  {
    return 0;
  }

} //fin de la funcion para saver si el caracter es una vocal

void Cargar(Tdata *x)
{
char v;
int i=0;

x.cont=0;
while(i<=20 && x.cont<=10)
{
  printf("Ingrese la letra: ");
  scanf("%c",v);
  if(esVocal(v)=1)  //funcion esVocal devuelve verdadero si v es vocal
  {
    x.arre[i]=v;
    x.cont=x.cont+1;
    i=i+1;
  }
  else
  {
    i=i+1
  }
} //fin de la accion Cargar

char sig(char x)
{
  if(x=='a')
  {
    return 'b';
  }
  else if (x=='A')
  {
    return 'B';
  }
  else if (x=='e')
  {
    return 'f';
  }
  else if (x=='E')
  {
    return 'F';
  }
  else if (x=='i')
  {
    return 'j';
  }
  else if (x=='I')
  {
    return 'J';
  }
  else if (x=='o')
  {
    return 'p';
  }
  else if (x=='O')
  {
    return 'P';
  }
  else if (x=='u')
  {
    return 'w';
  }
  else if (x=='U')
  {
    return 'W';
  }
} //fin de la fuicion sig

void Cambiar(Tdata *x)
{
  int i;
  for(i=0;i<=x.cont;i++)
  {
    x.arre[i]=sig(x.arre[i]);
  }
} //fin de la accion Cambiar

void Mostrat(Tdata *x)
{
  int i;
  for(i=0;i<=x.cont)
  {
    printf("%c",x.arre[i]);
  }
}//fin de la accion mostrar

int main
{
  struct Tarreglo
  {

  }



  return 0;
}
