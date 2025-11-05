#include <stdio.h>

/**
 * Author: Adubiaro Franklin Monday
 * Program: WinMingle Community C Training
 * Description: Print all possible combinations of two two-digit numbers.
   Rules:
   Numbers range from 0–99
   Each number printed with two digits
 */


int main(void)

{
    int i, j;

    for (i = 0; i < 100; i++)

    {
        for (j = i + 1; j < 100; j++)

        {
            putchar((i / 10) + '0');

            putchar((i % 10) + '0');

            putchar(' ');

            putchar((j / 10) + '0');

            putchar((j % 10) + '0');
            
            if (i != 98 || j != 99)

            {
                putchar(',');

                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}
