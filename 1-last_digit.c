#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Author: Adubiaro Franklin Monday
 * Program: WinMingle Community C Training
 * Description: A program that prints the last digit of a random number
 */

int main(void)

{ 
	int n;

	int last_digit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;


	
        /* get the last digit*/

	last_digit = n % 10;

	/* Print the last digit and appropriate message */

	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)

	{
		printf("greater than 5\n");
	}

	else if (last_digit == 0)

	{
		printf("0\n");
	}

	else 

	{ 
		printf("less than 6 and not 0\n");

	}

	return 0;
}
