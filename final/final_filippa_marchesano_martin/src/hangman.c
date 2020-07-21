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
#define PENALTY   7 // penalty for incorrect guess

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
			printf( "\n               ___________ " );
			printf( "\n              |/           " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |___         " );
			printf( "\n                           " );
		};
		break;
		case 1 :
		{
			printf( "\n               ___________ " );
			printf( "\n              |/     |     " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |___         " );
			printf( "\n                           " );
		};
		break;
		case 2 :
		{
			printf( "\n               ___________ " );
			printf( "\n              |/     |     " );
			printf( "\n              |    (º_º)   " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |___         " );
			printf( "\n                           " );
		};
		break;
		case 3 :
		{
			printf( "\n               ___________ " );
			printf( "\n              |/     |     " );
			printf( "\n              |    (º_º)   " );
			printf( "\n              |      |     " );
			printf( "\n              |      |     " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |___         " );
			printf( "\n                           " );
		};
		break;
		case 4 :
		{
			printf( "\n               ___________ " );
			printf( "\n              |/     |     " );
			printf( "\n              |    (º_º)   " );
			printf( "\n              |   >--|     " );
			printf( "\n              |      |     " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |___         " );
			printf( "\n                           " );
		};
		break;
		case 5 :
		{
			printf( "\n               ___________ " );
			printf( "\n              |/     |     " );
			printf( "\n              |    (º_º)   " );
			printf( "\n              |   >--|--<  " );
			printf( "\n              |      |     " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |            " );
			printf( "\n              |___         " );
			printf( "\n                           " );
		};
		break;
		case 6 :
		{
			printf( "\n               ___________ " );
			printf( "\n              |/     |     " );
			printf( "\n              |    (¬_¬)   " );
			printf( "\n              |   >--|--<  " );
			printf( "\n              |      |     " );
			printf( "\n              |     /      " );
			printf( "\n              |   _/       " );
			printf( "\n              |            " );
			printf( "\n              |___         " );
			printf( "\n                           " );
		};
		break;
		default :
		{
			printf( "\n               ___________ " );
			printf( "\n              |/     |     " );
			printf( "\n              |    (x_x)   " );
			printf( "\n              |   >--|--<  " );
			printf( "\n              |      |     " );
			printf( "\n              |     / \\   " );
			printf( "\n              |   _/   \\_ " );
			printf( "\n              |            " );
			printf( "\n              |___         " );
			printf( "\n                           " );
		};
		break;
	}
}

void display( state_t game )
{
	draw_hangman( game );
	printf( "\n                           " );
	printf( "\n     help: %s", game->help   );
	printf( "\n                           " );
	printf( "\n   secret: %s (%d)", game->secret, (int)strlen(game->secret) );
	printf( "\n   misses: %s (%d)\n", game->misses,(int)strlen(game->misses)/2);
}


state_t init( void )
{
	state_t game = ( state_t ) malloc ( sizeof( struct state_s ) );
	// Gets a random word from a dictionary and uses those values to initialize a game
	word_t word = random_word (dictionary);
	char * punt;
	game -> help		= definition(word);
	game -> password	= expression(word);
	game -> secret 		= expression(word);
	game -> misses = malloc(GAME_OVER * 2 + 1);
	punt = game -> secret;

	// Changes all the letters of the secret word for '*'
	while(punt[0] != '\0')
	{
		if(punt[0] != ' ' && punt[0] != '-' && punt[0] != '!' && punt[0] != '.')
		{
			punt[0] = '*';
		}
		punt++;
	}
	game->misses[0] = '\0';
	game->missed = 0;

	return game;
}

// Gets the current game and a guess and unpdates the game state
void update( state_t game, char guess )
{
	char * pass = (char*) malloc (strlen(game -> password) + 1);
	char * secr = (char*) malloc (strlen(game -> secret) + 1);
	pass = game -> password;
	secr = game -> secret;
	char * new;
	int is = 0;

	while (pass[0] != '\0')
	{
		// If the letter is in the word, it is replaced in the secret word and the "is" variable is changed to 1
		if (pass[0] == guess)
		{
			secr[0] = guess;
			is = 1;
		}
		pass++;
		secr++;
	}
	// If the letter isn't in the word, then is added to the missed letters
	if (is == 0)
	{
		new = strchr(game -> misses, '\0');
		new[0] = guess;
		new++;
		new[0] = '-';
		new++;
		new[0] = '\0';
		game -> missed++;
	}
}

int play( void )
{
	system("clear");
	welcome( );
	char c;
	c = getch();

	if (c != '\e')
	{
		char guess;
		int win = 0;
		int lose = 0;
		state_t game = init();
		char * try = malloc ((int)(strlen(game -> password)));
		try[0] = '\0';

		do
		{
			system("clear");
			display(game);
			//printf("%s", game->password ); /*DESCOMENTAR PARA PROBAR*/
			printf("\n------------------------------------------------\n");
			printf( "\n Password:");
			try = getstr(strlen(game->password));
			// Check if a word was entered
			if (strlen(try) > 0)
			{
				//If try is equal to the word, you win
				if (strcmp(try, game->password) == 0)
				{
					win = 1;
				}
				// Else you lose
				else
				{
					lose = 1;
					game -> missed = game -> missed + PENALTY;
				}
			}
			 if (win == 0 && lose == 0)
			 {
			 	//Asks for a letter and updates the game state 
				printf("\n------------------------------------------------\n");
				printf( "\n   letter:");
				guess = getch();
				update(game, guess);
				// Checks for the amount of missed letters
				if ((game -> missed) >= GAME_OVER)
				{
					lose=1;
				}
				// Checks if the word has been discovered
				if (strcmp(game -> secret,game -> password)==0)
				{
					win = 1;
				}
			}
		// the cycle repeats untill you win or lose. Or...both?
		}while(win == 0 && lose == 0);
		if (win == 1)
		{
			system("clear");
			printf( "\n        **********************************          " );
			printf( "\n        *            YOU WIN             *          " );
			printf( "\n        **********************************          " );
			draw_hangman(game);
			printf( "\n      	  Password: %s ", game->password);
			printf( "\n      	  Help: %s ", game->help);
			printf( "\n         Misses: %s ", game->misses);
		}
		else if (lose == 1)
		{
			system("clear");
			printf( "\n        **********************************          " );
			printf( "\n        *             YOU LOSE           *          " );
			printf( "\n        **********************************          " );
			draw_hangman(game);
			printf( "\n         Password: %s", game->password);
			printf( "\n         Help: %s", game->help);
			printf( "\n         Misses: %s ", game->misses);
		}
	}
	printf("\n");
	return 0;
}
