/*Programa hecho por Gaston Martin 41.522.639. Actividad de entrega de laboratorio*/
/*ARCHIVO .C de la biblioteca*/
#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

int vacia(struct Tnodo *x){
	if(x->next==NULL){
		return 1;
	}
	else{
		return 0;
	}
}//fin de la funcion vacia

void eliminarC(struct Tnodo **x){
	struct Tnodo *aux;

	if(vacia(*x)==0){
		aux = (*x)->next;
		(*x)->next = aux->next;
		aux = NULL;
		free(aux);//liberar espacio de memoria
	}
	else{
		printf("NADA PARA BORRAR EN LA LISTA\n");
	}
}//fin de la accion eliminar

void ini(struct Tnodo **x){
	while(vacia(*x)==0){
		eliminarC(&*x);
	}//fin del while	
}//fin de la funcion ini

void insertarF(struct Tnodo **x){
	struct Tnodo *aux, *aux2;
	struct Tpersona p;

	aux = *x;
	while(aux->next!=NULL){
		aux = aux->next;	
	}//fin del mientras	
	aux2 = (struct Tnodo *) malloc (sizeof(struct Tnodo));//obtener un puntero
	aux2->info = cargar(p);//cargo el campo info
	aux2->next = NULL;
	aux->next = aux2;
}//fin de la accion insertar

void insertarPos(struct Tnodo **x, int pos){
	struct Tnodo *aux, *aux2, *nuevo;
	int i=0;
	struct Tpersona p;

	aux = *x;
	while ((i<=(pos-1)) && (aux!=NULL)){
		aux2 = aux;
		aux = aux->next;	
		i++;
	}//fin del mientras	
	if(aux != NULL){
		nuevo = (struct Tnodo *) malloc (sizeof(struct Tnodo));//obtener un puntero
		nuevo->info = cargar(p);//cargo el campo info
		nuevo->next = aux;
		aux2->next = nuevo;
		printf("SE INSERTO EL ELEMENTO\n");
	}
	else{
		printf("LA POSICION NO EXISTE\n");
	}
}//fin de la accion insertarPos


void mostrar(struct Tnodo *x){
	struct Tnodo *aux;
	int i=0;
	aux = x->next;

	printf("LISTA: \n");
	printf("----------------------------------------------------------------\n");
	while(aux!=NULL){
		printf("[ ");
		printf("DNI: %d NOMBRE: %s APELLIDO: %s ",(aux->info).dni, (aux->info).nom, (aux->info).ape);
		printf(" ]\n");
		aux = aux->next;
		i++;
	}
	printf("----------------------------------------------------------------\n");
	if(i==0) printf("La lista esta vacia\n");
}//fin de la accion mostrar

int cantidad(struct Tnodo *x){
	int cant=0;
	struct Tnodo *aux;

	aux = x->next;
	while(aux != NULL){
		cant++;
		aux = aux->next;
	}
	return cant;
}//fin de la accion cantidad

struct Tpersona cargar(){
	struct Tpersona p;

	printf("DNI: ");
	scanf("%d",&p.dni);
	printf("\nNOMBRE: ");
	scanf("%s",&p.nom);
	printf("\nAPELLIDO: ");
	scanf("%s",&p.ape);
	return p;
}//fin de la accion cargar




/* 
gcc -c miLista.c
ar -r libmiLista.a miLista.o
gcc -o ejerPrac9 ejerPrac9.c -L. -miLista.a
----------------------------------------
gcc -o ejerPrac9 ejerPrac9.c liblist.a
*/
