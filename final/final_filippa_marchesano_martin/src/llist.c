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
#include <llist.h>

typedef struct linkable_s* linkable_t;

struct linkable_s
{
	void * content;
	struct linkable_s *next;
};

/* The struct llist_s is the realization of llist_t (declared in llist.h) */

struct llist_s
{
	linkable_t head;
	int size;
};

linkable_t create( void * element )
{
	linkable_t linkable = ( linkable_t ) malloc ( sizeof( struct linkable_s ) );	
	
	linkable->content = element;
	linkable->next    = NULL;
	
	return linkable;
}

llist_t make( void )
{
	llist_t llist = ( llist_t ) malloc ( sizeof( struct llist_s ) );
	
	llist->head = NULL;
	llist->size = 0;
	
	return llist;
}

int is_empty( llist_t llist )
{
	return ( llist->size == 0 );
}

int length( llist_t llist )
{
	return llist->size;
}

llist_t add( llist_t llist, void * element )
{
	linkable_t linkable = create( element );
	
	linkable->next = llist->head;
	llist->head = linkable;
	llist->size = (llist->size) + 1;
	
	return llist;
}

int ins( llist_t llist, void * element, int position)
{
	if ( position < 0 || position > llist->size )
	{
		return -1;
	};
	
	if ( !position )
	{
		add( llist, element );
		return 0;
	}
	
	/* move the cursor to the indicated position */
	linkable_t cursor = llist->head;
	
	for ( int i = 0; i < position - 1; i++ )
	{
		cursor = cursor->next;
	};
	
	/* create the new node */
	linkable_t linkable = create( element );
	
	/* link the two nodes */
	linkable->next = cursor->next;
	cursor->next = linkable;
	
	/* increase the number of elements in the list */
	llist->size = (llist->size) + 1;
	
	return 0;
}

llist_t end( llist_t llist, void * element )
{
	ins( llist, element, llist->size );
	
	return llist;
}

llist_t bhd( llist_t llist )
{
	if ( is_empty( llist ) )
	{
		return NULL;
	}
	
	linkable_t cursor = llist->head;
	llist->head = (llist->head)->next;
	
	// frees the memory that has been allocated using malloc
	free( cursor );
	
	llist->size = (llist->size) - 1;
	
	return llist;
}

void * at( llist_t llist, int position )
{
	linkable_t cursor = llist->head;
	
	for ( int i = 0; i < position ; i++ )
	{
		cursor = cursor->next;
	};
	
	return cursor->content;
}

int del( llist_t llist, int position)
{
	if ( position < 0 || position > llist->size )
	{
		return -1;
	};
	
	if ( is_empty( llist ) )
	{
		return -1;
	}
	
	if ( !position )
	{
		bhd( llist );
		
		return 0;
	}
	
	/* move the cursor to the indicated position */
	linkable_t cursor = llist->head;
	
	for ( int i = 0; i < position - 1; i++ )
	{
		cursor = cursor->next;
	};
	
	linkable_t linkable = cursor->next;
	cursor->next = (cursor->next)->next;
	
	// frees the memory that has been allocated using malloc
	free( linkable );
	
	llist->size = (llist->size) - 1;
	
	return 0;
}

llist_t reverse( llist_t llist )
{
	llist_t result = make();

	for ( int i = 0; i < llist->size ; i++ )
	{
		add( result, at( llist, i ));
	};

	return result;
}

llist_t cat( llist_t front, llist_t rear )
{
	llist_t result = make();

	for ( int i = 0; i < front->size ; i++ )
	{
		end( result, at( front, i ));
	};
	
	for ( int i = 0; i < rear->size ; i++ )
	{
		end( result, at( rear, i ));
	};

	return result;
}


llist_t sub( llist_t llist, int s, int e )
{
	llist_t result = make();

	for ( int i = s; i < e ; i++ )
	{
		end( result, at( llist, i ));
	};

	return result;
}

llist_t cpy( llist_t llist )
{
	return sub( llist, 0, llist->size );
}

void * hd( llist_t llist )
{
	return (llist->head)->content;
}

llist_t tl( llist_t llist )
{
	return sub( llist, 1, llist->size );
}

void show( llist_t llist, char * (*elmnt2str)( void * ) )
{
	printf( "[ " );
	
	for ( int i = 0; i < llist->size; i++ )
	{
		printf( "%s ", elmnt2str( at( llist, i ) ) );
	};
	
	printf( "]" );
}
