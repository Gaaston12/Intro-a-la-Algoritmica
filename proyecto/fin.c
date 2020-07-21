#include<stdio.h>	//lirerias
#include<stdlib.h>
#define N 500 		//definicion del maximo del arreglo

struct Tpico		//definicion del tipo para las montañas
{
	char  nom[40];
	float altura;
};
typedef struct Tpico Tpico;						//para no escribir el nombre del tipo cada vez que lo use

struct TData									//definicion del tipo para el arreglo y su cantidad
{
	Tpico arreglo[N];
	int cant;
};
typedef struct TData TData;						//para no escribir el nombre del tipo cada vez que lo use


int vacia(TData x);							//definicion de la funcion 'vacia' para ver si el arreglo contiene algo o no
int llena(TData x);							//definicion de la funcion 'llena' para ver si el arreglo esta lleno o no
void insertar(TData *x, Tpico p);			//accion para incertar un elemento en el arreglo
void suprimir(TData *x);						//accion para eliminar un elemento en el areglo
void mostrar(TData x);						//accion para mostrar el contenido del arreglo

int main()
{
	TData x;
	Tpico mon;
	x.cant = 0;

	system("clear");
	int op=0;

  	do 										//ciclo para que nunca salga del menu a no ser que el usuario lo requiera
  	{
			printf("\t\n ELIJA UNA OPCION DEL PROGRAMA\n");
			printf("\n[1. INGRESAR UNA MONTAÑA O UN PICO           ]\n");
			printf("[2. ELIMINAR LA MONTAÑA MAS ALTA DE LA LISTA ]\n");
			printf("[3. MOSTRAR LA LISTA DE MONTAÑAS             ]\n");
			printf("[4. SALIR                                    ]\n");
			scanf("%i",&op);

   		switch (op)						//switch para hacer la funcion de menu
    	{
      		case 1:
      			system("clear");
						printf("------------------------------------------------------\n");
						printf("ELIGIO INGRESAR UNA MONTAÑA\n");
						printf("------------------------------------------------------\n");
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
						printf("------------------------------------------------------\n");
      			printf("USTED ELIGIO MOSTRAR TODOS LOS ELEMENTOS\n");
						printf("------------------------------------------------------\n");
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
						printf("------------------------------------------------------\n");
						printf("HASTA LUEGO ! \n");
						printf("------------------------------------------------------\n");
      			//sale del programa
      		break;
					default:
						printf("\t LA OPCION INGRESADA ES INCORRECTA\n");
					break;
    	}//fin del switch
		}while(op!=4);//fin del ciclo


	return 0;
}

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
}//fin dela accion vacia

int llena (struct TData x)
{
	if (x.cant >= N)
	{
		return 1;
	}
	else
	{
		return 0;
	}//fin del else
}//fin de la accion llena

void insertar(struct TData *x, struct Tpico p)
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
			while((i < (*x).cant)&&((*x).arreglo[i].altura < p.altura)){
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
	}//fin de la accion insertar

void mostrar(TData x)
{
	for(int i = 0;i < x.cant ;i++)
	{
		printf("\t %s : %.1f \n",x.arreglo[i].nom, x.arreglo[i].altura);
	}//fin del for
}//fin de la accion mostrar

void suprimir(TData *x)
{
	if(vacia(*x)==0)
	{
		(*x).cant--;
	}
}//fin de la accion suprimir
