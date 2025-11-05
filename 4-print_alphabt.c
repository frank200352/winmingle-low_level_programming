#include <stdio.h>

/**
 * Author: Adubiaro Franklin Monday
 * Program: WinMingle Community C Training
 * Description: program that print alphabet in lowercase except 'q' and 'e' using two calls
 */

int main(void)

{ 

	char c;

	for (c = 'a'; c <= 'z'; c++)

	{ 
		if (c != 'q' && c != 'e')

		{ 
			putchar(c);
		}

		putchar('\n');
	}

	return 0;
}
