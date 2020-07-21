/*
 * DOGSAY:
 *
 * The program generates an ASCII picture of a dog with a word of day
 * message. The program is inspired by the classic 'cowsay'; of which
 * you can some info on https://en.wikipedia.org/wiki/Cowsay
 *
 * Copyright (c) 2018 Valentin Cassano.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

/*Filippa Nahuel
  Marchessano Michael 
  Martin Gaston*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <dictionary.h>

/*
 * The dictionaries for this project where obtained from the
 * OmegaWiki project <http://www.omegawiki.org/Special:Ow_downloads>
*/

#define DEFAULT_DICTIONARY "data/def_spa.csv"

// ASCII picture of the dog
void draw_dog( void );

int main( int argc, char ** argv )
{
	dictionary_t dictionary; //= (dictionary_t) malloc(sizeof(struct dictionary_s));
	// TO COMPLETE


	// change the default dictionary
	if(argc > 1){	//if to check the parameters

		if(!strcmp(argv[1],"-d")){	//if to check the parameters are fine if they are

			char * dictionary_name = argv[2]; 
			dictionary = load( dictionary_name );
		}
		else{
			printf("\tERROR!!");
			printf("\tCorrect form ./NameOfFile -d route of dictionary\n");
		}
	}
	else{
		char * dictionary_name = DEFAULT_DICTIONARY;
		dictionary = load( dictionary_name );
		if ( dictionary == NULL ){

			printf( "error creating the dictionary\n" );
			printf( "Correct form ./NameOfFile -d route of dictionary\n" );
			return -1;
		}
	}


	// uncomment once solved
	print_word( random_word( dictionary) );

	draw_dog();
	return 0;
}

void draw_dog( void )
{
	/* This ASCII pic can be found at
     * <https://asciiart.website/index.php?art=animals/dogs> */

	printf( "\n  ------------------------------  ");
	printf( "\n                     __      /    ");
	printf( "\n   ,               ,''e`--o /     ");
	printf( "\n  ((             (  | __,'        ");
  printf( "\n   \\\\~----------' \\_;/         ");
	printf( "\n   (                /             ");
	printf( "\n   /) .__________.  )             ");
	printf( "\n  (( (           (( (             ");
	printf( "\n   ``-'           ``-'          \n");

}
