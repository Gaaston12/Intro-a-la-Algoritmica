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

typedef struct linkable_s* linkable_t;

struct word_s{
	char * expression;
	char * definition;
};

struct dictionary_s{
	char * name;
	llist_t content;
	int entries;
};

word_t line2word( char * line ){
	char * posComa = strchr(line, ',');
	char * punt = line;
	word_t word = (word_t) malloc (sizeof(struct word_s));
	posComa[0] = '\0';
	word->definition = line;
	word -> expression = posComa+1;

	return word;
}

llist_t parse( char * buffer ){

	char * next;
	char * curr;
	char * line;
	word_t word;
	char * auxLine;
	llist_t content = make();
	curr = buffer;
	next = buffer;
	int size;

	while(curr[0] != '\0'){
		next = strchr(curr, '\n');
		size = next-curr;
		line = (char*) malloc((size+1));
		auxLine = line;
		while(curr != next){
			auxLine[0] = curr[0];
			auxLine++;
			curr++;
		}
		curr++;
		next++;
		line[size] = '\0';
		word = line2word(line);
		add(content,word);
	}
	return content;
}

dictionary_t load( char * file_name ){
	long size ;
  	char * buffer;
	dictionary_t dictionary = (dictionary_t) malloc(sizeof(struct dictionary_s));

	FILE *f = fopen (file_name, "r");

  	if (f){
	  	fseek (f, 0, SEEK_END);
		size = ftell(f);
	  	fseek (f, 0, SEEK_SET);
	  	buffer =(char*)malloc (size + 1);
	  	if (buffer){
	  		fread (buffer, sizeof(char), size+1, f);
	  	}

		buffer[size] = '\0';
		fclose (f);

		dictionary->name	= file_name;
		dictionary->content = parse(buffer);
  		dictionary->entries = length(dictionary->content);
	}
	return dictionary;
}

word_t random_word( dictionary_t dictionary ){
	srand(time(NULL));
    return at( dictionary->content, rand() % ( dictionary->entries) );
}

void print_word( word_t word ){
	printf( "  %s:", word->definition);
	printf( "\n  %s ", word->expression );
}
