#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Author: Adubiaro Franklin Monday
 * Program: WinMingle Community C Training
 * Description: A program that assign a random number to a variable and prints the output to be positive, negative or zero
 */

int main(void)
{ 
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)

	{ 
		printf("%d is positive\n", n);
	}

	else if (n == 0)

	{
		printf("%d is zero\n", n);
	}

	else

	{
		printf("%d is negative\n", n);
	}

	return (0);
}
