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

#include <input.h>
#include <dictionary.h>

#include <hangman.h>

#define GAME_OVER 7 // max number of misses
#define PENALTY   2 // penalty for incorrect guess

// state of hangman
typedef	struct state_s* state_t;

struct state_s
{
	char * help;
	char * password;
	char * secret;
	   int length;
	char * misses;
	   int last;
	   int missed;
};

static void welcome( void )
{
	printf( "\n        **********************************          " );
	printf( "\n        *             HANGMAN            *          " );
	printf( "\n        **********************************          " );
	printf( "\n                                                    " );
	printf( "\n ( press ESC to exit or any other key to continue ) " );
}

void draw_hangman( state_t game )
{
	switch ( game->missed )
	{
		case 0 :
		{
			printf( "\n  ___________ " );
			printf( "\n |/           " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |___         " );
		};
		break;

		case 1 :
		{
			printf( "\n  ___________ " );
			printf( "\n |/     |     " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |___         " );
		};
		break;

		case 2 :
		{
			printf( "\n  ___________ " );
			printf( "\n |/     |     " );
			printf( "\n |     (_)    " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |___         " );
		};
		break;

		case 3 :
		{
			printf( "\n  ___________ " );
			printf( "\n |/     |     " );
			printf( "\n |     (_)    " );
			printf( "\n |      |     " );
			printf( "\n |      |     " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |___         " );
		};
		break;

		case 4 :
		{
			printf( "\n  ___________ " );
			printf( "\n |/     |     " );
			printf( "\n |     (_)    " );
			printf( "\n |   >--|     " );
			printf( "\n |      |     " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |___         " );
		};
		break;

		case 5 :
		{
			printf( "\n  ___________ " );
			printf( "\n |/     |     " );
			printf( "\n |     (_)    " );
			printf( "\n |   >--|--<  " );
			printf( "\n |      |     " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |            " );
			printf( "\n |___         " );
		};
		break;

		case 6 :
		{
			printf( "\n  ___________ " );
			printf( "\n |/     |     " );
			printf( "\n |     (_)    " );
			printf( "\n |   >--|--<  " );
			printf( "\n |      |     " );
			printf( "\n |     /      " );
			printf( "\n |   _/       " );
			printf( "\n |            " );
			printf( "\n |___         " );
		};
		break;

		default :
		{
			printf( "\n  ___________ " );
			printf( "\n |/     |     " );
			printf( "\n |     (_)    " );
			printf( "\n |   >--|--<  " );
			printf( "\n |      |     " );
			printf( "\n |     / \\    " );
			printf( "\n |   _/   \\_  " );
			printf( "\n |            " );
			printf( "\n |___         " );
		};
		break;
	}
}

void display( state_t game )
{
	draw_hangman( game );

	printf( "\n                          " );
	printf( "\n     help: %s", game->help   );
	printf( "\n   secret: %s", game->secret );
	printf( "\n   misses: %s", game->misses );
}

// new game
state_t init( void )
{
	state_t game = ( state_t ) malloc ( sizeof( struct state_s ) );

	// TO COMPLETE

	return game;
}

// update current game
void update( state_t game, char guess )
{
	// TO COMPLETE
}

int play( void )
{
	system( "clear" );
	welcome( );

	// TO COMPLETE
	printf( "\n" );

	return 0;
}
