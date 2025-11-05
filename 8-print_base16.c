#include <stdio.h>

/**
 * Author: Adubiaro Franklin Monday
 * Program: WinMingle Community C Training
 * Description: Program to print all numbers in base 16 in lowercase
 */

int main(void)

{ 

	int num;

	/* print digits 0 to 9 */

	for (num = 0; num < 10; num++)

	{ 

		putchar( num + '0');
	}

	/* print letters a to f */

	for (num = 'a'; num <= 'f'; num++)

	{ 

		putchar(num);
	}

	putchar('\n');

	return 0;
}
