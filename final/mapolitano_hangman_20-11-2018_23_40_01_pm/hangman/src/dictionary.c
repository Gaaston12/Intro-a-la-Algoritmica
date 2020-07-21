/*
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * Copyright (c) 2018 Valentin Cassano.
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
#include <time.h>

#include <llist.h>

#include <dictionary.h>

struct word_s
{
	char * expression;
	char * definition;
};

struct dictionary_s
{
	 char * name;
	llist_t content;
	    int entries;
};

// assumption: line = "\" ... \", \" ... \"\n"
word_t line2word( char * line )
{
	word_t word =
		( word_t ) malloc ( sizeof( struct word_s ) );

	// TO COMPLETE

	return word;
}

// parse the buffer line by line converting the lines
// read into the words to be inserted in the dictionary
llist_t parse( char * buffer )
{
	llist_t content = make( );

	// TO COMPLETE

	return content;
}

dictionary_t load( char * file_name )
{
	dictionary_t dictionary = NULL;

	// TO COMPLETE

	return dictionary;
}

word_t random_word( dictionary_t dictionary )
{
    return at( dictionary->content, rand( ) % dictionary->entries );
}

char * expression( word_t word )
{
	char * result = word -> expression;

	result = &result[1];
	result[strchr(result, '\0') -1] = '\0';


	return result;
}

char * definition( word_t word )
{
	char * result = NULL;

	// TO COMPLETE

	return result;
}

void print_word( word_t word )
{
	printf( "  %s:", word->expression );
	printf( "\n  %s ", word->definition );
}
