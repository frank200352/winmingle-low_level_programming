#include <stdio.h>

/**
 * Author: Adubiaro Franklin Monday
 * Program: WinMingle Community C Training
 * Description: A program to print alphabets in lowercase and uppercase
 */

int main(void)

{ 
	char c;

	/* print lowercase alphabet*/

	for ( c = 'a'; c <= 'z'; c++)
	{ 
		putchar(c);
	}

	/* print uppercase alphabet*/

	for ( c = 'A'; c <= 'Z'; c++)

	{ 
		putchar(c);
	}

	return 0;
}

