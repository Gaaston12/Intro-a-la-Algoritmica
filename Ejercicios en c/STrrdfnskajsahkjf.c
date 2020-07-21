//Programa echo por Michael Marchesano 40.416.457.... programa de museo que indica en que galeria se encuentra cada obra..
#include <stdio.h>
#include <string.h> //libreria que me permite hacer comparaciones entre cadenas
#define N 50
 //Lexico
char respuesta[N]; //VARIABLES 
char pintor[N];
char nacion[N];
char periodo[N];
 
int main () //programa principal
{
    printf("Ingrese el periodo a visitar..........(escribir en minuscula)\n");
    scanf("%s", periodo);
 	printf("-----------------\n");
    if ((strcmp(periodo, "prehistorico")==0) || (strcmp(periodo,"egipcio")==0)) //strcmp esta funcion me permite comparar la cadena
    {
        strcpy(respuesta,"galeria 1\n");	//esta funcion me permite "asignarle" un valor a la variable de salida respuesta
    }
    else if (strcmp(periodo,"renacimiento")==0) //sino de la funcion principal
    {
        printf("ingrese pintor\n");
        scanf("%s", pintor);
 		printf("-----------------\n");
        if ((strcmp(pintor,"leonardo")==0) || (strcmp(pintor,"michelangelo")==0)) //si dentro del sino de la funcion principal
        {
            strcpy(respuesta,"galeria 2\n");
        }
        else if (strcmp(pintor,"rafael")==0) //sino del si interno
        {
            strcpy(respuesta,"galeria 3\n");
        }
        else if ((strcmp(pintor,"tiziano")==0) || (strcmp(pintor,"boticelli")==0)) //sino del si interno
        {
            strcpy(respuesta,"galeria 4\n");
        }
        else if (strcmp(pintor,"bellini")==0) //sino del si interno
        {
            strcpy(respuesta,"galeria 5b\n");
        }
        else if (strcmp(pintor,"greco")==0) //sino del si interno
        {
            strcpy(respuesta,"galeria 5a\n");
        }
        else //se utiliza para cuando se ingresa un valor no correspondiente
        {
            strcpy(respuesta,"no existe, no hay mas obras de ese pintor\n");
        }
    }
	else if (strcmp(periodo,"barroco")==0)	//sino de la funcion principal
	{
		printf("ingrese la nacion\n");
		scanf("%s", nacion);
		printf("-----------------\n");
		if (strcmp(nacion,"españa")==0) //si dentro del sino de la funcion principal
		{
			strcpy(respuesta,"galeria 6 velazques y murillo\n");
		}
		else if (strcmp(nacion,"italia")==0)  //sino del si interno
		{
			strcpy(respuesta,"galeria 7 caravaggio\n");
		}
		else  //se utiliza para cuando se ingresa un valor no correspondiente
		{
			strcpy(respuesta,"no hay obras en estas naciones\n");
		}
	}	
	else if (strcmp(periodo,"expresionismo")==0) //sino de la funcion principal
	{	
		strcpy(respuesta,"galeria 8 kandiski\n");
	}

	else if (strcmp(periodo,"impresionismo")==0) //sino de la funcion principal
	{	
		strcpy(respuesta,"galeria 8 vangoh\n");
	}
	else if (strcmp(periodo,"fauvismo")==0) //sino de la funcion principal
	{	
		strcpy(respuesta,"galeria 8 magnum\n");
	}
	else if (strcmp(periodo,"cubismo")==0) //sino de la funcion principal
	{	
		strcpy(respuesta,"galeria 9 picasso\n");
	}
	else if (strcmp(periodo,"surrealismo")==0) //sino de la funcion principal
	{ 
		printf("ingrese el pintor\n");
		scanf("%s", pintor);
		printf("-----------------\n");
		if (strcmp(pintor,"dali")==0)  //si dentro del sino de la funcion principal
		{
			strcpy(respuesta,"galeria 10\n");
		}
		else if (strcmp(pintor,"miro")==0) //sino del si interno
		{
			strcpy(respuesta,"galeria 11\n");
		}
		else //se utiliza para cuando se ingresa un valor no correspondiente
		{
			strcpy(respuesta,"no existe el pintor\n");
		}
	}
	 else if(strcmp(periodo,"informalismo")==0 || strcmp(periodo,"hiperralismo")==0) //sino de la funcion principal
	{
		strcpy(respuesta,"galeria 12\n");
	}
	else   //se utiliza para cuando se ingresa un valor no correspondiente
	{
		strcpy(respuesta,"no existe\n"); //sino de la funcion principal
	}

    printf("%s",respuesta);  //muestra en pantalla el valor de la respuesta.
	printf("-----------------\n");

    return 0;
} //cierre final del programa
