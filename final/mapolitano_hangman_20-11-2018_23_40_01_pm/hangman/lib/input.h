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

#ifndef INPUT_H
#define INPUT_H

#define ESC 27 // the ESC key

// flush 'stdin'
void flush( void );

// read a char without pressing ENTER
// does not echoes
int getch();

// read a char without pressing ENTER
// echoes
int getche( void );

// reads a string of length 'size'
// it ends with ENTER or 'size' whichever comes first
char * getstr( int size );

#endif
