#include <stdio.h>

/**
 * Author: Adubiaro Franklin Monday
 * Program: WinMingle Community C Training
 * Description: C program to print all possible combinations single digit numbers separated by comma and spaces
 */

int main(void)

{ 

	int num;

	for (num = 0; num < 10; num++)

	{ 
		putchar(num + '0');

		if (num != 9)

		{ 
			putchar(',');
			putchar(' ');
		}

	
	}

	putchar('\n');

	return 0;
}
