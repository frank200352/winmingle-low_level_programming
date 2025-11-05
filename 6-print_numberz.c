#include <stdio.h>

/**
 * Author: Adubiaro Franklion Monday
 * Program: WinMingle Community C Training
 * Description: To print all single digit numbers with base 10 starting from 0 but do not use char variables and use only putchar twice
 */

int main(void)

{ 
	int num;

	for (num = 0; num < 10; num++)

	{ 
		putchar(num + '0');

	} 

	putchar('\n');

	return 0;
}
