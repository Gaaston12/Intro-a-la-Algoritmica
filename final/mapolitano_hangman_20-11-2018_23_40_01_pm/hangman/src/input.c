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
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

#include <input.h>

// thanks for flush goes to
// https://www.linuxquestions.org/questions/programming-9/how-to-check-if-buffer-is-empty-in-c-874643/

void flush( void )
{
	int const descriptor = fileno( stdin );
	int       flags;

	flags = fcntl( descriptor, F_GETFL );
	fcntl( descriptor, F_SETFL, flags | O_NONBLOCK );

	while ( getc( stdin ) != EOF);

	fcntl( descriptor, F_SETFL, flags );
}

// thanks for getch and getche goes to
// 'How to implement getch() function of C in Linux?'
// see StackOverflow

int getch( void )
{
    struct termios oldattr, newattr;
    int    ch;

    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );

    return ch;
}

int getche( void )
{
    struct termios oldattr, newattr;
    int    ch;

    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );

    return ch;
}

char * getstr( int size )
{
	char * str = malloc( size );
	  char chr;

	memset( str, '\0', size );

	for ( int i = 0; i < size; i++ )
	{
		if ( ( chr = getche( ) ) == '\n' )
		{
			break;
		};

		str[ i ] = chr;
	};

	return str;
}
