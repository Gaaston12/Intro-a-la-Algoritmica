/*Programa hecho por Gaston Martin 41.522.639. Actividad de entrega de laboratorio*/
/*ARCHIVO .C */
#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

void menu() {
	printf("\n\nElija una opcion: \n\n");
	printf("1.- INICIALIZAR (crear una lista vacia)\n");
	printf("2.- INSERTAR (al final de la lista)\n");
	printf("3.- INSERTAR EN UN LUGAR (en la posicion elegida)\n");
	printf("4.- ELIMINAR (el primer elemento de la lista)\n");
	printf("5.- MOSTRAR\n");
	printf("6.- SALIR\n\n");
}//fin de la accion mostrar menu

int main(){
	system("clear");//limpia la pantalla
	struct Tnodo *Puntx;
	Puntx = (struct Tnodo *) malloc (sizeof(struct Tnodo));
	int opcion,pos;
	struct Tpersona p;
	Puntx->next = NULL;

	do {
	 	menu();
	 	scanf("%d",&opcion);
	 	switch ( opcion ) {
	  		case 1: system("clear");//limpia la pantalla
	  				ini(&Puntx);
	            	printf("CANTIDAD: %d \n",cantidad(Puntx));
	            	break;
	    	case 2: system("clear");//limpia la pantalla
	            	insertarF(&Puntx);
	            	printf("CANTIDAD: %d \n",cantidad(Puntx));
	            	break;
	        case 3: system("clear");//limpia la pantalla
	        		printf("INGRESE LA POSICION\n");
	        		scanf("%d",&pos);
	            	insertarPos(&Puntx, pos);
	            	printf("CANTIDAD: %d \n",cantidad(Puntx));
	            	break;
	    	case 4: system("clear");//limpia la pantalla
	    			eliminarC(&Puntx);
	            	printf("CANTIDAD: %d \n",cantidad(Puntx));
	            	break;
	        case 5:	system("clear");//limpia la pantalla
	            	printf("CANTIDAD: %d \n\n",cantidad(Puntx));
	        		mostrar(Puntx);
	            	break;
	    	case 6: system("clear");//limpia la pantalla//SALE DEL PROGRAMA
	            	break;       
	    	default: printf( "Opcion no valida\n" );
	             	break;
		}
	} while (opcion!=6);
	return 0;
 }


/* 
gcc -c miLista.c
ar -r libmiLista.a miLista.o
gcc -o ejerPrac9 ejerPrac9.c -L. -miLista.a
----------------------------------------
gcc -o ejerPrac9 ejerPrac9.c liblist.a
*/
