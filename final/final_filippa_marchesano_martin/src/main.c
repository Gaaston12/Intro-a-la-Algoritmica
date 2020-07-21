/*

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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <dictionary.h>
#include <hangman.h>

// The dictionaries for this project where obtained from the
// OmegaWiki project <http://www.omegawiki.org/Special:Ow_downloads>

#define DEFAULT_DICTIONARY "data/def_spa.csv"

dictionary_t dictionary = NULL;

int main( int argc, char ** argv )
{
	// Assigns the default name to the dictionary
	char * dictionary_name = DEFAULT_DICTIONARY;

	// Checks for extra parameters
	if ( argc > 1 )
	{
		// Checks if the first extra parameter is "-d"
		if ( !strcmp( argv[ 1 ], "-d" ) )
		{
			// Seeks for the dictionary name
			if (argc > 2)
			{
				dictionary_name = argv[ 2 ];
			}
		}
		// if the first parameter is not "-d", informs how to execute the program properly
		else
		{
			printf( "usage: hangman [-d dictionary_file]\n" );
			return 0;
		}
	}

	// Checks if there is not dictionary in the specified path
	dictionary = load( dictionary_name );

	if ( dictionary == NULL )
	{
		printf( "error loading the dictionary\n" );
		return -1;
	}

	return play();
}
