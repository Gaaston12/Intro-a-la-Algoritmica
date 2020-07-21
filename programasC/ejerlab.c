#include<stdio.h>
char letra;
int esMayuscula(char c);
int esMinuscula(char c);
int esVocal(char c);
int main()
{
	printf("\n Ingrese caracter: ");
	scanf("%c",&letra);
	
	if (esMayuscula(letra))
		printf("\n \t El caracter ingresado (%c) es una mayuscula.", letra);
		else if(esMinuscula(letra)) 
			printf("\n \t El caracter ingresado (%c) es una minuscula.",letra);
	if (esVocal(letra))
		printf("\n\t El caracter ingresado (%c) es una VOCAL.", letra);
	printf("\n Termino..\n");
}
int esMayuscula(char c)
	{
		return ((c>='A')&&(c<='Z'));
	}
int esMinuscula(char c)	
	{
		return ((c>='a')&&(c<='z'));
	}
int esVocal(char c)
	{
		return (c=='a'|| c=='e'|| c=='i'|| c== 'o'|| c=='u'|| c=='A'|| c=='E'|| c=='I'||c=='O'||c=='U');
	}
	
