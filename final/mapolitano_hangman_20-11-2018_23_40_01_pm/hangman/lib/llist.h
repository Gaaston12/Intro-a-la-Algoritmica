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

#ifndef LLIST_H
#define LLIST_H

typedef struct llist_s* llist_t;

// returns an empty list
llist_t make( void );

// is the list empty?
int is_empty( llist_t llist );

// the length of the list
int length( llist_t llist );

// adds an element at the beginning of the list
llist_t add( llist_t llist, void * element );

// adds an element at the end of the list
llist_t end( llist_t llist, void * element );

// inserts an element in a particular position in the list
/*  0 if successful              
 * -1 if the position is invalid */
int ins( llist_t llist, void * element, int position);

// returns the element at the indicated position
/* the position must be valid */
void * at( llist_t llist, int position );

// removes the head of the list (deletes its first element)
/*  0 if successful
 * -1 if the list is empty */
llist_t bhd( llist_t llist );

// deletes an element in a particular position in the list
/*  0 if successful
 * -1 if the position is invalid or the list is empty */
int del( llist_t llist, int position);

// the reverse of a list
llist_t reverse( llist_t llist );

// the sub-list starting at 'from' and ending at 'to'
llist_t sub( llist_t llist, int from, int to );

// a copy of the list
llist_t cpy( llist_t llist );

// the first element of a non-empty list
void * hd( llist_t llist );

// all but the first element of a list
llist_t tl( llist_t llist );

// the concatenation of the lists
llist_t cat( llist_t front, llist_t rear );

// displays the content of the list on the std output
void show( llist_t llist, char * (*elmnt2str)( void * ) );

#endif
