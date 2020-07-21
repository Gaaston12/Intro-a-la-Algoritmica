/*El Club Alpino de Rio Cuarto, cuenta entre sus integrantes un entusiasta grupo de personas que han
escalado distintos picos de la Argentina y de otros países. Para dejar constancia de esta información
solicitan un algoritmo que les permita administrar eso datos. El departamento de Informática propone un
primer diseño el cual contempla almacenar los nombre de los picos y la altura correspondiente a cada uno
en un registro con dos campos:
Tpico=<nom ε Cadena, altura ε R >.
El conjunto de datos se almacenará en un arreglo de registros de Tpico, de acuerdo al
siguiente léxico
N= 500
Tpico= <nom ε Cadena, altura ε R >.
Tarre= arreglo [1..N] de Tpico
TData= <a ε Tarre, cant ε [0..N+1]>
Montañas ε TData
Para poder administrar la información se decide desarrollar las siguientes acciones y/o funciones:
a)
Una función llamada Vacia que reciba como parámetro una variable de tipo TData, y
devuelva verdadero si la lista está vacía y sino debe devolver falso.

b)
Una función llamada Llena que reciba como parámetro una variable de tipo TData, y
devuelva verdadero si el arreglo está completamente lleno (es decir si ya tiene 500 registros
cargados) y sino debe devolver falso.

c)
Una acción que permita insertar los datos de una montaña, la inserción se realizará
manteniendo ordenados los registro de acuerdo a la altura de la montaña. Para ello se pasará
como parámetros una variable de tipo TData y un registro con los datos de la montaña a
insertar. El registro debe quedar en el arreglo ordenado de acuerdo a la altura de la montaña.
Después de ejecutada la acción, la cantidad de registros en la variable TData debe quedar
incrementada en una unidad.

d)
Una acción que permita suprimir la montaña mas alta. La sola llamada a esta acción debe
eliminar la montaña mas alta (sin importar cuál es su nombre). Después de ejecutada la
acción, la cantidad debe quedar decrementada en una unidad (en la variable de tipo TData).

e)
Una acción que permita mostrar todos los nombres de la lista de montañas.

Desarrollar un algoritmo principal que permita mediante un menú acceder a las acciones Alta, Baja,
Listar, que invocarán respectivamente a las acciones insertar, suprimir y mostrar.
Implementar en Lenguaje C la solución completa. Entregar el código fuente debidamente comentado.
Para el desarrollo y solución al problema planteado se deben conformar grupos de 2 o tres alumnos.
Uno solo del grupo debe subir el código fuente. (en el código y a modo de comentario deben incluir
el nombre de los autores del programa).

IMPORTANTE. Antes del receso de invierno se deben comunicar quienes conformar el grupo de trabajo
enviando un mail al profesor de actividades prácticas
*/

//PROGRAMA QUE TE PERMITE INGRESAR LOS NOMBRES Y ALTURAS CORRESPONDIENTES A CADA MONTAÑA...
//HECHO POR:  NAHUEL FILIPPA, GASTON EZEQUIEL MARTIN,   MICHAEL BRIAN MARCHESANO

#include<stdio.h>                 //lirerias
#include<stdlib.h>
#define N 500                     //definicion del maximo del arreglo

struct TPico                      //definicion del tipo para las montañas
{
  char  nom[40];                  //definimos el tamaño de la cadena
  float altura;
};
typedef struct TPico TPico;       //para no escribir el nombre del tipo cada vez que lo use

struct TData                      //definicion del tipo para el arreglo y su cantidad
{
  TPico arreglo[N];
  int cant;
};
typedef struct TData TData;       //para no escribir el nombre del tipo cada vez que lo use

int vacia(TData x);               //definicion de la funcion 'vacia' para ver si el arreglo contiene algo o no
int llena(TData x);               //definicion de la funcion 'llena' para ver si el arreglo esta lleno o no
void insertar(TData *x, TPico p); //accion para incertar un elemento en el arreglo
void suprimir(TData *x);          //accion para eliminar un elemento en el areglo
void mostrar(TData x);            //accion para mostrar el contenido del arreglo

