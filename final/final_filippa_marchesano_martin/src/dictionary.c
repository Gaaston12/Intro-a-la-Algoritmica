/*
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

// Changes majuscule letters to minuscule letters
char toLower (char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c+32;
	}
	return c;
} // to pass the 'A' to 'a'

// assumption: line = "\" ... \", \" ... \"\n"
word_t line2word( char * line )
{
	word_t word = ( word_t ) malloc ( sizeof( struct word_s ) );
	//Seeks for the comma position
	char * posComa = strchr(line, ',');
	char * punt = line;
	//Replaces the comma for a '\0' char
	posComa[0] = '\0';
	//Copies the two parts into the word variable
	word->expression = line;
	word -> definition = posComa+1;

	return word;
}

// parse the buffer line by line converting the lines
// read into the words to be inserted in the dictionary
llist_t parse( char * buffer )
{
	llist_t content = make( );
	char * next;
	char * curr;
	char * line;
	word_t word;
	char * auxLine;
	curr = buffer;
	next = buffer;
	int size;
	char c;

	while(curr[0] != '\0')
	{
		//Seeks for the next '\n' character
		next = strchr(curr, '\n');
		size = next-curr;
		line = (char*) malloc((size+1));
		auxLine = line;
		// Copies all the letters and changes the majuscules for minuscules
		while(curr != next)
		{
			c = toLower(curr[0]);
			auxLine[0] = c;
			auxLine++;
			curr++;
		}
		curr++;
		next++;
		line[size] = '\0';
		// Converts the line into a word_t variable and adds it to the list
 		word = line2word(line);
		add(content,word);
	}
	return content;
}

dictionary_t load( char * file_name )
{
	long size ;
	char * buffer;
	dictionary_t dictionary = (dictionary_t) malloc(sizeof(struct dictionary_s));
	FILE *f = fopen (file_name, "r");
	if (f)
	{
		// Gets the file size
  		fseek (f, 0, SEEK_END);
		size = ftell(f);
		fseek (f, 0, SEEK_SET);
		buffer =(char*)malloc (size + 1);
		if (buffer){
			// Reads the file content into a buffer
			fread (buffer, sizeof(char), size+1, f);
		}

		buffer[size] = '\0';
		fclose (f);
		// Assigns values to the dictionary variable
		dictionary->name	= file_name;
		dictionary->content = parse(buffer);
		dictionary->entries = length(dictionary->content);
		printf("\n%d\n",dictionary -> entries);
	}
		return dictionary;
}

word_t random_word( dictionary_t dictionary )
{
	srand(time(NULL));
  return at( dictionary->content, rand() % ( dictionary->entries) );
}

// Returns the expression of a word, supressing the quotes
char * expression( word_t word )
{
	char * result = (char*) malloc((int)strlen(word -> expression));
	strcpy(result, word -> expression);
	result = &result[1];
	char * fin = result;
	while (fin[0] != '"')
	{
		fin ++;
	}
	fin[0] = '\0';

	return result;
}

// Returns the definition of a word, supressing the quotes
char * definition( word_t word )
{
	char * result = (char*) malloc((int)strlen(word -> definition));
	strcpy(result, word -> definition);
	result = &result[1];
	char * fin = result;
	while (fin[1] != '\0')
	{
		fin ++;
	}
	fin[0] = '\0';

	return result;
}

void print_word( word_t word )
{
	printf( "\n %s ", word->definition );
	printf( "%s:", word->expression );
}
