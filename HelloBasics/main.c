/*
    Filename: HelloBasics.c
    Author: Brian Tomlinson <darthlukan@gmail.com>
    Description: A collection of things I'm learning to do in C.
*/

#include <stdio.h>   // pre-processor, please give me stuff from these libs
#include <stdlib.h>  // same as above

int main() {     // main function, can be anywhere in file, always executed first, always type int.
	int a = 5;  // variables require type setting
    if ( a != 1 ) {  // all statements (if-else if-else-while-for ...) require '{'
		printf( "Five doesn’t equal one, learn maths");
		}
	else if ( a == 1 ) { // else if, not elif
		printf( "String theory has been proven o.O!" );
		}
	else {
		printf( "I don’t know anymore..." );
        };
    return 0; // main() is typed as int, it must return an int
}

/* ========================
   This is a block comment
   ========================
*/    // <----- the block comment ended at */

// <--- regular (in-line) comments

/* ============================================================================

int a = 1    // set type of 'a' to int (integer)
string a = 'string' // set type of 'a' to string ('something in quotes')

void function() { <---- this function has no type o.O  can be string, int, etc

if ( conditions ) {

    do fancy pants code here
}
else if ( conditions ) {
    do more fancy pants code
}
else {
    even more fancy stuff as a last resort
}; <--- Don't forget that semi-colon!
(return x) <----- If the function is an int, return an int, else something else
} <--- close out the function, syntax highlighting is a godsend!
*/