int main()
{
  TData x;
  TPico mon;
  x.cant = 0;

  system("clear");
  int op=0;

    do  //ciclo para que nunca salga del menu a no ser que el usuario lo requiera
    {
      printf("\t\n ELIJA UNA OPCION DEL PROGRAMA\n");
      printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      printf("CANTIDAD DE ELEMENTOS: %i\n",x.cant);
      printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      printf("\n[1. INGRESAR UNA MONTAÑA O UN PICO           ]\n");
      printf("[2. ELIMINAR LA MONTAÑA MAS ALTA DE LA LISTA ]\n");
      printf("[3. MOSTRAR LA LISTA DE MONTAÑAS             ]\n");
      printf("[4. SALIR                                    ]\n");
      scanf("%i",&op);

      switch (op) //switch para hacer la funcion de menu
      {
          case 1: //cada "case" es una opcion del menu cuando se ejecuta el programa.
            system("clear");
            printf("---------------------------\n");
            printf("ELIGIO INGRESAR UNA MONTAÑA\n");
            printf("---------------------------\n");
            printf ("Ingrese el nombre de la montana\n");
            scanf ("%s", &mon.nom);
            printf ("Ingrese la altura\n");
            scanf ("%f", &mon.altura);
            insertar(&x, mon);
          break;
          case 2:
            system("clear");
            printf("------------------------------------------------------\n");
            printf("USTED ELIGIO ELIMINAR LOS DATOS DE LA MONTAÑA MAS ALTA\n");
            printf("------------------------------------------------------\n");
            if(vacia(x)==0)
            {
              suprimir(&x);
            }
            else
            {
              printf("EL ARREGLO NO TIENE NADA CARGADO PARA PODER BORRAR\n");
            }
          break;
          case 3:
            system("clear");
            printf("----------------------------------------\n");
            printf("USTED ELIGIO MOSTRAR TODOS LOS ELEMENTOS\n");
            printf("----------------------------------------\n");
            if(vacia(x)==0)
            {
              mostrar(x);
            }
            else
            {
              printf("NO HAY NADA CARGADO PARA MOSTRAR\n");
            }
          break;
          case 4:
            system("clear");
            printf("~~~~~~~~~~~~~~\n");
            printf("HASTA LUEGO!!!\n");
            printf("~~~~~~~~~~~~~~\n");
            //sale del programa
          break;
          default: //Te indica que ingresaste una opcion incorrecta a la dada en el menu.
            printf("\t LA OPCION INGRESADA ES INCORRECTA\n");
          break;
      }//fin del switch
    }while(op!=4);//fin del ciclo
  return 0;
}


//Esta funcion indica si el arreglo esta vacio o no.
int vacia (struct TData x)
{
  if (x.cant <= 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
//fin dela accion vacia

//Esta funcion indica si el arreglo contiene algo.
int llena (struct TData x)
{
  if (x.cant >= N)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
//fin de la accion llena

//Esta funcion nos permite ingresar los datos "nombre y altura" en el arreglo de forma ordenada (menor a mayor).
void insertar(struct TData *x, struct TPico p)
{
  int i, j;
  i = 0;
  j = 0;
  if (llena(*x) == 0)
  {
    if (vacia(*x) == 1)
    {
      (*x).cant = 1;
      (*x).arreglo[0] = p;
    }
    else
    {
      while((i < (*x).cant)&&((*x).arreglo[i].altura < p.altura))
      {
        i++;
        }
        j = i;
        (*x).cant++;
        for (i = (*x).cant; i > j; i--)
        {
          (*x).arreglo[i] = (*x).arreglo[i-1];
        }
      }
      (*x).arreglo[j] = p;
    }
  }
//fin de la accion insertar

//Muestra los datos ingresados en el arreglo.
void mostrar(TData x)
{
  for(int i = 0;i < x.cant ;i++)
  {
    printf("\t %s : %.1f \n",x.arreglo[i].nom, x.arreglo[i].altura);
  }
}
//fin de la accion mostrar

//Esta funcion nos permite borrar la montaña mas alta del arreglo.
void suprimir(TData *x)
{
  if(vacia(*x)==0)
  {
    (*x).cant--;
  }
}
//fin de la accion suprimir
