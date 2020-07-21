/*Programa hecho por Gaston Martin 41.522.639. Actividad de entrega de laboratorio*/
/*ARCHIVO .H*/
#ifndef MILISTA_H
#define MILISTA_H
	struct Tpersona{
			int dni;
			char nom[20];
			char ape[20];
		};

	struct Tnodo{
		struct Tpersona info;
		struct Tnodo *next;
	};
	//accion para inicializar
	void ini(struct Tnodo **x);

	//incertar al final de la lista
	void insertarF(struct Tnodo **x);

	//accion para insertar en posicion
	void insertarPos(struct Tnodo **x, int pos);

	//eliminar el primer elemento 
	void eliminarC(struct Tnodo **x);

	//mostrar los elememtos de la lista
	void mostrar(struct Tnodo *x);

	//accion axuiliar para ver si la lista esta vacia
	int vacia(struct Tnodo *x);

	//accion para llevar la cantidad
	int cantidad(struct Tnodo *x);

	//accion para cargar los elementos
	struct Tpersona cargar();

#endif




/* 
gcc -c miLista.c
ar -r libmiLista.a miLista.o
gcc -o ejerPrac9 ejerPrac9.c -L. -miLista.a
----------------------------------------
gcc -o ejerPrac9 ejerPrac9.c liblist.a
*/
