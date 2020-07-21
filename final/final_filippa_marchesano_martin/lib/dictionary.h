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

#ifndef DICTIONARY_H
#define DICTIONARY_H

typedef struct word_s* word_t;
typedef struct dictionary_s* dictionary_t;

// word access
char * expression( word_t word );
char * definition( word_t word );

// loads a dictionary from a file
// NULL if error
dictionary_t load( char * file_name );

// random word from the dictionary
word_t random_word( dictionary_t dictionary );

// prints a word
void print_word( word_t word );

#endif
