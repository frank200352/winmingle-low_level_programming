#include <stdio.h>

/**
 * Author: Adubiaro Franklin Monday
 * Program: WinMingle Community C program
 * Description: C program that prints all possible different combinations of two digits following the specified rules:
 * Only the smallest combinations printed (no 10 after 01).
   Use putchar five times max.
   No char variables.
   */

int main(void)


{
    int i, j;

    for (i = 0; i < 9; i++)

    {
        for (j = i + 1; j < 10; j++)

        {
            putchar(i + '0');

            putchar(j + '0');

            if (i != 8 || j != 9)

            {
                putchar(',');

                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}

