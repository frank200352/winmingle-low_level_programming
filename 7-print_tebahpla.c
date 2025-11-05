#include <stdio.h>

/**
 * Author: Adubiaro Franklin Monday
 * Program: WinMingle Community C Training
 * Description: this program print alphabets in reverse order
 */

int main(void)

{ 

	char c;

	for (c = 'z'; c >= 'a'; c--)

	{ 

		putchar(c);
	}

	putchar('\n');

	return 0;
}
